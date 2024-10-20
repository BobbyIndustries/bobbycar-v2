#include "i_debug.cpp"
#include <string.h>
#include <stdlib.h>

i_debug::i_debug(char* instanceName){
    uint32_t lenName = strlen(instanceName);
    this->instanceName = malloc(lenName+1);
    this->instanceName[lenName] = '\0';
    memcpy(this->instanceName, instanceName, lenName);
}

i_debug::~i_debug(){
    free(instanceName);
}

char* i_debug::getName(){
    return instanceName;
}

bool i_debug::exec(char* command, data* out){
    return false;
}