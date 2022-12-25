//C program to check Leap Year

#include<stdio.h>

int main(){
     int year;

     printf("Enter year to check leap year: ");
     scanf("%d",&year);
     
     if(year%4==0 && year%100!=0 || year%400==0){
        printf("%d is a leap year.",year);
     }
     else{
        printf("Not a leap year");
     }

    return 0;
}