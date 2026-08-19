#include <stdio.h>
int main(){
  int n, copy , rev=0;
  printf("Enter the number: ");
  scanf("%d", &n);
  copy=n;
  while (n>0){
           rev = rev * 10 + (n % 10);
           n/=10;
  }
  if (copy==rev)
    printf("Yes its a palindrome number");
  else
    printf("Its not a palindrome number");


  return 0;
}