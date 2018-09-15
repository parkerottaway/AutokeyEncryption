/* Autokey Encryption */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define KEY_LEN 10

int main(){
  char key[KEY_LEN] = {'t','Y','x','+'};
  char rawInput[100];
  char encOutput[100];
  int ii = 0;
  int jj;
  int kk; /* TEMP */

  scanf("%[^\n]s",rawInput);
  printf("Sizeof(rawInput) = %d\n",sizeof(rawInput));
  if( rawInput[ii] != '\0' || ii < 6) {
    for( jj = 4; jj < KEY_LEN; jj++ ) {
      key[jj] = rawInput[ii];
      ii++;
    }
  }
  
  kk = 0;
  while( rawInput[kk] != '\0' ) {
    putchar(rawInput[kk]);
    kk++;
  }
  printf("%d",ii);

  return 0;
}
