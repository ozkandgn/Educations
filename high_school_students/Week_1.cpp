#include <stdio.h> // printf, scanf fonksiyonlar�n� kullanmak i�in eklenir.
#include <unistd.h> // sleep fonksiyonunu kullanmak i�in eklenir.

main()
{
	// Tek yorum sat�r�
	/*
		�oklu
		Yorum
		Sat�r�	
	*/
	
	
	//DE���KEN TANIMLAMA
	/*
		double x; 
		int y;
		char z;
		float t;
		bool s;
		char isim[20];
	*/
	
	
	// printf KULLANIM �RNEKLER�
	// (tamsay�) int de�erleri ekranda g�r�nt�lemek i�in %d
	// (noktal� say�) float ya da double i�in %f
	// (tek karakter) char g�r�nt�lemek i�in %c
	// (kelime) char dizisi g�r�nt�lemek i�in %s
	//  \n => yeni sat�ra ge�irir
	// %.2f => float de�i�kenin .'dan sonra 2 basama��n� g�ster.
	/*
 	int sayi1 = 3;
	float sayi2 = 12.5;
	double sayi3 = 12.5;
	char karakter = 'K';
	char isim[15] = "Seren";
	
	printf("1.Sayi = %d \n", sayi1);
	printf("2.Sayi = %.2f \n", sayi2);
	printf("3.Sayi = %.3f \n", sayi3);
	printf("Karakter = %c \n", karakter);
	printf("Kelimem = %s \n", isim);
	*/
	
	
	//AR�TMET�K ��LEM �RNEKLER�
	// Toplama => a+b
	// ��karma => a-b
	// �arpma => a*b
	// B�lme => a/b
	// Mod Alma => a%b
	/*
	int sayi1;
	int sayi2;
	 
	printf("Birinci sayiyi giriniz:");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d", &sayi2);
	printf("%d %% %d = %d", sayi1, sayi2, sayi1%sayi2);
	*/


	// IF-ELSE KONTROL YAPISI
	/*
	float sinav1;
	float sinav2;
	
	printf("1.Sinav notunuz: ");
	scanf("%f", &sinav1);
	
	printf("2.Sinav notunuz: ");
	scanf("%f", &sinav2);
		
	float toplam=sinav1+sinav2;
	float ortalama=toplam/2;
	
	printf("Ortalamaniz= %.2f\n", ortalama);
	
	if(ortalama>50)
	{
		printf("Tebrikler gectiniz!");
	}
	else
		printf("Maalesef kaldiniz :(");
	*/
	
	
	// SWITCH-CASE
	/*
	float fiyat;
	int taksitSayisi;
	
	printf("Fiyat: ");
	scanf("%f", &fiyat);
	printf("Kac taksit istersiniz (3/6): ");
	scanf("%d", &taksitSayisi);
	
	float x;
	
	switch(taksitSayisi)
	{
		case 3:
			fiyat=fiyat/3;
			printf("Aylik taksidiniz %8.3f",fiyat );
			break;
		case 6:
			x=fiyat/6;
			fiyat=x+x*0.2;
			printf("Aylik taksidiniz %8.3f",fiyat );
			break;
		default:
			printf("3 veya 6 taksit giriniz...");
			break;
	}
	*/

	// FOR d�ng�s�
	/*
	char ogrAd[20];
	char ogrSoyad[10];
	float ogrPuan;
	
	for(int i=0;i<3;i++)
	{
		printf("Ogrenci : ");
		scanf("%s",ogrAd);			// char dizisi al�rken & kullanmam�za gerek yok.
		printf("Ogrenci soyad: ");
		scanf("%s",ogrSoyad);
		printf("Ogrenci puan: ");
		scanf("%f",&ogrPuan);		// float'ta ise & gerekli.
		printf("Ad: %s\nSoyad: %s\nPuan: %f\n",ogrAd,ogrSoyad,ogrPuan);	
	}
	*/
	
	// WHILE d�ng�s�
	/*
	int a=0;
	while(a<10) // a de�i�keni 10'dan k���k oldu�u s�rece d�ng� devam eder.
	{
		printf("%d",a);
		a++;
		if(a==3)	// if ko�ulunu ve break ifadesini koymasak 0-9 aras� de�erleri yazacakt�. 
			break; 
		sleep(1);	// d�ng�y� her d�n���nde 1 saniye bekletir.
	}
	*/
		
}
