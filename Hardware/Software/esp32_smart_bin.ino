// Smart Dustbin – ESP32 Fog Computing Example
// Measures fill level and sends data when > 50%

void setup() {
  // initialize ultrasonic sensor and LoRa/MQTT here
}

void loop() {
  float distance_cm = 0;           // read from ultrasonic sensor
  float bin_height = 60.0;         // example height in cm
  float fill_percent = (bin_height - distance_cm) / bin_height * 100.0;

  if (fill_percent > 50.0) {
    // calculate time to reach 50% and predict full time
    // send JSON data via MQTT over LoRa
  }

  // go to deep sleep for some minutes
}
