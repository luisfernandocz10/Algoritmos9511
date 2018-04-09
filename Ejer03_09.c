/* Ejer03_09.c
	Programa que inverte (espejo) un numero entero
*/
#include <stdio.h>
/*Prototipo*/
int invertir_numero(int numero);
int main(void)
{
	int n;                                            
	scanf("%d",&n);
	/*Imprime el n�mero invertido*/
	printf("%d \n",invertir_numero(n));
	return 0;
}
/* Definicion de la funcion */
int invertir_numero(int numero)
{
	int resto,invertido=0;
	/*El while recorre el numero ingresado*/                                                      
    while(numero!=0)                               
    {
		/*Guarda el resto de la divisi�n del numero
		ingresado */
        resto=numero%10;
		/*Se toma solo parte entera (casteo) y se 
		descarta la parte decimal */                  
        numero=numero/10;         
		/*Invierte el n�mero directamente*/                
        invertido=invertido*10+resto;         
    }
    return invertido;
}
/* ENUCIADO
GUIA 03-09. Escribir una funci�n que reciba un entero y retorne 
dicho n�mero espejado. Por ejemplo: recibe 9511 y 
retorna 1159. Sugerencia: utilice los operadores 
m�dulo -%- y divisi�n -/-.
*/