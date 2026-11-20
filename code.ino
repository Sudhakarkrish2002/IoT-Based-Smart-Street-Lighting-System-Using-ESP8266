#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

// WiFi credentials
const char* ssid = "gopika";
const char* pass = "12345678";

// KiwisIoT Topic
const char* topic = "dash_1795168680395";

// Pin configuration
#define PIR_PIN D5
#define LED_PIN D6
#define LDR_PIN A0

int threshold = 500;

KiwisIoT kiwisiot(ssid, pass, topic);

void setup() {

  Serial.begin(9600);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  Serial.println("Automatic Street Light Started");

  kiwisiot.begin();
}

void loop() {

  kiwisiot.run();

  int pirValue = digitalRead(PIR_PIN);
  int ldrValue = analogRead(LDR_PIN);

  int ledStatus = 0;

  // Both conditions must be satisfied
  if (pirValue == HIGH && ldrValue < threshold) {

    digitalWrite(LED_PIN, HIGH);
    ledStatus = 1;

    Serial.println("Night + Motion Detected - LED ON");

  }

  else {

    digitalWrite(LED_PIN, LOW);
    ledStatus = 0;

    Serial.println("LED OFF");

  }

  // Send only LDR and LED values
  kiwisiot.send("0", ldrValue);
  kiwisiot.send("1", ledStatus);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  Serial.print("LED Status: ");
  Serial.println(ledStatus);

  Serial.println("-------------------");

  delay(2000);
}
