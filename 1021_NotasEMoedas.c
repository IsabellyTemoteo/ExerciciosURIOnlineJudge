#include <stdio.h>
 
int main() {
 
    double valorinicial;
    scanf("%lf", &valorinicial);
    
    int valor;
    int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2;
    int resto_100, resto_50, resto_20, resto_10, resto_5, resto_2;
    
    valor = valorinicial;
     //VERIFICANDO NOTAS.
     nota_100 = valor/100;
     resto_100 = valor%100;
     nota_50 = resto_100/50;
     resto_50 = resto_100%50;
     nota_20 = resto_50/20;
     resto_20 = resto_50%20;
     nota_10 = resto_20/10;
     resto_10 = resto_20%10;
     nota_5 = resto_10/5;
     resto_5 = resto_10%5;
     nota_2 = resto_5/2;
     resto_2 = resto_5%2;
     
     int moeda_1, moeda_05, moeda_25, moeda_10, moeda_005, moeda_001;
     int resto_1m, resto_05m, resto_25m, resto_10m, resto_005m, resto_001m;
     
     int continuacao, cont, resto_notas;
     continuacao = valorinicial*100;
     cont = (int) continuacao;
     resto_notas = cont%100;

     
     //VERIFICANDO MOEDAS.
     
     moeda_1 = resto_notas/100;
     resto_1m = resto_notas%100;
     moeda_05 = resto_1m/50;
     resto_05m = resto_1m%50;
     moeda_25 = resto_05m/25;
     resto_25m = resto_05m%25;
     moeda_10 = resto_25m/10;
     resto_10m = resto_25m%10;
     moeda_005 = resto_10m/05;
     resto_005m = resto_10m%5;
     moeda_001 = resto_005m/1;
     
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota_100);
    printf("%d nota(s) de R$ 50.00\n", nota_50);
    printf("%d nota(s) de R$ 20.00\n", nota_20);
    printf("%d nota(s) de R$ 10.00\n", nota_10);
    printf("%d nota(s) de R$ 5.00\n", nota_5);
    printf("%d nota(s) de R$ 2.00\n", nota_2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", resto_2);
    printf("%d moeda(s) de R$ 0.50\n", moeda_05);
    printf("%d moeda(s) de R$ 0.25\n", moeda_25);
    printf("%d moeda(s) de R$ 0.10\n", moeda_10);
    printf("%d moeda(s) de R$ 0.05\n", moeda_005);
    printf("%d moeda(s) de R$ 0.01\n", moeda_001);
    
    return 0;
}