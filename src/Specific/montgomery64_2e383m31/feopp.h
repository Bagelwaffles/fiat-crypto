#include <stdint.h>

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline feopp(uint64_t* out, uint64_t x9, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2);