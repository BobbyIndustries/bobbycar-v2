#pragma once

#include "../../obj_debug.hpp"

class hb_motor : obj_debug{
    public:
        uint32_t get_speed();
        void set_throtte(uint32_t throttle);
    private:
        
};