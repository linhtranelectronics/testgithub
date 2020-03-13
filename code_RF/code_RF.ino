#define D3 12
#define D2 11
#define D1 10
#define D0 9

#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7

void setup() {
  // put your setup code here, to run once:
pinMode(D0, INPUT);
pinMode(D1, INPUT);
pinMode(D2, INPUT);
pinMode(D3, INPUT);

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);

}

void loop() {
  if (digitalWrite(D0) == 1)
  {
    digitalWrite(LED1, HIGH);
    }
      if (digitalWrite(D1) == 1)
  {
    digitalWrite(LED1, LOW);
    }
      if (digitalWrite(D2) == 1)
  {
    digitalWrite(LED2, HIGH);
    }
      if (digitalWrite(D3) == 1)
  {
    digitalWrite(LED2, LOW);
    }
}
