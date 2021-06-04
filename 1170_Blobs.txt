#include <stdio.h>

int main() {

  int N, Dias, i;
  float Kg;

 scanf("%d", &N);

 for(i = 0; i < N; i++){
 scanf("%f", &Kg); 
 Dias = 0;

 while(Kg > 1.0){
   Kg = Kg/2;
   Dias++;
 }
 printf("%d dias\n", Dias);
 
 }
 return 0;
}