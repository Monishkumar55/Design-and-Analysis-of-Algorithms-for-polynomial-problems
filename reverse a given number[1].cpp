#include <stdio.h>
int revnum=0, rem;
int reversefunction(int num)
{
  if(num)
  {
    rem=num%10;
    revnum=revnum*10+rem;
    reversefunction(num/10);
  }
  else
    return revnum;
  return revnum;
}
int main(){
  int num, reversenumber;
  printf("Enter any number:");
  scanf("%d",&num);
  reversenumber=reversefunction(num);
  printf("The reverse of entered number is :%d",reversenumber);
  return 0;
}
