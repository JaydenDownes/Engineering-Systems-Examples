#define LEDA LED1
#define LEDB LED2
#define LEDC LED3
#define LEDD LED4

volatile int flag = LOW;
int count = 0;

void setup()
{
   pinMode(LEDA, OUTPUT);
   pinMode(LEDB, OUTPUT);
   pinMode(LEDC, OUTPUT);
   pinMode(LEDD, OUTPUT);  
   pinMode(PUSH2, INPUT_PULLUP);
  attachInterrupt(PUSH2, blink, FALLING); // Interrupt is fired whenever button is pressed
}

void loop()
{
  if(flag) {
   digitalWrite(LEDA, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);               // wait for a second
   digitalWrite(LEDA, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(LEDB, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);               // wait for a second
   digitalWrite(LEDB, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(LEDC, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);               // wait for a second
   digitalWrite(LEDC, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(LEDD, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);               // wait for a second
   digitalWrite(LEDD, LOW);   // turn the LED on (HIGH is the voltage level)
   flag = LOW;
  }
}

void blink()
{
  flag = HIGH;
}

