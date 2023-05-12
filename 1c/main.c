#include <stdio.h>
#include <stdlib.h>

//     c)Aranýlan elemanýn dizide olup olmadýðýnýn kontrolünü Linear Searchkullanarakyapýnýz.

int linear_Arama(int bllk[], int boyutt, int favoriEleman);


int main() {
    int h, boyutt, favoriEleman;

    printf("Olusturmak istediginiz dizinin boyutunu giriniz: ");    
    scanf("%d", &boyutt);                //kullanicidan diznin kac boyutlu oldugunu al

    int *bllk = (int*) malloc(boyutt * sizeof(int)); //bellekte dizi olustur

    for (h=0; h<boyutt; h++) {
        printf("%d. elemani giriniz: ", h+1);
        scanf("%d", &bllk[h]);      // dizi elemanlarýný ekrana yazdýr 
    }


    printf("Olusturdugunuz dizide aranacak elemani giriniz: ");
    scanf("%d", &favoriEleman);                 // Kullanicidan aramak istedigi elemanini iste

    int index = linear_Arama(bllk, boyutt, favoriEleman);

    if (index != -1) {
        printf("Aranan eleman %d , aranan eleman dizinin %d. indexidir.", favoriEleman, index);
    } else {
        printf("Aranan eleman %d, dizide bulunamadi.", favoriEleman);
    }

    return 0;
}

int linear_Arama(int bllk[], int boyutt, int favoriEleman) {
	int h;
    for (h = 0; h < boyutt; h++) {
        if (bllk[h] == favoriEleman) {
            return h;
        }
    }
    return -1;
}
