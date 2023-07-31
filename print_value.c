#include <stdio.h>
#include <stdint.h>

#define TINT 1
#define TUINT 2
#define TCHAR 'A'
#define TDOUBLE 3
#define TFLOAT 4
#define TUINT_8 5
#define TUINT_16 6
#define TUINT_32 7
#define TUINT_64 8






void printValue(const void* valuePtr, uint8_t flag){
    const uint8_t *ptr= (const uint8_t*)valuePtr;
    switch(flag){
        case TINT:
            printf("Value= %d \n", *ptr);
            break;
        case TUINT:
            printf("Value = %u\n", *ptr);
            break;
        case TCHAR:
            printf("Value = %c\n", *(char*)ptr);
            break;
        case TDOUBLE:
            printf("Value = %lf\n", *(double*)ptr);
            break;
        case TFLOAT:
            printf("Value = %lf\n", *(float*)ptr);
            break;
        case TUINT_8:
            printf("Value = %d \n", *ptr);
            break;
        case TUINT_16:
            printf("Value = %d \n", *ptr);
            break;
        case TUINT_32:
            printf("Value = %d \n", *ptr);
            break;
        case TUINT_64:
            printf("Value = %d \n", *ptr);
            break;
        default:
            printf("Invalid value!\n");
            break;
    }
}

int main(){
    int num = 25;
    char c = 'B';
    double num_d = 0.27;
    float num_f = 11.27f;
    uint8_t num_u8 = 27;
    uint16_t num_u16 = 16;
    uint32_t num_u32 = 32;
    uint64_t num_u64 = 64;
    printValue(&num, TINT);
    printValue(&c, TCHAR);
    printValue(&num_d, TDOUBLE);
    printValue(&num_f, TFLOAT);
    printValue(&num_u8, TUINT_8);
    printValue(&num_u16, TUINT_16);
    printValue(&num_u32, TUINT_32);
    printValue(&num_u64, TUINT_64);
}
