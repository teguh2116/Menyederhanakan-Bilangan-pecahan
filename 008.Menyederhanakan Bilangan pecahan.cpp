#include <stdio.h>
int main ()
{
    int a, b, sisa, x, y;
    printf ("masukan bilangan pertama : ");
    scanf ("%d", &a);
    printf ("masukan bilangan kedua : ");
    scanf ("%d", &b);
    sisa = a/b;
    x = a*sisa;
    y = x/b;
    if (sisa == 0)
            printf ("\n%d/%d = %d", a, b, y);
    if (sisa > 0)
        printf ("\n%d/%d = %d %d/%d", a, b, y, sisa, b);
    printf ("\n");
    printf ("\ndimana A = %d, b (awal) = %d, b (akhir = %d, dan c = %d", y, a, sisa, b);
     printf ("\n");
    return 0;

}
