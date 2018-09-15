/*
 * En este programa se desarrollara el factorial del número que el usuario ordene al programa.
 * Nombre: Óscar Rubén Gómez Ríos
 * Fecha: 07 de Septiembre del 2018
 * Correo A01411750@itesm.mx
 *
 */
#include<stdio.h>
int main()
{
    int a,f,i;
    printf("Give me a number: ");
    scanf("%d",&a);
    f=1;
    i=1;
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    while(i<=a)
    {
        f = f * i;
        i++;
    }
    printf("Factorial: %d",f);
    return 0;
}