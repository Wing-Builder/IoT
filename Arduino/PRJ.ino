#define ena 10 // déclaration de variable
#define in1 9
#define in2 8


void setup() {
  // put your setup code here, to run once:
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ena, HIGH);                            
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(1000);
}
