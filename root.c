#include <stdio.h>
//#include <math.h>

/*
float power(float x, float y)
{
    /*
    double pow = 1;
    for(float i = 0; i < y; i++){
        pow = pow * x;
    }
    return pow;
    
    return (float)pow(x,y);
    /*
    if(x == 0.0){
        return 0;
    }else if(y == 0.0){
        return 1;
    }
    return x * power(x, y - 1.0);
    
    
    /*
        2 * (2 , 2-1)
        умножава X на Y пъти
        2^3
        (((2*2)*2)*2)

        for (int i = 0; i < n; i++) {
        pow = pow * x;
    }
    


}
*/



float power(double a){
    /*
    if ( b == 0 )  
        return 1 ; 
    else if( a == 0){
        return 0;
    } 
    return a * power(a, b - 1);
    */
    double sum = 1.0;
    for(int i = 0; i < 0.33; i++){
        sum = sum * a;
    }
    return sum;
}


float third_root(float num){
    // връща 27^(1/3) 
    return power(num);
    
}




/*
    128 64 32 16 8 4 2 1
      0  0  0  0 0 0 0 0 
                            27 = 16 + 8 +2 +1
      0  0  0  1 1 0 1 1  -> 27
                            3 = 1 + 3
      0  0  0  0 0 0 1 1 

      >> 3   
      
                            64 -> 64
      0  1  0  0 0 0 0 0
      
      >> 3

      0  0  0  0 1 0 0 0    = 8                           
*/

int main(){
    
//    printf("Square root of %.2lf ij %.2lf \n", 27.0, cbrt(27));
    
    //printf("Pow : %d \n", power(27, 0.33));
    printf("Third root of %.2f is %.2f\n", 27.0, third_root(27.0));
}
