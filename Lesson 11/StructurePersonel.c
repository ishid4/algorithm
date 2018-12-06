/*        █████████        
 *       ███████████       ██████   █████  ██     ██ ███    ██ 
 *       ███████████       ██   ██ ██   ██ ██     ██ ████   ██ 
 *        █████████        ██████  ███████ ██  █  ██ ██ ██  ██ 
 *       ███████████       ██      ██   ██ ██ ███ ██ ██  ██ ██ 
 *         ███████         ██      ██   ██  ███ ███  ██   ████ 
 *         ███████          
 *        █████████        @Author: Emircan Y. 
 *        █████████        @Date: 2018-10-26 20:22:06 
 *       ███████████       @Mail: Emircan.Yildiz@marun.edu.tr 
 *     ███████████████      
 *   ███████████████████*/   
#include <stdio.h>
struct ailey{
    char medeni[10];
    char esadi[25];
    int cocsayi;
};
struct kurum{
    char birim_adi[25];
    char pozisyon[25];
    int maas;
};
struct Personel{
    char ad[25];
    char soyad[25];
    int yas;
    struct ailey a_bilgi;
    struct kurum k_bilgi;
}Person[3];
int main(){
    int i;
    for(int i=0;i<3;i++){
        printf("Personel Adi: ");
        scanf("%s", &Person[i].ad);
        printf("Personel Soyadı: ");
        scanf("%s", &Person[i].soyad);
        printf("Personel Yas: ");
        scanf("%d", &Person[i].yas);
        printf("Personel Medeni Hal: ");
        scanf("%s", &Person[i].a_bilgi.medeni);
        printf("Personel Es Adi");
        scanf("%s", &Person[i].a_bilgi.esadi);
        printf("Personel Cocuk Sayisi ");
        scanf("%d", &Person[i].a_bilgi.cocsayi);
        printf("Personel Birim Adı");
        scanf("%s", &Person[i].k_bilgi.birim_adi);   
        printf("Personel Pozisyon");
        scanf("%s", &Person[i].k_bilgi.pozisyon);
        printf("Personel Maas ");
        scanf("%d", &Person[i].k_bilgi.maas);             
    }
    for(int j=0;j<3;j++){
        printf("\nPersonel Adi: %s",Person[j].ad);
        printf("\nPersonel Soyadı: %s", &Person[j].soyad);
        printf("\nPersonel Yas: %d", &Person[j].yas);
        printf("\nPersonel Medeni Hal: %s", &Person[j].a_bilgi.medeni);
        printf("\nPersonel Es Adi: %s", &Person[j].a_bilgi.esadi);
        printf("\nPersonel Cocuk Sayisi: %d", &Person[j].a_bilgi.cocsayi);
        printf("\nPersonel Birim Adı: %s", &Person[j].k_bilgi.birim_adi);
        printf("\nPersonel Pozisyon: %s", &Person[j].k_bilgi.pozisyon);
        printf("\nPersonel Maas: %d", &Person[j].k_bilgi.maas);
    }
    return 0;
}
