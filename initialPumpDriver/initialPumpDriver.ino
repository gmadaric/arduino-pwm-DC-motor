/* 2015 04 28 - L298 upravljanje pumpom

L298 ENA - pin za omogucavanje rada A izlaza aktivna "1"
L298 IN1 - pin za ukljucivanjeprve polovine H-mosta
L298 IN2 - pin za ukljucivanje druge polovine H-mosta

pumpa radi: ENA-"1"; IN1-"0"; IN2-"1"
*/


const int l298ENA = 8;
const int l298IN1 = 9;
const int l298IN2= 10;

int brightness = 0;


void setup() {

  pinMode(l298ENA, OUTPUT);
  pinMode(l298IN1, OUTPUT);
  pinMode(l298IN2, OUTPUT);

// L298 A ENABLE
 digitalWrite(l298ENA,HIGH);
 digitalWrite(l298IN1,LOW);
 digitalWrite(l298IN2,LOW);

Serial.begin(9600);

}

void loop() {
//  digitalWrite(l298IN2,HIGH);
//  delay(100);
 for (brightness = 30; brightness <120; brightness++) {
      analogWrite(l298IN2, brightness);
      Serial.print("PWM Value:");
      Serial.println(brightness);
      delay(1000);
    }
    
    for (brightness; brightness >30; brightness--) {
      analogWrite(l298IN2, brightness);
      Serial.print("PWM Value:");
      Serial.println(brightness);
      delay(1000);
    }

Serial.println("___________CYCLE____________");


}
