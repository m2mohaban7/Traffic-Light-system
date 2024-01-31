// C++ code
int red = 2;
int yellow = 4;
int green = 7;
int ON = 1000;
int OFF = 2000;
int flash = 500;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red,HIGH);
  delay(ON);
    
  digitalWrite(yellow,HIGH);
  delay(flash);
  digitalWrite(yellow,LOW);
  delay(flash);
  digitalWrite(yellow,HIGH);
  delay(flash);
  digitalWrite(yellow,LOW);
  delay(flash);
  digitalWrite(yellow,HIGH);
  delay(flash);
  digitalWrite(yellow,LOW);
  
  digitalWrite(red,LOW);
  
  digitalWrite(green,HIGH);
  delay(ON);
  digitalWrite(green,LOW);
  delay(OFF);
}