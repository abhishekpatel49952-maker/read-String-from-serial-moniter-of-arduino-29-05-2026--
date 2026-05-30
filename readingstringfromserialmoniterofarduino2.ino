int bluepin=2;
int greenpin=3;
int redpin=4;
String msg="which led do you need to blink";
String myled;
int delaya=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (bluepin,OUTPUT);
pinMode (greenpin,OUTPUT);
pinMode (redpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){

}
myled=Serial.readString();
myled.trim();

if (myled=="blue"){
  digitalWrite(bluepin, HIGH);
  digitalWrite(redpin, LOW);
  digitalWrite(greenpin, LOW);
}

 if (myled=="green"){
  digitalWrite(greenpin, HIGH);
  digitalWrite(redpin, LOW);
  digitalWrite(bluepin, LOW);
}

 if (myled=="red"){
  digitalWrite(redpin, HIGH);
  digitalWrite(bluepin, LOW);
  digitalWrite(greenpin, LOW);
  
}
delay(1000);
}
