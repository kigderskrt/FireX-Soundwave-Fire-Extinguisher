CODE VIEW
#include <SoftwareSerial.h>
const String PHONE_1 = "+639630521405";
const String PHONE_2 = "+639630521405"; //optional
const String PHONE_3 = "+639630521405"; //optional
#define rxPin 2
#define txPin 3
#define flame_sensor_pin 5
#define buzzer_pin 4
SoftwareSerial sim800L(rxPin, txPin);
boolean fire_flag = false;
void setup() {
Serial.begin(115200);
sim800L.begin(9600);
pinMode(flame_sensor_pin, INPUT);
pinMode(buzzer_pin, OUTPUT);
digitalWrite(buzzer_pin, LOW);
Serial.println(sim800L.available());
sim800L.println("AT");
delay(1000);
sim800L.println("AT+CMGF=1");
delay(1000);
}
void loop() {
while (sim800L.available()) {
Serial.println(sim800L.readString());
}
int flame_value = digitalRead(flame_sensor_pin);
if (flame_value == LOW) {
digitalWrite(buzzer_pin, HIGH);
if (!fire_flag) {
Serial.println("Fire Detected. Please Extinguish the fire.");
fire_flag = true;
send_multi_sms();
make_multi_call();
}
} else {
digitalWrite(buzzer_pin, LOW);
fire_flag = false;
}

FireX – Soundwave Fire Extinguisher

}
void send_multi_sms() {
send_sms("Fire is Detected. Please extinguish the fire.", PHONE_1);
send_sms("Fire is Detected. Please extinguish the fire.", PHONE_2);
send_sms("Fire is Detected. Please extinguish the fire.", PHONE_3);
}
void make_multi_call() {
make_call(PHONE_1);
make_call(PHONE_2);
make_call(PHONE_3);
}
void send_sms(String text, String phone) {
Serial.println("Sending SMS...");
delay(50);
sim800L.print("AT+CMGF=1\r");
delay(1000);
sim800L.print("AT+CMGS=\"" + phone + "\"\r");
delay(1000);
sim800L.print(text);
delay(100);
sim800L.write(0x1A); // ASCII code for ctrl-26
delay(5000);
}
void make_call(String phone) {
Serial.println("Making call to " + phone + "...");
sim800L.println("ATD" + phone + ";");
while (!sim800L.find("OK")) {
delay(0);
Serial.println("Waiting for call to connect...");
}
Serial.println("Call connected!");
delay(50000);
sim800L.println("ATH");
while (!sim800L.find("OK")) {
delay(200);
Serial.println("Waiting for call to disconnect...");
}
Serial.println("Call disconnected!");
}