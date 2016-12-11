#pragma once

#include "Uart_driver.h"

namespace uart_avr {

class UartAvr : public uart_driver::UartDriver {

public:

    UartAvr(uart_driver::Baud baud);

    virtual void Send(uint8_t send_buff[], uint16_t size);
};

} /* namespace uart_avr */
