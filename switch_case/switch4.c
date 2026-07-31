// program to simulate mobile recharge

#include <stdio.h>
int main(){
    int recharge_plan;
    char company;
    printf("Enter rechrage plan : rupees 250/- , rupees 300/- , 750/-  rupees 1500/- ");
    scanf("%d" , &recharge_plan);
    printf("Enter company : Jio or Airtel");
    scanf("%c", &company);

       switch (recharge_plan){
        case 250:
         printf("A 25 day subscription at 250/- ");
         break;

        case 300:
          printf("A 25 day subscription at 250/- ");
          break;

        case 750:
          printf("A 6 month subscription at 750/-");
          break;

        case 1500:
          printf("A yearly subscription plan at 1500/-");
          break;

        default:
          printf("Invalid");
          break;

    }
      return 0;
 
}
   