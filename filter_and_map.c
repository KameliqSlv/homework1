#include <stdio.h>
#include <math.h>
/*
    filter(function) - при масива ще приложи дадена функция към 
    всеки елемент и ще създаде нов масив, съдържащ елементите които
    връщат истина.
*/

void filter_and_map(const int arr[], size_t n, int(*filter_f)(int),int(*map_f)(int),int dest[],size_t *dest_cnt){
    //за да си запазя броя на елементите на новия 
    //масив ???
    size_t count = 0; 
    *dest_cnt = 0;
    for(size_t i = 0; i < n; i++){ 
        //определям дали даден елемент да бъде изхвърлен
        //от базата filter_f true -> map 
        if(filter_f(arr[i])){ 
            *(dest++) = map_f(arr[i]);
            count++;
        }
    }
    if(dest_cnt != 0){
        *dest_cnt = count;
    }
}

int isPositive(int a){
    return a > 0; // връща истина ако е вярно 
}

int addOne(int a){
    return a + 1;
}

int isEven(int a){
    return a % 2 != 0; 
}

int isPrime(int a){
    for(int i = 2; i <= a/2; ++i){
        if(a % i == 0){
            return 1;
        }
    }
    return 0;
}

int count_bit(int a){
    printf("Number in array: %d \n", a);    
    int count = 0;
    while (a != 0){
        count += a & 1;
        a >>= 1;
    }
    printf("Count of bytes: %d \n", count);
    //return count;
    
}

/*
 int count = 0;
    while(all_mask!= 0){
        count += all_mask & 1;
        all_mask >>= 1;
    }
    return count;
*/
            

int main(){
    int arr[] = {1, 2, 3, 4, -1, -2, 11, -100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int dest[10];
    size_t new_size;

    filter_and_map(arr, n, isPositive, addOne, dest, &new_size);

    printf("Положителни числа в масива: ");
    for (int i = 0; i < new_size; i++){
        printf("%d ", dest[i]);
    }
    printf("\n");

    printf("Четните числа в масива : ");
    filter_and_map(arr, n, isEven, addOne, dest, &new_size);
    for (int i = 0; i < new_size; i++){
        printf("%d ", dest[i]);
    }
    printf("\n");

    printf("Простите числа в масива повдигнати на квадрат: ");
    filter_and_map(arr, n, isPrime, addOne, dest, &new_size);
    for (int i = 0; i < new_size; i++){
        printf("%.f ", pow(dest[i], 2));
    }
    printf("\n");

    filter_and_map(arr, n, isPrime, count_bit, dest, &new_size);
    

     

    return 0;
}

