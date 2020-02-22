#include <stdio.h>
#include <stdint.h>
#include "asciiToInt.h"


uint64_t __pow__(uint64_t n, uint64_t m){
    if(m == 0) return 1;

    uint64_t w = 0;
    uint64_t base = n;

    for(uint64_t i = 0; i < m-1; i++){
        for(uint64_t k = 0; k < n; k++){
            w += base;
        }
        base = w;
        w = 0;
    }
    return base;
}


int main(int argc, char const *argv[])
{
    if(argc != 3){
        printf("Invalid Args -- Format: ./pow Base Exponent\n");
        return 1;
    }

    if(argv[1][0] == '-' || argv[2][0] == '-'){
        printf("Base & Exponent must both be positive\n");
        return 1;
    }

    uint64_t base = asciiToInt((char*)argv[1]);
    uint64_t exp = asciiToInt((char*)argv[2]);

    printf("%s^%s = %llu\n", argv[1], argv[2], __pow__(base, exp));
    return 0;
}
