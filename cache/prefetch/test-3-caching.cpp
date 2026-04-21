#include <iostream>
#include <cstdint>
#include <immintrin.h>
#include "data.h"

using namespace std;

int main(){

    /// warm up
    for (size_t k = 0; k < list_size; k += 16) {
        _mm_prefetch(reinterpret_cast<char const*>(&data_list[k]), _MM_HINT_T0);
    }
                

    for(size_t i = 0; i < list_size; i++){
        auto v = static_cast<double>(data_list[i]);
        for(size_t j = 0; j < list_size; j++){
            auto t = static_cast<double>(data_list[j]);
            v = (v + 10.3) / (120.45 - v + 765.3) * t;
        }

    }

	return 0;
}
