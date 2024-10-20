#include "../hal/hal_can.h"

extern "C" void can_component_receive(void* context, uint32_t address, uint8_t size, uint8_t* data);


class can_component{
    public:
        void receive(uint32_t address, uint8_t size, uint8_t* data);
        void send(uint32_t address, uint8_t size, uint8_t* data);
    private:
        void add_cb_addr(uint32_t address, void* feature);
        void* bus_handle;
        struct
        {
            uint32_t addr;
            void* feature;
        }* can_feature;
        
};