#define relay_pin 13 //initializing pin-13 as relay_pin 

void setup() 
{//setup relay_pin for output and 9600 baud for serial communication with PC
  Serial.begin(9600);
  pinMode(relay_pin, OUTPUT);
}
void loop()
{
  int brightness;

  brightness=analogRead(A0); //reads the sensor data from A0 analog pin, there is no need to setup analog pin in setup()
  Serial.println(brightness); //serial output the data in monitor
  
  if(brightness<200)
  {//checks if the brightness value is less then 200 units highest value is 1023 due to 10 bit ADC
    digitalWrite(relay_pin, HIGH);
    //if the value is less then 200 (obstracle detected) activate the relay to simulate touch
  }
  else
  {
    digitalWrite(relay_pin, LOW);
    //else the relay is inactivated
  }
}

