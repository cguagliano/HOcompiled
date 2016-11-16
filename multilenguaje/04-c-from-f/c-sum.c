#include <stdlib.h>
#include "c-sum.h"

int sum_abs_(int *in, int *num, int *res) {
   int i,sum;

   for (i=0,sum=0; i < *num; ++i) {
       sum += abs(in[i]);
   }
   *res=sum;	
   return 0;
}
 
