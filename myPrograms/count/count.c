#include <stdio.h>

int main(int arg, char **argv){
  char c;
  
  int nDigit = 0,nWhite =0,nOther =0;
  while ((c = getchar()) != EOF){
    if (c=='0' || c=='1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'){
      nDigit ++;
    }else if (c==' ' || c == '\n' || c == '\t'){
      nWhite ++;
    }else{
      nOther ++;
    }    
  }

  printf("number of digits are %d \n number of white spaces are %d \n number of Other characters are %d \n",nDigit, nWhite, nOther);
  return 0;
}
