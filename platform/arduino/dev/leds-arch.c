#include <dev/leds.h>


void leds_arch_init(void)
{
  LEDS_PxDIR |= LEDS_CONF_YELLOW;
}

unsigned char leds_arch_get(void)
{
  return ( LEDS_PxOUT & LEDS_CONF_YELLOW ) ? LEDS_YELLOW : 0;
}

void leds_arch_set(unsigned char leds)
{
  if( leds & LEDS_YELLOW ) {
    LEDS_PxOUT |= LEDS_CONF_YELLOW;
  } else {
    LEDS_PxOUT &= ~LEDS_CONF_YELLOW;
  }
}
