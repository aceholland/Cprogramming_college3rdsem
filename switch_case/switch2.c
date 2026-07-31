#include <stdio.h>
int main(){
    char day;
    printf("Enter the day name ");
    scanf("%c", &day);
    switch (day){
    
      case 'M': 
      case 'T':
      case 'W': 
      case 't':
      case 'F': 
      printf("weekday");
      break;
      case 'S':
      case 's': 
      printf("weekend");
      break;
      default:
      printf("Invalid");
      break;

 }
 return 0;
}