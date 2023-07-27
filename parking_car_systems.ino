/*******************************
 * Nama File : A01_Led_80a-if.ino
 * Menyalakan 8 Led dari pin 6..13
 * Cara : menggunakan Counter dan sintax If
  *******************************/

/* Uno --> P-01 (Display kit)
 *  6  -->  7 
 *  7  -->  6
 *  8  -->  5  
 *  9  -->  4
 *  10 -->  3
 *  11 -->  2 
 *  12 -->  1
 *  13 -->  0
 */


void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 int teg = analogRead(A0);
   Serial.println(teg);

   if (teg >= 0  & teg <= 125) {
     digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
   }
  
   else if (teg >= 125 & teg <= 250) {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
   }

   else if (teg >= 250 & teg <= 500) {
     digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
   }
  
   else if (teg >= 500 & teg <= 750) {
     digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
   }
   
   else if (teg >= 750 & teg <= 1023) {
     digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10,LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, HIGH);
     digitalWrite(6, HIGH);
   }
   
   
   
  
}