/*******************************************************
 * Smart Air Purifier with AQI Index Monitoring
 * Microcontroller: ESP32
 * Sensor: MQ135
 * Actuator: Relay (controls fan/purifier)
 * Display: 16x2 LCD (I2C)
 *******************************************************/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define MQ135_PIN 34        // Analog input pin for MQ135
#define RELAY_PIN 26        // GPIO pin to control relay

// AQI Thresholds
#define AQI_THRESHOLD 150   // When AQI exceeds this, purifier turns ON

// LCD setup (address 0x27 is common for I2C LCD)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  
  pinMode(MQ135_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Ensure purifier is OFF at start

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Smart Air Purifier");
  lcd.setCursor(0,1);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Step 1: Read MQ135 sensor value
  int sensorValue = analogRead(MQ135_PIN);

  // Step 2: Convert analog value to approximate gas concentration (PPM)
  // MQ135 returns 0-4095 (ESP32 ADC) -> scale to approximate AQI
  float voltage = sensorValue * (3.3 / 4095.0); // ESP32 ADC reference 3.3V
  float airQualityIndex = mapAQI(voltage);      // Custom AQI mapping function

  // Step 3: Display AQI on LCD
  lcd.setCursor(0,0);
  lcd.print("AQI: ");
  lcd.print((int)airQualityIndex);
  lcd.print("      ");

  // Step 4: Control Relay based on AQI
  if (airQualityIndex > AQI_THRESHOLD) {
    digitalWrite(RELAY_PIN, HIGH); // Turn ON purifier
    lcd.setCursor(0,1);
    lcd.print("Purifier: ON  ");
  } else {  
    digitalWrite(RELAY_PIN, LOW);  // Turn OFF purifier
    lcd.setCursor(0,1);
    lcd.print("Purifier: OFF ");
  }

  // Optional: print to Serial for debugging
  Serial.print("Sensor: "); Serial.print(sensorValue);
  Serial.print(" | Voltage: "); Serial.print(voltage);
  Serial.print(" | AQI: "); Serial.println(airQualityIndex);

  delay(2000); // Update every 2 seconds
}

/*******************************************************
 * Custom function to map sensor voltage to AQI
 * This is a simplified approach. For accurate AQI,
 * calibrate the sensor using known gas concentrations
 *******************************************************/
float mapAQI(float voltage) {
  // MQ135 gives higher voltage for cleaner air, lower for polluted
  // We'll invert and scale it for demonstration (0-500 AQI scale)
  float aqi = (3.3 - voltage) * (500.0 / 3.3);
  if(aqi < 0) aqi = 0;
  if(aqi > 500) aqi = 500;
  return aqi;
}
