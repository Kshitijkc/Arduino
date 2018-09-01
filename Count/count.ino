int d5 = 5;
int d4 = 4;
int d3 = 3;
int d2 = 2;

int B5 = 0;
int B4 = 0;
int B3 = 0;
int B2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(d5, INPUT);
  pinMode(d4, INPUT);
  pinMode(d3, INPUT);
  pinMode(d2, INPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(53, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  B5 = digitalRead(d5);
  B4 = digitalRead(d4);
  B3 = digitalRead(d3);
  B2 = digitalRead(d2);
  digitalWrite(53, LOW);
  digitalWrite(49, LOW);
  digitalWrite(45, LOW);
  digitalWrite(41, LOW);

  if(B5 == HIGH)
    digitalWrite(52, HIGH);
    
  else
    digitalWrite(52, LOW);

  if(B4 == HIGH)
    digitalWrite(48, HIGH);
  else
    digitalWrite(48, LOW);

  if(B3 == HIGH)
    digitalWrite(44, HIGH);
  else
    digitalWrite(44, LOW);

  if(B2 == HIGH)
    digitalWrite(40, HIGH);
  else
    digitalWrite(40, LOW);
  

}
