//PROGRAM MEMILIH JENIS SEGITIGA
#include <stdio.h>
int main ()
{
	//deklarasi
	int a,b,c;
	
	//masukkan
	printf ("Panjang sisi A: ");
	scanf ("%d", &a);
	printf ("Panjang sisi B: ");
	scanf ("%d", &b);
	printf ("Panjang sisi C: ");
	scanf ("%d", &c);
	
	//proses
	   if(a==b && a==c){
        printf("Segitiga sama sisi");
    }
    
    else if(a==b || a==c){
        if(a!=b || a!=c)
        {
            printf("Segi Tiga sama Kaki");
        }
    }
    else
    printf("Semua sisi berbeda");
    
    return 0;
}

