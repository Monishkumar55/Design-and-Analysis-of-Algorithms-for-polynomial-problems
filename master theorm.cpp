#include <stdio.h>
#include <math.h>
void mastertheorem() {
    int n = 1024;
    double logbase = log2(2);
    double result = n*log2(n);
    printf("Using Master Theorem:\n");
    printf("T(n) = O(n log n)\n");
    printf("For n = %d, T(n) approximately equals %f\n", n, result);
}
int main() 
{
    mastertheorem();
}
