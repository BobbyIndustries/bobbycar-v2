#pragma once
#include <stdint.h>
#include "data.hpp"

class objtree{
    public:
        objtree(objtree* parent);
        uint32_t add_child(objtree* calling_obj);
        uint32_t get_child_index(objtree* in);
        objtree* get_child(uint32_t index);
        uint32_t get_child_cnt();
        uint32_t get_child_cnt_recursive();
        void remove_child(uint32_t index);
        
    private:
        objtree* patent;
        data childs;
        char* name;
};