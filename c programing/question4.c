#include<stdio.h>
int main(){
  float mathCA;
  float mathSE;
  printf("Enter the marks of maths  CA marks out of 100: ");
  scanf("%f", &mathCA);
  printf("Enter the marks of maths  SE marks out of 100: ");
  scanf("%f", &mathSE);
  if(mathCA>=40 && mathSE>=40){
    float avgCAmarks = (mathCA/100)*60;
    float avgSEmarks = (mathSE/100)*40;
    if(avgCAmarks>=24 && avgSEmarks>=16){
      float averagemathsmarks = avgCAmarks + avgSEmarks;
      printf("Your Averagemathsmarks is %f \n", averagemathsmarks);
      printf("You were passed in maths");
    }
    else{
      printf("You were failed");
    }
  }
  else if(mathCA <= 40){
    printf("You were failed in maths ca marks");
  }
  else{
    printf("You were failed in maths se marks");
  }
  return 0;
}