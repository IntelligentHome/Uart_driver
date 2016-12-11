#pragma once

#include "ITransport.h"

namespace uart_driver {

enum Baud {
    BAUD_9600 = 0,
    BAUD_19200,
    BAUD_38400,
    BAUD_115200,

    BAUD_LAST,
};

class UartDriver : public transport::ITransport {

public:

    virtual uint8_t Reset(void);
    virtual void Send(uint8_t send_buff[], uint16_t size);
    virtual void Get(uint8_t recv_buff[], uint16_t size);
    virtual void SendAndGet(uint8_t send_buff[], uint8_t recv_buff[], uint16_t size);

};

} /* namespace uart_driver */
