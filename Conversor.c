#include <stdio.h>
void idade(){
    int anos;
    int meses;
    int semanas;
    int horas;
    
    printf("Digite sua idade\n");
    scanf("%d", &anos);
    
    meses = anos * 12;
    semanas = meses * 4,3482;
    horas = semanas * 168;
    printf("voce tem %d meses, %d semanas e %d horas", meses, semanas, horas);
}
int main()
{
    idade();
}
