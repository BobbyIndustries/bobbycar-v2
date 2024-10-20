#pragma once

#include "obj_debug.hpp"
#include "obj_storage.hpp"

#include "i_debug.hpp"
#include "i_storage.hpp"

class obj_debug_storage : public i_debug, public i_storage, public objtree{
    
};