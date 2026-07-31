#include <stdio.h>
int main(){
  int n, copy;
  int count=0;
  printf("Enter the number: ");
  scanf("%d" , &n);
  copy=n;
  while (n>0){
    n/=10;
    count+=1;
  }
  printf("The number of digits in %d is %d" , copy, count);
  return 0;
}