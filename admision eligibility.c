#include <stdio.h>
#include <conio.h>

int main()
{
  float eligibility,math,science;
  printf("enter your math percentage");
  scanf("%f",&math);
  printf("enter your science percentage");
  scanf("%f",&science);
  eligibility=math+science;
  if(eligibility>=50){
    printf("your eligible for admission");
    if(eligibility>=80){
    printf("your got scholarship");
    }
  }
  else{
       printf("your not eligible");
       }
  
  getch();                                      

}
