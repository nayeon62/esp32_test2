//변수 선언
#define LED 5

//설정
void setup()
{
  pinMode(LED1, OUTPUT);
}

//루프 구간
void loop()
{
 digitalWrite(LED, HIGH);
 delay(1000);
 digitalWrite(LED, LOW);
 delay(1000);
  
  
}
