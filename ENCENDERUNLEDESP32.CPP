// Pin al que está conectado el LED
const int ledPin = 2; // Puedes usar otro pin digital del ESP32

void setup() {
  // Inicializa el pin del LED como una salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Enciende el LED (nivel alto)
  digitalWrite(ledPin, HIGH);
  // Espera 1 segundo
  delay(1000);
  // Apaga el LED (nivel bajo)
  digitalWrite(ledPin, LOW);
  // Espera 1 segundo
  delay(1000);
}