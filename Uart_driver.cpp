#include "Uart_driver.h"

namespace uart_driver {

uint8_t UartDriver::Reset(void) {
    return 0;
}

void UartDriver::Send(uint8_t send_buff[], uint16_t size) {

}

void UartDriver::Get(uint8_t recv_buff[], uint16_t size) {

}

void UartDriver::SendAndGet(uint8_t send_buff[], uint8_t recv_buff[], uint16_t size) {

}

} /* namespace uart_driver */
