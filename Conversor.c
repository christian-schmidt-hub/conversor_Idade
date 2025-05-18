#include <stdio.h>
void calc_idade(){
    int idade, meses;
    float semanas, horas, dias;
    
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    
    meses = idade * 12;
    dias = idade * 365.25;
    semanas = dias / 7;
    horas = dias * 24;
    
    printf("voce tem %d meses, %.2f semanas e %.2f dias, %.2f horas", meses, semanas, dias, horas);
}
int main()
{
    calc_idade();
    return 0;
}
