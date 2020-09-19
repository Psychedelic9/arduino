void setup(void)
{
    Serial.begin(9600);
    while (!Serial) {;}
    Serial.println("Hello,World1");
    Serial.println(123);

}

void loop(void) {
  while (!Serial) {;}
  Serial1.println("Hello,World2");
  Serial.read();
  if(Serial.available())
  {
    printf("loop");
    Serial1.println("Hello,World1");
  }
   delay(1000);
}
