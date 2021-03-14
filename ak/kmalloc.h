#pragma once

#include "types.h"

extern "C" {

void* kcalloc(dword nmemb, dword size);
void* kmalloc(dword size);
void kfree(void* ptr);
void* krealloc(void* ptr, dword size);
}
