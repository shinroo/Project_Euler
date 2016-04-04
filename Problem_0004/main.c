#include <stdio.h>
#include <math.h>
#include <string.h>

/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

int lenHelper(int x) {
    if(x>=1000000000) return 10;
    if(x>=100000000) return 9;
    if(x>=10000000) return 8;
    if(x>=1000000) return 7;
    if(x>=100000) return 6;
    if(x>=10000) return 5;
    if(x>=1000) return 4;
    if(x>=100) return 3;
    if(x>=10) return 2;
    return 1;
}

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int palindrome_check(int n){
  int nDigits = lenHelper(n);
  char str[nDigits];
  sprintf(str, "%d", n);
  char rev_str[nDigits];
  strcpy(rev_str,str);
  strcpy(rev_str,strrev(rev_str));
  if (strcmp(str,rev_str) == 0) {
    return(1);
  }
  else {
    return(0);
  }
}

int main(){

  int number, max = 0;

  for (int first = 100; first < 999; first++){
    for (int second = 100; second < 999; second++){
        number = first * second;
        if (palindrome_check(number) == 1){
          if (number > max){
            max = number;
          }
        }
    }
  }

  printf("Result: %d\n",max);
}
