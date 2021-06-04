#include <stdio.h>

int main()
{
   long long int n, elemento_1 = 0, elemento_2 = 1, prox, c;

   int i,j;

   scanf("%d", &j);

   for(i=1; i<=j; i++, elemento_1 = 0, elemento_2 = 1) {
      
      scanf("%lld",&n);
      n=n+1;
      
      for ( c = 0 ; c < n ; c++ ){
          if (c <= 1) prox = c;
          else{
             prox = elemento_1 + elemento_2;
             elemento_1 = elemento_2;
             elemento_2 = prox;
          }}

    printf("Fib(%lld) = %lld\n",n-1,prox); }
    
   return 0;
}