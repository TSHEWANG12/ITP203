#include<stdio.h>
int main(){
    int a,b;
    float moduledivision,division;
    int addition,substraction,multiplication; 
    
    printf("Enter the first number:");
    scanf("%i",&a);

    printf("Enter the second number:");
    scanf("%i",&b);

    addition=a+b;
    printf("The addition of a and b:%i\n",addition);

    substraction=a-b;
    printf("The substraction of a and b:%i\n",substraction);

    multiplication=a*b;
    printf("The multiplication of a and b:%i\n",multiplication);

    division=a/b;
    printf("The  division of a and b:%f\n",division);

    moduledivision=a%b;
    printf("The  modulrdivision of and b:%f\n",moduledivision);
     return 0;


}
