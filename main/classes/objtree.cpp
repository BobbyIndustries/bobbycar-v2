#pragma once

#include "objtree.hpp"

objtree::objtree(objtree* parent){
    this->patent = parent;
    childs = data();
}
uint32_t objtree::add_child(objtree* calling_obj){
    childs.add_data(&calling_obj, sizeof(calling_obj));
}
uint32_t objtree::get_child_index(objtree* in){
    objtree** tmp_childs = childs.get_data();
    for(int i = 0; i < child_count; i++)
        if(tmp_childs[i] == in)
            return i;
}
void objtree::remove_child(uint32_t index){
    objtree** tmp_childs = childs.get_data();
    tmp_childs[index] = nullptr;
    uint32_t child_count = childs.get_lenght() / sizeof(objtree*) - 1;
    for(int i = index; i < child_count; i++)
        tmp_childs[i] = tmp_childs[i+1];
    childs.set_lenght(child_count * sizeof(objtree*));
}