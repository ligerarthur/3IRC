#include <stdio.h>
#include <math.h>


int main(){
  int dec = 65536;
  int tmp = dec;
  int ind = 0;
  int a;
  long bin = 0;
  
  while (tmp >= 0){
   tmp = tmp - pow(2,ind);
   if (tmp < 0){
    continue;
   }
   ind = ind+1;
  }
  
  
  
  for(a = ind; a >= 0; a=a-1){
    if(dec-pow(2,a) >= 0){
      bin = bin + pow(10,a);
      dec = dec - pow(2,a);
    }
  }
  
  printf("le resultat est : %ld \n", bin);
  
  return 0;
}

