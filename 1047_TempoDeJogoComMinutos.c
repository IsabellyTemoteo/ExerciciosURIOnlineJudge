#include <stdio.h>
 
int main() {
 
   int h_inicial, h_final, m_inicial, m_final;
   scanf("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final);
   
   int duracao_horas, duracao_min;
   duracao_horas = h_final - h_inicial;
   duracao_min = m_final - m_inicial;

   if(duracao_min < 0){ 
       duracao_min += 60;
       duracao_horas--; }

    if(duracao_horas < 0) {
        duracao_horas += 24;}   

    if (h_inicial == h_final && m_inicial == m_final){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n"); }
    
    else {
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_min); }
   
    return 0;
}