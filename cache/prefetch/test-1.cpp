#include <iostream>
#include <cstdint>

#include "data.h"

using namespace std;

int main(){
    for(size_t i = 0; i < list_size; i++){
        auto v = static_cast<double>(data_list[i]);
        for(size_t j = 0; j < list_size; j++){
            auto t = static_cast<double>(data_list[j]);
            v = (v + 10.3) / (120.45 - v + 765.3) * t;
        }
    }

	return 0;
}
