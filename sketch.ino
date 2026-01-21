#define BLYNK_TEMPLATE_ID "TMPL3CCkfCa6c"
#define BLYNK_TEMPLATE_NAME "IOT Home Automation"
#define BLYNK_AUTH_TOKEN "nXMjtQFOFu2sqrZ7YPsr1t35TYRL_pnI"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <ezButton.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// Relay & LED pins
#define L1 25
#define L2 26
#define L3 27
#define L4 14

// Button pins
#define B1 32
#define B2 33
#define B3 34
#define B4 35

// Create eZButton objects
ezButton button1(B1);
ezButton button2(B2);
ezButton button3(B3);
ezButton button4(B4);

// Store estates
int state1 = 0, state2 = 0, state3 = 0, state4 = 0;

// Blynk Handlers (App Controls)
BLYNK_WRITE(V0) {
  state1 = param.asInt();
  digitalWrite(L1, state1);
  Serial.println(state1 ? "Light 1 ON (Blynk)" : "Light 1 OFF (Blynk)");
}

BLYNK_WRITE(V1) {
  state2 = param.asInt();
  digitalWrite(L2, state2);
  Serial.println(state2 ? "Light 2 ON (Blynk)" : "Light 2 OFF (Blynk)");
}

BLYNK_WRITE(V2) {
  state3 = param.asInt();
  digitalWrite(L3, state3);
  Serial.println(state3 ? "Light 3 ON (Blynk)" : "Light 3 OFF (Blynk)");
}

BLYNK_WRITE(V3) {
  state4 = param.asInt();
  digitalWrite(L4, state4);
  Serial.println(state4 ? "Light 4 ON (Blynk)" : "Light 4 OFF (Blynk)");
}

// Setup
void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

  // Relay Pins
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);

  // Button Debounce
  button1.setDebounceTime(50);
  button2.setDebounceTime(50);
  button3.setDebounceTime(50);
  button4.setDebounceTime(50);

  Serial.println("ESP32 Home Automation with ezButton Ready...");
}

// Loops
void loop() {
  Blynk.run();

  button1.loop();
  button2.loop();
  button3.loop();
  button4.loop();

  if (button1.isPressed()) {
    state1 = !state1;
    digitalWrite(L1, state1);
    Blynk.virtualWrite(V0, state1);
    Serial.println(state1 ? "Light 1 ON (Button)" : "Light 1 OFF (Button)");
  }

  if (button2.isPressed()) {
    state2 = !state2;
    digitalWrite(L2, state2);
    Blynk.virtualWrite(V1, state2);
    Serial.println(state2 ? "Light 2 ON (Button)" : "Light 2 OFF (Button)");
  }

  if (button3.isPressed()) {
    state3 = !state3;
    digitalWrite(L3, state3);
    Blynk.virtualWrite(V2, state3);
    Serial.println(state3 ? "Light 3 ON (Button)" : "Light 3 OFF (Button)");
  }

  if (button4.isPressed()) {
    state4 = !state4;
    digitalWrite(L4, state4);
    Blynk.virtualWrite(V3, state4);
    Serial.println(state4 ? "Light 4 ON (Button)" : "Light 4 OFF (Button)");
  }
}
