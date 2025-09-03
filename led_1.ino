//변수 선언하겠습니다.
#define LED 5

//설정하겠습니다.
void setup()
{
  pinMode(LED1, OUTPUT);
}

//루프 구간 입니다.
void loop()
{
 digitalWrite(LED, HIGH);
 delay(1000);
 digitalWrite(LED, LOW);
 delay(1000);
  
  
}
