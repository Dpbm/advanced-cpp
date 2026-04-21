#include <iostream>
#include <cstdint>

#include <immintrin.h>


#include "data.h"

using namespace std;

int main(){
    for(size_t i = 0; i < list_size; i++){
        //__asm__ volatile("clflush (%0)" : : "r" (data_list) : "memory");
        //
        for(size_t j = 0; j < list_size; j+=16){ // 32bits is 4bytes, 16*4=64 (a cache line)
            _mm_clflush(&data_list[j]);
        }
        _mm_mfence();

        auto v = static_cast<double>(data_list[i]);
        for(size_t j = 0; j < list_size; j++){
            auto t = static_cast<double>(data_list[j]);
            v = (v + 10.3) / (120.45 - v + 765.3) * t;
        }

    }

	return 0;
}
