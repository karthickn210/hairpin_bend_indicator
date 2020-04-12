int a=3;
int b=4;
int c=5;
int d=6;
int l1=7;
int l2=8;
int bz=9;
int i=0,j;

void setup() {
pinMode(a,INPUT_PULLUP); 
pinMode(b,INPUT_PULLUP);
pinMode(c,INPUT_PULLUP); 
pinMode(d,INPUT_PULLUP);
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(bz,OUTPUT);
digitalWrite(l1,LOW);
digitalWrite(l2,LOW);
digitalWrite(bz,LOW);
Serial.begin(9600);
}

void loop() {
 rread();
 led1();
 led2();
 buzzer();
}
void rread()
{
    if(!digitalRead(a)==0)
    {
    j=digitalRead(a);
    Serial.println(j);
    
    while(!digitalRead(b)==1)
    {
      j=digitalRead(b);
    Serial.println(j);
    }
    led2();
    Serial.println('\t');
    Serial.print("i=");
    Serial.print(i);
    delay(1000);
    }

    
    if(!digitalRead(c)==0)
    {
    j=digitalRead(b);
    Serial.println(j);
    
    while(!digitalRead(d)==1)
    {
      j=digitalRead(d);
    Serial.println(j);
    }
    led1();
    Serial.println('\t');
    Serial.print("i=");
    Serial.print(i);
    delay(1000);
    }

    if(!digitalRead(a)==0)
    {
    j=digitalRead(b);
    Serial.println(j);
    
    while(!digitalRead(c)==1)
    {
      j=digitalRead(d);
    Serial.println(j);
    }
    buzzer();
    Serial.println('\t');
    Serial.print("i=");
    Serial.print(i);
    delay(1000);
    }
}


void led1()
{
  if(!digitalRead(a)==0)
  {
  digitalWrite(l1,HIGH);
  }
}

void led2()
{
  if(!digitalRead(c)==0)
  {
  digitalWrite(l2,HIGH);
  }
 
}

void buzzer()
{
  digitalWrite(bz,HIGH);
}



