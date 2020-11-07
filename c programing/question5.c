#include<stdio.h>
int main(){
  char t;
  printf("Enter any alphabets A to Z: ");
  scanf("%s", &t);
  if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u'){
    printf("The alphabets you have entered is vowel sound");
  }
  else if(t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U'){
    printf("The alphabets you have entered is vowel sound");
  }
  else{
    printf("The alphabets you have entered is consonant sound");
  }
  return 0;
}