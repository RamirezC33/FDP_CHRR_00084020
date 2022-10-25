//Omar Alberto Peña Sanchez
//ejercicio 1

#include <stdio.h>

int calculadora (int *num1, int *num2,int *num3, char *proceso, int *respuesta){

switch (*proceso)
{
case '+':
    *respuesta = *num1 + *num2 + *num3;
    printf("el resultado de la suma es: %d", *respuesta);
    break;

case '-':
    *respuesta = *num1 - *num2 - *num3 ;
    printf("el resultado de la resta es: %d", *respuesta);
    break;

case '*':
    *respuesta=*num1 * *num2 * *num3;
    printf("el resultado de la multiplicacion es: %d", *respuesta);
    break;

}
}
int main()
{
    int num1, num2, num3, respuesta;
    char proceso;

    printf("ingrese el primer valor");
    scanf("%d", &num1);

    printf("ingrese el segundo valor");
    scanf("%d", &num2);

    printf("ingrese el tercer valor");
    scanf("%d", &num3);

    printf("ingrese simbolo de operacion");
    scanf(" %c", &proceso);

    calculadora (&num1, &num2, &num3, &proceso, &respuesta);

    return 0;
}
