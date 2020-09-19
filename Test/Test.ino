/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

String comdata = "";

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
//  Serial1.begin(9600);
//  Serial1.begin(1382400);
  Serial1.begin(38400);
}

// the loop routine runs over and over again forever:
void loop() {
  while(Serial1.available()>0)
  {
      comdata += char(Serial1.read());
      delay(2);
  }
  if (comdata.length() > 0)
    {
        Serial1.println(comdata);
        comdata = "";
    }
}
