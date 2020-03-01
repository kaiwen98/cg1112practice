#include "Arduino.h"
#define delayTime 1000


#define A (1)
#define B (1<<1)
#define C (1<<2)
#define D (1<<3)
#define LT (1<<4)
#define RBI (1<<5)

void setup()
{

  DDRD = LT|A | B | C | D;
  int count;
}
void loop()
{
  int count = 0;
  //PORTD |= LT | RBI;
  while(PORTD < 10){
    PORTD++;
    delay(delayTime);
  }
  PORTD = 00000000;
  
  
  /*if((PIND) == 0) {
  PORTB |= LED13;
  delay(delayTime);
  PORTB &= ~LED13;
  PORTB |= LED12;
  delay(delayTime);
  PORTB &= ~LED12;
  PORTB |= LED11;
  delay(delayTime);
  PORTB &= ~LED11;
  PORTB |= LED10;
  delay(delayTime);
  PORTB &= ~LED10;
  }
  if(SP6 & PIND) PORTB |= LED12;
  else PORTB &= ~LED12;
  
  if(SP5 & PIND) PORTB |= LED11;
  else PORTB &= ~LED11;
  
  if(SP4 & PIND) PORTB |= LED10;
  else PORTB &= ~LED10;
  */
  
  //PORTB = LED10 | LED11 | LED12 | LED13;

  

  
}
