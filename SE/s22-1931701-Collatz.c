#include <assert.h>
#include <stdio.h>
int collatz(int n){
int i = 0;
while(n>1){
        if(n % 2 == 00){
                n /= 2;
                i++;
        } else{
                n = 3*n + 1;
                i++;
        }
}
return i;
}

int main(void)
{
int sample[3][3]=
  {{2, 1, 0},
   {-1,0,-1},
   {3, 7, 0}
  };
int i, z, x, y;
for(i=0; i<3; i++){
   x = sample[i][0];
   y = collatz(x);
   assert(y == sample[i][1]);
   if(y != 0){
     z = 0;
   }
   else{
     z = -1;
   }
   assert(z == sample[i][2]);
   printf("%d %d %d\n", x, y, z);
 }
 return 0;
}
