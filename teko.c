#include <stdio.h>

int main()
{
    int a = 0; //ember 3 liter
    int b = 0; //ember 5 liter

    while ((a != 4) || (b != 4))
    {
        printf ("Ember A= %d", a);
        printf ("\nEmber B = %d", b) ;

        printf ("\n--intruksi yang dapat dilakukan--\n");
        printf ("1. Mengisi ember A sampai penuh\n");
        printf ("2. Mengisi ember B sampai penuh\n");
        printf ("3. Mengosongkan ember A\n");
        printf ("4. Mengosongkan ember B\n");
        printf ("5. Menuangkan isi ember A ke ember B sampai penuh \n");
        printf ("6. Menuangkan isi ember B ke ember A sampai penuh\n");

        int instruksi;
        printf ("Pilih nomor instruksi: %d");
        scanf("%d", &instruksi);

        if (instruksi == 1) {
            if (a == 0) {
                a = a + 3 ;
                b = b ;
            }
            else {
                a = a;
                b = b;
            }
        }
        else if (instruksi == 2) {
            if (b == 0) {
                a = a ;
                b = b + 5 ;
            }
            else {
                a = a ;
                b = b ;
            }

        }
        else if (instruksi == 3) {
            a = 0;
            b = b;
        }
        else if (instruksi == 4) {
            a = a;
            b = 0;
        }
        else if (instruksi == 5) {
            while (a>0 && b<5) {
                a = a - 1;
                b = b + 1;
            }
        }
        else {
            while (a<3 && b>0) {
                a = a + 1;
                b = b - 1;
            }
        }
    }
    printf ("Ember A= %d", a);
    printf ("\nEmber B = %d", b) ;
    return 0;
}
