
#include <ESP8266WiFi.h>
#include <espnow.h>


// REPLACE WITH THE MAC Address of your receiver
uint8_t broadcastAddress[6];

//Define the arry to store MAC addresser of Controllar
uint8_t MAC[6];
int COM ;

//Define vriable to store incoming data
uint8_t incomingMAC[6];
int incomingCOM ;


// Variable to store if sending data was successful
String success;

//Structure example to send data
//Must match the receiver structure
typedef struct struct_message {
 uint8_t MAC[6];
 int COM;
} struct_message;

//Create a struct_message called MAC to hold MAC add
struct_message MACOM;
//create a struct_massage to hold incomming MAC add
struct_message incomingMACOM;

const long interval = 10000; 
unsigned long previousMillis = 0; // send readings timer


// Callback when data is sent
void OnDataSent(uint8_t *mac_addr, uint8_t sendStatus) {
  Serial.print("Last Packet Send Status: ");
  if (sendStatus == 0) {
    Serial.println("Delivery success");
  }
  else {
    Serial.println("Delivery fail");
  }
}

// Callback function that will be executed when data is received
void OnDataRecv(uint8_t * mac, uint8_t *incomingData, uint8_t len) {
  memcpy(&incomingMACOM, incomingData, sizeof(incomingMACOM));
  Serial.print("Bytes received: ");
  Serial.println(len);
  for(int i =0 ; i<=6; i++){
      incomingMAC[i] = incomingMACOM.MAC[i];
  }
  incomingCOM = incomingMACOM.COM;
}

void getCOM(){

  MAC[0] = 0xE8;
  MAC[1] = 0xDB;
  MAC[2] = 0x84;
  MAC[3] = 0xDF;
  MAC[4] = 0x30;
  MAC[5] = 0x5A;
  COM = 13;
  }

void printIncomingMACCOM(){
  //Display reading in serial Monitor
  Serial.println("Incoming Data");
  
  Serial.print("MAC add : ");
  for( int i =0; i<6; i++){
    Serial.print(incomingMAC[i]);
    Serial.print(" ");
  }
  
  Serial.println();
  Serial.print("COM port : ");
  Serial.print(incomingCOM);
  Serial.println();
   
}


void setup() {
  // Init Serial Monitor
  Serial.begin(115200);

  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  // Init ESP-NOW
  if (esp_now_init() != 0) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Set ESP-NOW Role
  esp_now_set_self_role(ESP_NOW_ROLE_COMBO);

  // Once ESPNow is successfully Init, we will register for Send CB to
  // Register for a callback function that will be called when data is received
  esp_now_register_recv_cb(OnDataRecv);
  uint8_t sendStatus;
   { 
   for(int i = 0 ; i < 6 ; i++){
    broadcastAddress[i]=incomingMAC[i];
   }
  
  // Register peer
  esp_now_add_peer(broadcastAddress, ESP_NOW_ROLE_COMBO, 1, NULL, 0);

  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);
  
   }
}

void setMAC()
   { 
   for(int i = 0 ; i < 6 ; i++){
    broadcastAddress[i]=incomingMAC[i];
   }
  
  // Register peer
  esp_now_add_peer(broadcastAddress, ESP_NOW_ROLE_COMBO, 1, NULL, 0);

  }

void loop() {

   unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you updated the DHT values
    previousMillis = currentMillis;


   //Get MAC addrese and COM port
  getCOM();

  //set values to send
  for (int i = 0; i < 6 ; i++){
     MACOM.MAC[i] = MAC[i];
  }
  
  MACOM.COM = COM ;
  
    

    // Send message via ESP-NOW
    esp_now_send(broadcastAddress, (uint8_t *) &MACOM , sizeof(MACOM));
    

   printIncomingMACCOM();
   uint8_t sendStatus;
   while (sendStatus == 1 ){
      setMAC();
      esp_now_register_send_cb(OnDataSent);
   }
  }
}
