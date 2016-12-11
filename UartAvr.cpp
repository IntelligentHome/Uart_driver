
//TODO: For tests define F_CPU and BAUD
#define F_CPU 7372800UL
#define BAUD 19200

#include "UartAvr.h"
#include <avr/io.h>
#include <util/setbaud.h>
#include <avr/interrupt.h>

namespace uart_avr {

UartAvr::UartAvr(uart_driver::Baud baud) {
    //TODO: this is only for atmega8 (for tests)
    UBRRH = UBRRH_VALUE;
    UBRRL = UBRRL_VALUE;
#if USE_2X
    UCSRA |= (1<<U2X);
#else
    UCSRA &= ~(1<<U2X);
#endif

    UCSRC = (1<<URSEL) | (1<<UCSZ1) | (1<<UCSZ0);
    //TODO: Disable interrupts (for tests)
    UCSRB = (1<<TXEN) | (1<<RXEN);// | (1<<RXCIE);
    PORTC |= (1<<2);
}

void UartAvr::Send(uint8_t send_buff[], uint16_t size) {

    for (uint16_t i = 0; i < size; i++) {

        while(!(UCSRA & (1<<UDRE)));

        UDR = send_buff[i];
    }
}

} /* namespace uart_avr */
