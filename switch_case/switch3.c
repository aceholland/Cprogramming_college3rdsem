#include <stdio.h>
int main(){
    char a;
    int b,c;
    printf("Enter the operator: ");
    scanf("%c", &a);
    printf("Enter 2 numbers :");
    scanf("%d%d", &b, &c);

    switch (a)
    {
      case '+':
        printf("%d + %d = %d" , b,c, (b+c) );
        break;

      case '-':
        printf("%d - %d = %d" , b,c, (b-c) );
        break;

      case '*':
        printf("%d x %d = %d" , b,c, (b*c) );
        break;

      case '/':
        printf("%d / %d = %d" , b,c, (b/c) );
        break;

      default:
         printf("Invalid");
         break;
    }

    return 0;
}