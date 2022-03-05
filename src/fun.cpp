// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
int64_t result = x;
for (uint16_t i = 0; i < n-1; i++) {
result = result * x;
}
return result;
}
