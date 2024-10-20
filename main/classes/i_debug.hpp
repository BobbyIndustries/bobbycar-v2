#pragma once
#include <stdint.h>
#include "data.hpp"


class i_debug{
    public:
        i_debug(char* instanceName);
        virtual bool dump_to_string(data* out);
        virtual bool exec(char* command, data* out);
        virtual bool help(char* parameter, data* out) = 0;
        virtual void add_callback(uint16_t val_index, void* function, void* context);
        virtual void get_val(uint16_t val_index, void* out);
        virtual uint16_t get_val_count();
        char* getName();
    protected:
        virtual command_exec* get_commands() = 0;
    private:
        char* instanceName;
};