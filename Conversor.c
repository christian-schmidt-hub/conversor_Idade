#include <stdio.h>
void idade(){
    int idade, meses, dias;
    float semanas, horas;
    
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    
    meses = idade * 12;
    semanas = meses * 4.345;
    dias = semanas * 7;
    horas = dias * 24;
    
    printf("voce tem %d meses, %.2f semanas e %.2d dias, %.2f horas", meses, semanas, dias, horas);
}
int main()
{
    idade();
}
