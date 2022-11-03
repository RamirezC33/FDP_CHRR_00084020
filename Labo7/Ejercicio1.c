//Carlos Humberto Ramirez Rodriguez
//EJjercicio 1 laboratorio 7
#include <stdio.h>

int main()
{
    FILE *npositivos = fopen("numerospo.txt", "w");
    FILE *nnegativos = fopen("numerosne.txt", "w");
    // w es de write para sobreescribir el archivo o por 
    //defecto crearlo
         
    if (npositivos == NULL|| nnegativos ==NULL)
    {
        printf("ERROR!");
        return 1;
    }

    int num = 1;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if(num>0){
        fprintf(npositivos, "%d", num);
        fprintf(npositivos, "\n");
        }
        if (num<0){
        fprintf(nnegativos, "%d", num);
        fprintf(nnegativos, "\n");   
        }
    } 
    while (num != 0);
// Utilizamos el 0 para cerrar el programa
    fclose(npositivos);
    fclose(nnegativos);
    return 0;
}