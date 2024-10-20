#pragma once
#include <stdbool.h>
#include <stdint.h>

typedef void (*value_change_cb)(void* context, void* value);
typedef void (*hal_callback_uint32)(void* context, uint32_t value);
typedef void (*hal_callback_uint16)(void* context, uint16_t value);
typedef void (*hal_callback_bool)(void* context, bool value);
typedef void (*command_exec)(void* context, char* parameter);