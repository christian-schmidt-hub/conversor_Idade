#include <stdio.h>
void calc_idade(){
    int idade, meses, dias;
    float semanas, horas;
    
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    
    meses = idade * 12;
    dias = idade * 365;
    semanas = dias / 7;
    horas = dias * 24;
    
    printf("voce tem %d meses, %.2f semanas e %.2d dias, %.2f horas", meses, semanas, dias, horas);
}
int main()
{
    calc_idade();
    return 0;
}
