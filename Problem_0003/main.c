#include <math.h>
#include <stdio.h>
#include <stdint.h>

/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

int main(){
  unsigned long long int number = 600851475143;

  unsigned long long int length = (number / 2)-2;

  unsigned long long int factors[length];

  printf("The prime factors of %llu are: \n", number);

  factors[0] = 0;

  for (unsigned long long int counter = 1; counter < length; counter++){
    int prime_check = 0;

    for (unsigned long long int p = 0; p < (counter / 2);p++){
      if (counter % p == 0) prime_check++;
      if (prime_check > 2) break;
    }

    if (prime_check = 2){

      if (number % counter == 0){
        factors[counter] = 1;
        printf("%llu \n", factors[number]);
      }
      else{
        factors[counter] = 0;
      }

    }
    else{
      factors[counter] = 0;
    }
  }
}
