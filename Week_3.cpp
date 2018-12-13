#include <stdio.h>
#include <conio.h>

float Carp(float deger1,float deger2)
{
	return deger1*deger2;
}

void main()
{
	/*
	Bakkal otomasyonu
	bakkal ekmek, ya�l� s�t, ya�s�z s�t ve yumurta satmaktad�r.
	bakkal se�enekler sunarak hangi �r�nden ka� tane alaca��m�z� soracak ve �r�n�n fiyat� ile �arp�p
	toplam tutar� bize g�sterecek.
	*/
	int devam = 1;
	float toplam_fiyat = 0;
	printf("Bakkalda ekmek, yagli-yagsiz sut ve yumurta satilmaktadir.\n");
	while (devam == 1)
	{
		int secilen_urun;
		printf("Alacaginiz urun ekmek ise 1, sut ise 2, yumurta ise 3'e basiniz... \n");
		scanf("%d", &secilen_urun);
		if (secilen_urun == 1)
		{
			float adet;
			float fiyat = 1.25f;
			printf("Alinacak ekmek adetini giriniz: ");
			scanf("%f", &adet);
			toplam_fiyat += Carp(adet, fiyat);
		}
		else if (secilen_urun == 3)
		{
			float adet;
			float fiyat = 0.5f;
			printf("Alinacak yumurta adetini giriniz: ");
			scanf("%f", &adet);
			toplam_fiyat += Carp(adet, fiyat);
		}
		else if (secilen_urun == 2)
		{
			char deger[1];
			printf("Alinacak sut yagli ise y mi yagsiz ise s ye basiniz ");
			scanf("%s", deger);
			if (deger[0] == 'y')
			{
				float adet;
				float fiyat = 2.5f;
				printf("Alinacak yagli sut adetini giriniz: ");
				scanf("%f", &adet);
				toplam_fiyat += Carp(adet, fiyat);
			}
			else if (deger[0] == 's')
			{
				float adet;
				float fiyat = 2.25f;
				printf("Alinacak yagsiz sut adetini giriniz: ");
				scanf("%f", &adet);
				toplam_fiyat += Carp(adet, fiyat);
			}
		}
		printf("\n Urunler eklendi devam etmek istiyorsaniz 1'e basiniz... ");
		scanf("%d", &devam);
	}
	printf("\nToplam tutar= %f", toplam_fiyat);
	_getch();


	/*
	#Mod alma i�lemleri

	int dizi1[3] = {10,20,30};
	int sayac = 3;
	printf("%d ", dizi1[sayac % 3]);
	*/
}
