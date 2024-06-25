#include<stdio.h>
#include<math.h>
int armstrong(int num)
{
     if(num>0)
    return (pow(num%10,3) +armstrong(num/10));
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
   if(armstrong(num)==num)
    printf("It is an Armstrong Number");
   else
    printf("It is not an Armstrong Number");
}
