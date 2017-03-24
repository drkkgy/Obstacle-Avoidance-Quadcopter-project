int forwardpin=8,rightpin=9,backpin=10,leftpin=11;
int F1,R2,B3,L4;
int SF1=120;
int SR2=120;
int SB3=120;
int SL4=120;
void setup() {
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);
}
void loop(){
F1=analogRead(A1);
R2=analogRead(A2);
B3=analogRead(A3);
L4=analogRead(A4);
printf("%d %d %d %d\n",F1,R2,B3,L4);
if(F1>SF1)
{
  analogWrite(forwardpin,F1);
}

if(R2>SR2)
{
  analogWrite(rightpin,R2);
}

if(B3>SB3)
{
  analogWrite(backpin,B3);
}

if(L4>SL4)
{
  analogWrite(leftpin,L4);
}
delay(10);
}

  
