void setup() 
{//setup 12 for output and 9600 baud for serial communication with PC
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}
void loop()
{
  long data;
  data=analogRead(A0); //reads the sensor data from A0 analog pin, there is no need to setup analog pin in setup()
  Serial.println(data); //serial output the data in monitor
  if(data<200)
  {//checks if the brightness value is less then 200 units highest value is 1023 due to 10 bit ADC
  digitalWrite(12,HIGH);
  //if the value is less then 200 (obstracle detected) activate the relay to simulate touch
  }
  else
  {
  digitalWrite(12,LOW);
  //else the relay is inactivated
  }
}

