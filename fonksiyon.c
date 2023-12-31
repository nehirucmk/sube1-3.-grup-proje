#include <stdio.h>
#include <stdlib.h>
struct CALISAN{ // structure sayesinde tanımlanan farklı değişkenler tek bir pointer içine toplanıyor
    char ad[16], soyad[20], departman; // karakter türünden değişkenler
    int rutbe, fazlaMesai, netMaas; // tamsayı türünden değişkenler
};
void maasHesabi (struct CALISAN *calisan){  //maasHesabi adında, parametresi "struct CALISAN" şeklinde bir pointer olan bir fonksiyon tanımlar. Girilen çalışan (struct CALISAN) verilerini işleme alır.
    switch (calisan->departman){ //char türünde girilen calisan.departman değişkenindeki değeri alır ve çalışan departmanını switch-case mekanizmasını kullanarak işleme alır.
        case 'a':
            if (calisan->rutbe == 1) { //calisan.rutbe değişkenindeki değeri alır ve çalışan rütbesini if-else mekanizmasını kullanarak işleme alır.
                calisan->netMaas = 256000 + 895 * calisan->fazlaMesai; //girilen departman ve rütbe değerlerine göre, çalışanın maaşının hangi işlemle hesaplanacağı tespit edilir. Çalışan kişinin maaşını hesaplar ve bu değeri calisan.maas değişkenine atar.
                printf("CEO %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else
                printf("YONETIM DEPARTMANINDA ARADIGINIZ RUTBE BULUNAMADI!\n"); // girilen değerler blok içinde bulunmuşsa diğer durumlara bakmadan direkt olarak sonucu verir.
            break;
        case 'b':
            if (calisan->rutbe == 2){
                calisan->netMaas = 67000 + 279 * calisan->fazlaMesai;
                printf("Satis Direktoru %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 3){
                calisan->netMaas = 52000 + 216 * calisan->fazlaMesai;
                printf("Satis Muduru %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 4){
                calisan->netMaas = 31000 + 129 * calisan->fazlaMesai;
                printf("Satis Sorumlusu %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else
                printf("SATIS DEPARTMANINDA ARADIGINIZ RUTBE BULUNAMADI!\n----------------------------\n");
            break;
        case 'c':
            if (calisan->rutbe == 5){
                calisan->netMaas = 62000 + 258 * calisan->fazlaMesai;
                printf("Insan Kaynaklari Direktoru %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 6){
                calisan->netMaas = 50000 + 208 * calisan->fazlaMesai;
                printf("Insan Kaynaklari Muduru  %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 7){
                calisan->netMaas = 29000 + 120 * calisan->fazlaMesai;
                printf("Insan Kaynaklari Sorumlusu %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else
                printf("INSAN KAYNAKLARI DEPARTMANINDA ARADIGINIZ RUTBE BULUNAMADI!\n");
            break;
        case 'd':
            if (calisan->rutbe == 8){
                calisan->netMaas = 64000 + 266 * calisan->fazlaMesai;
                printf("Marka-Iletisim Direktoru %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 9){
                calisan->netMaas = 60000 + 250 * calisan->fazlaMesai;
                printf("PR Muduru %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else
                printf("MARKA-ILETISIM DEPARTMANINDA ARADIGINIZ RUTBE BULUNAMADI\n");
            break;
        case 'e':
            if (calisan->rutbe == 10){
                calisan->netMaas = 68000 + 283 * calisan->fazlaMesai;
                printf("Finans-Muhasebe Direktoru %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 11){
                calisan->netMaas = 62000 + 258 * calisan->fazlaMesai;
                printf("Muhasebe Muduru %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 12){
                calisan->netMaas = 43000 + 179 * calisan->fazlaMesai;
                printf("Muhasebe Sorumlusu %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else
                printf("FINANS-MUHASEBE DEPARTMANINDA ARADIGINIZ RUTBE BULUNAMADI\n");
            break;
        case 'f':
            if (calisan->rutbe == 13){
                calisan->netMaas = 113000 + 470 * calisan->fazlaMesai;
                printf("Lider Yazilimci %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 14){
                calisan->netMaas = 92000 + 383 * calisan->fazlaMesai;
                printf("Senior Yazilimci %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else if (calisan->rutbe == 15){
                calisan->netMaas = 60000 + 250 * calisan->fazlaMesai;
                printf("Junior Yazilimci %s %s. Maasi: %d TL.\n----------------------------\n", calisan->ad, calisan->soyad, calisan->netMaas);
            }
            else
                printf("YAZILIM DEPARTMANINDA ARADIGINIZ RUTBE BULUNAMADI\n");
            break;
        default: // geçerli değer girilmemesi durumunda hata verir
            printf("LUTFEN TABLODAKI HARFLERDEN BIRINI GIRINIZ!\n");
    }
}

void dosyayaKaydet(struct CALISAN *calisan) { // dosyayaKaydet adlı fonksiyonu çalıştırır. parametre olarak 'struct CALISAN' alır ve pointer aracılığıyla 'calisan' değişkeninin adresindeki değerleri kullanır
    FILE *dosya; // FILE türünde, 'dosya' adında bir pointer tanımlanıyor
    dosya = fopen("maas.txt", "a"); // dosya açma fonskiyonunu kullanarak 'maas.txt' adlı dosya açılıyor ve sonraki işlemlerde kullanılmak üzere dosya değişkenine atanıyor. "a", dosyaya ekleme (append) modunu belirtir. her işlem sonrası dosyaya değişiklikleri ekler.

    if (dosya == NULL) { // dosyanın açılıp açılmadığını kontrol eden karar yapısı. eğer dosya == NULL olursa dosyanın açılamadığını belirtir.
        printf("DOSYA ACILAMIYOR!\n");
        exit(1); // hata durumunda kodu sonlandırıp çıkış yapar
    }

    if ((calisan->departman == 'a' && calisan->rutbe == 1) || (calisan->departman == 'b' && calisan->rutbe>1 && calisan->rutbe<5) ||
        (calisan->departman == 'c' && calisan->rutbe<8 && calisan->rutbe>4) || (calisan->departman == 'd' && calisan->rutbe<10 && calisan->rutbe>7) ||
        (calisan->departman == 'e' && calisan->rutbe<13 && calisan->rutbe > 9) || (calisan->departman == 'f' && calisan->rutbe>12 && calisan->rutbe<16)){
        // departman için verilen alan a-f ve rutbe için verilen alan 1-15 olarak tanımlanmıştır. eğer klavyeden girilen değerler bu alanların içindeyse ve doğru yerlerindeyse girilen bloktaki işlemler yapılır.

        fprintf(dosya, "-----------------------------------\n"
                       "ADI-SOYADI         :%s %s\n"
                       "DEPARTMANI         :%c\n"
                       "RUTBESI            :%d\n"
                       "YAPTIGI FAZLA MESAI:%d SAAT\n"
                       "NET MAASI          :%dTL\n"
                       "-----------------------------------\n", calisan->ad, calisan->soyad,
                calisan->departman, calisan->rutbe, calisan->fazlaMesai, calisan->netMaas); // belirtilen değişken türlerine sırasıyla atanan alanlardaki değerleri yazar


    } else {
        printf("DOSYA OLUSTURULAMADI. LUTFEN TABLOYA GORE GECERLI DEGERLER GIRINIZ!\n"); // girilen değerler istenen alanların dışındaysa hata verir
    }

    fclose(dosya); // başarıyla işlemi gerrçekleşen dosyayı kapatır
}

void menuGoster(){ //Kullanıcı için arayüzdür. Arayüzdeki verilere göre değer girilmelidir.
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
           "---MAAS HESAPLAMA SISTEMINE HOSGELDINIZ---                   |---NET MAAS LISTESI---\n"
           "LUTFEN ASAGIDAKI TABLOYU INCELEYIP ISTENEN VERILERI GIRINIZ. |\n                                                             |\n"
           "(a) ----YONETIM----                                          |CEO                        : 256.000 + (SAATLIK UCRET x 895)TL\n"
           "[1] CEO                                                      |SATIS DIREKTORU            : 67.000  + (SAATLIK UCRET x 279)TL\n"
           "                                                             |SATIS MUDURU               : 52.000  + (SAATLIK UCRET x 216)TL\n"
           "(b) ----SATIS----                                            |SATIS SORUMLUSU            : 31.000  + (SAATLIK UCRET x 129)TL\n"
           "[2] SATIS DIREKTORU                                          |IK DIREKTORU               : 62.000  + (SAATLIK UCRET x 258)TL\n"
           "[3] SATIS MUDURU                                             |IK MUDURU                  : 50.000  + (SAATLIK UCRET x 208)TL\n"
           "[4] SATIS SORUMLUSU                                          |IK SORUMLUSU               : 29.000  + (SAATLIK UCRET x 120)TL\n"
           "                                                             |MARKA VE ILETISIM DIREKTORU: 64.000  + (SAATLIK UCRET x 266)TL\n"
           "(c) ----INSAN KAYNAKLARI----                                 |PR MUDURU                  : 60.000  + (SAATLIK UCRET x 250)TL\n"
           "[5] IK DIREKTORU                                             |FINANS-MUHASEBE DIREKTORU  : 68.000  + (SAATLIK UCRET x 283)TL\n"
           "[6] IK MUDURU                                                |MUHASEBE MUDURU            : 62.000  + (SAATLIK UCRET x 258)TL\n"
           "[7] IK SORUMLUSU                                             |MUHASEBE SORUMLUSU         : 43.000  + (SAATLIK UCRET x 179)TL\n"
           "                                                             |LIDER YAZILIMCI            : 113.000 + (SAATLIK UCRET x 470)TL\n"
           "(d) ----MARKA VE ILETISIM----                                |SENIOR YAZILIMCI           : 92,000  + (SAATLIK UCRET x 383)TL\n"
           "[8] MARKA VE ILETISIM DIREKTORU                              |JUNIOR YAZILIMCI           : 60.000  + (SAATLIK UCRET x 250)TL\n"
           "[9] PR MUDURU                                                |\n"
           "                                                             |\n"
           "(e) ----FINANS-MUHASEBE----                                  |\n"
           "[10] FINANS-MUHASEBE DIREKTORU                               |\n"
           "[11] MUHASEBE MUDURU                                         |\n"
           "[12] MUHASEBE SORUMLUSU                                      |\n"
           "                                                             |\n"
           "(f) ----YAZILIM----                                          |\n"
           "[13] LIDER YAZILIMCI                                         |\n"
           "[14] SENIOR YAZILIMCI                                        |\n"
           "[15] JUNIOR YAZILIMICI                                       |\n"
           "----------------------------\n");
}
