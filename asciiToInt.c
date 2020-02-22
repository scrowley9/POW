#include <string.h>
#include "asciiToInt.h"

int asciiToInt(char* num){
    if(!num){
        return -1;
    }

    int length = strlen(num);
    int pow = 1;
    int result = 0;
    for (int i = length-1; i >= 0; i--) {
        result += (((int)num[i]) % 48) * pow;
        pow *= 10;
    }
    return result;
}
