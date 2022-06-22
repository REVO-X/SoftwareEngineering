#include<stdio.h>
#include "collatz.c"
int main(){
int sample[3][3]=
  {{2, 1, 0},
   {-1,0,-1},
   {3, 7, 0}
  };
int i, x, check;
for(i=0; i<3; i++){
   x = collatz(sample[i][0]);
   if(x == sample[i][1]){
      if(sample[i][2] == 0){
         check = 0;
      }
      else{
         check = -1;
      }
   }
   else{
      check = -1;
   }
   if(check == sample[i][2]){
   printf("%d %d %d : TESTCASE IS VALID\n", sample[i][0], x, sample[i][2]);
   }
   else{
   printf("%d %d %d : TEST CASE IS NOT VALID\n", sample[i][0], x, sample[i][2]);
   }
 }
 return 0;
}
