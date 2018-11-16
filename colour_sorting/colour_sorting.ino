 int S0 =4;
 int S1 =5;
 int S2 =6;
 int S3 =7;
int sensorOut =8;
int frequency = 0;
Servo topServo;
Servo bottomServo;
void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
   topServo.attach(12);
  bottomServo.attach(2);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  
  Serial.begin(9600);
}
void loop() {
  switch (color) {
    case 1:
    bottomServo.write(45);
    break;
    case 2:
    bottomServo.write(135);
    break;
}
int readcolour()
  // Setting red filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  // Printing the value on the serial monitor
  Serial.print("R= ");//printing name
  Serial.print(frequency);//printing RED color frequency
  Serial.print("  ");
  delay(100);
  
  // Setting Blue filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  // Printing the value on the serial monitor
  Serial.print("B= ");//printing name
  Serial.print(frequency);//printing RED color frequency
  Serial.println("  ");
  delay(100);

if(R<45 & R>32 & G<65 & G>55){
    color = 1; // Red
  }
 if (G<58 & G>45 & B<40 &B>26){
    color = 2; // Blue
  }
  return color;  
  }
