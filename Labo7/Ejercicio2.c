//Carlos Humberto Ramirez Rodriguez
//Ejercicio 3 laboratorio 7
#include<stdio.h>
enum {a,e,i,o,u};
void conteo(char frase[100],int vocales[5]);
int main()
{
	char palabra[100];
	int vocales[5],x;
 
	for(x=0;x<5;x++){
		vocales[x]=0;
	}
	printf("Ingrese una palabra: ");
	gets(palabra);
	conteo(palabra,vocales);
	printf("\n La A se repite %d veces",vocales[a]);
	printf("\n La E se repite %d veces",vocales[e]);
	printf("\n La I se repite %d veces",vocales[i]);
	printf("\n La O se repite %d veces",vocales[o]);
	printf("\n La U se repite %d veces",vocales[u]);
	getchar();
	return 0;
}
void conteo(char palabra[100], int vocales[5])
//No afecta si se utilizan mayusculas
{
	for(int x=0;palabra[x] !='\0' && palabra[x] !='\n';x++){
		switch(palabra[x]){
			case 'a': case 'A': vocales[a]++; break;
			case 'e': case 'E': vocales[e]++; break;
			case 'i': case 'I': vocales[i]++; break;
			case 'o': case 'O': vocales[o]++; break;
			case 'u': case 'U': vocales[u]++; break;
		}
	}
}       