#include <inttypes.h>
#include <stdio.h>


double diff(double n,double mid)
{
    if (n > (mid*mid*mid))
        return (n-(mid*mid*mid));
    else
        return ((mid*mid*mid) - n);
}


double root(double n, double y){
    double start = 0, end = n;
 
    // Set precision
    double e = 0.0000001;
    
    while (1)
    {
        double mid = (start + end)/2;
        double error = diff(n, mid);
 
        // If error is less than e then mid is
        // our answer so return mid
        if (error <= e)
            return mid;
 
        // If mid*mid*mid is greater than n set
        // end = mid
        if ((mid*mid*mid) > n)
            end = mid;
 
        // If mid*mid*mid is less than n set
        // start = mid
        else
            start = mid;
    }
}


int main(){
 
    printf("res: %lf\n ", root(64, 0.0001));   

}