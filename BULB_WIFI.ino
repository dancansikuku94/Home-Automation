
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "6qPCdfcEFKEfuGsneml8IAC0CPnZKGgh";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "enginneer";
char pass[] = "wendymutua";

int led= 4;
void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  pinMode (led, OUTPUT);
}

void loop()
{
  Blynk.run();
}
