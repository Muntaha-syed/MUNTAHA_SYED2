#include <stdio.h>
#include <conio.h>

int main()
{
  int age, weight;
  printf("enter your age ");
  scanf("%d",&age);
  printf("enter your weight");
  scanf("%d",&weight);
  if(age>=18 && <65){
      printf("your are eligible for donation ");
      if(weight<=50){
          printf("your eligible for donation");
          else{
               printf("you are not eligible for donation due to your weight!")
               }
               
      }          
  }        
  else if(weight>50){
       printf("your not eligible");
  }     
  
  getch();
}
