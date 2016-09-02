#include <avr/io.h>

class led
{
        volatile uint8_t * const port;
        volatile uint8_t * const pin;
        volatile uint8_t * const ddr;
        const uint8_t bit;

public:
        led(volatile uint8_t *o, volatile uint8_t *i, volatile uint8_t *d, uint8_t p) :
            port(o), 
            pin(i), 
            ddr(d), 
            bit(1 << p) 
            {
                *ddr |= bit;
            }
            
        void on(void) const { *port |= bit; }
        void off(void) const { *port &= ~bit; }
        void toggle(void) const { *pin = bit; }
};

int main(void)
{
        // LED A ist an PB4
        led A(&PORTB, &PINB, &DDRB, 4);

        A.on();
        A.off();
        A.toggle();

        return 0;
}