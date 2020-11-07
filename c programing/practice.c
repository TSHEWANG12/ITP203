#include<stdio.h>
int main(){
    int x, y;
    printf("enter the value of x:");
    scanf("%d", &x);
    printf("enter the value of y:");
    scanf("%d",&y);
    if(x>y){
        printf("the variable of x is  greater than y\n");
    }
    if(x<y)
    {
        printf("the value of y is greater the  x\n");
    }
    if(x==y)
    {
        printf("the value of x is equal to y\n");
    }
    printf("End the program");
    return 0;
}