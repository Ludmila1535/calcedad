#include <stdio.h>

int main()
{
    int num, fecha, fa, Aa, edad;
    printf ("ingrese su fecha de nacimiento como un entero de 8 digitos");
    scanf("%d",&num);
    printf ("ingrese la fecha actual como un entero de 8 digitos");
    scanf ("%d",&fa);
    Aa = fa % 10000;
    fecha = num % 10000;
    edad = Aa - fecha;
     printf ("la edad es %d", edad); 
      return 0;

}
