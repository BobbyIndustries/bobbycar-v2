#include "can_component.hpp"

extern "C" void can_component_receive(void* context, uint32_t address, uint8_t size, uint8_t* data){
    reinterpret_cast<can_component*>context->receive( address, size, data);
}

void can_component::send(uint32_t address, uint8_t size, uint8_t* data){
    
}