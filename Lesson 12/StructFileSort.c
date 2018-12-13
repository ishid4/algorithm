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
#include <string.h>
#include <stdlib.h>
struct notlar{
    char ders_adi[25];
    char ders_adi2[25];
    int ders_notu;
    int ders_notu2;
};
struct gecti_kaldi{
    char gbilgiler[6];
};
struct ogrenciler{
    char ad[25];
    char soyad[25];
    int sinif;
    int numara;
    struct notlar not;
    struct gecti_kaldi durum;
} ogrenci[3];
int main(){
    int ortalama;
    FILE *yaz;
    yaz=fopen("ogr_bilgi.txt","w");
    for(int i=0;i<3;i++){
        printf("Ogrenci Adı: ");
        scanf("%s", &ogrenci[i].ad);
        printf("Ogrenci Soyadı: ");
        scanf("%s", &ogrenci[i].soyad);
        printf("Ogrenci Numarası: ");
        scanf("%d", &ogrenci[i].numara);
        printf("Ogrenci Sınıfı: ");
        scanf("%d", &ogrenci[i].sinif);
        printf("Ders Adı: ");
        scanf("%s", &ogrenci[i].not.ders_adi);
        printf("Ders Notu: ");
        scanf("%d", &ogrenci[i].not.ders_notu);
        printf("Ders Adı: ");
        scanf("%s", &ogrenci[i].not.ders_adi2);
        printf("Ders Notu: ");
        scanf("%d", &ogrenci[i].not.ders_notu2);        
    }
    for(int i=0;i<3;i++){
        if((ogrenci[i].not.ders_notu + ogrenci[i].not.ders_notu2) / 2 >= 45){
            strcpy(ogrenci[i].durum.gbilgiler, "GECTI");
        }else{
            strcpy(ogrenci[i].durum.gbilgiler, "KALDI");
        }
    fputs("Ad\tSoyad\tNumara\tSinif\tDersAdi\tDersNotu\tDersAdi\tDersNotu\tDurum\n", yaz);
    fprintf(yaz, "%s\t%s\t%d\t%d\t%s\t%d\t%s\t%d\t%s\n", ogrenci[i].ad,ogrenci[i].soyad,ogrenci[i].numara,ogrenci[i].sinif,ogrenci[i].not.ders_adi,ogrenci[i].not.ders_notu,ogrenci[i].not.ders_adi2,ogrenci[i].not.ders_notu2,ogrenci[i].durum.gbilgiler);
    }
    fclose(yaz);
    return 0;
}
