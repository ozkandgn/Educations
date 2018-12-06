#include <stdio.h> // printf, scanf fonksiyonlarýný kullanmak için eklenir.
#include <unistd.h> // sleep fonksiyonunu kullanmak için eklenir.

main()
{
	// Tek yorum satýrý
	/*
		Çoklu
		Yorum
		Satýrý	
	*/
	
	
	//DEÐÝÞKEN TANIMLAMA
	/*
		double x; 
		int y;
		char z;
		float t;
		bool s;
		char isim[20];
	*/
	
	
	// printf KULLANIM ÖRNEKLERÝ
	// (tamsayý) int deðerleri ekranda görüntülemek için %d
	// (noktalý sayý) float ya da double için %f
	// (tek karakter) char görüntülemek için %c
	// (kelime) char dizisi görüntülemek için %s
	//  \n => yeni satýra geçirir
	// %.2f => float deðiþkenin .'dan sonra 2 basamaðýný göster.
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
	
	
	//ARÝTMETÝK ÝÞLEM ÖRNEKLERÝ
	// Toplama => a+b
	// Çýkarma => a-b
	// Çarpma => a*b
	// Bölme => a/b
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

	// FOR döngüsü
	/*
	char ogrAd[20];
	char ogrSoyad[10];
	float ogrPuan;
	
	for(int i=0;i<3;i++)
	{
		printf("Ogrenci : ");
		scanf("%s",ogrAd);			// char dizisi alýrken & kullanmamýza gerek yok.
		printf("Ogrenci soyad: ");
		scanf("%s",ogrSoyad);
		printf("Ogrenci puan: ");
		scanf("%f",&ogrPuan);		// float'ta ise & gerekli.
		printf("Ad: %s\nSoyad: %s\nPuan: %f\n",ogrAd,ogrSoyad,ogrPuan);	
	}
	*/
	
	// WHILE döngüsü
	/*
	int a=0;
	while(a<10) // a deðiþkeni 10'dan küçük olduðu sürece döngü devam eder.
	{
		printf("%d",a);
		a++;
		if(a==3)	// if koþulunu ve break ifadesini koymasak 0-9 arasý deðerleri yazacaktý. 
			break; 
		sleep(1);	// döngüyü her dönüþünde 1 saniye bekletir.
	}
	*/
		
}
