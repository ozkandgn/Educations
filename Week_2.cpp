#include <stdio.h>
#include <conio.h>//_getch() fonksiyonu için

//void(return yok), int, float, char

int Carp(int deger1,int deger2)
{
	int carpým = deger1*deger2;
	return carpým;
}

float OrtalamaHesapla(float toplam,float toplamSayi)
{
	float ortalama = toplam / toplamSayi;
	return ortalama;
}

void KareCiz(int boyut)
{
	for (int i = 0; i < boyut; i++)
	{
		for (int j = 0; j < boyut; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

int main()
{
	//geçen hafta tekrar
	/*

	//deðiþkenler

	int ondalikSayi = 1;
	float kesirliSayi = 1.2f;
	char harf = 'A';
	char kelime[] = "Ali";
	double sayi = 1000;
	*/


	/*
	//girdi çýktý fonksiyonlarý

	char kelime[10];
	//printf("merhaba mars!!!");
	printf("Bir isim giriniz=");
	scanf("%s", kelime);

	//koþul ifadeleri

	if (kelime == "Ali")
	{
		printf("Sizin isminiz %s", kelime);
	}
	else
	{
		printf("Sizin isminiz Ali deðil");
	}

	*/
	/*
	//döngü ifadeleri

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", i);
	}

	*/
	/*

	//while döngüsü

	int sayac = 10;
	while (sayac != 0)
	{
		printf("%d\t",sayac);
		sayac--;
		if (sayac==5)
		{
			printf("\n");
		}
	}

	*/
	/*

	//Diziler ve Fonksiyonlar

	char kelimeler[20][10];
	int sayi[5];

	// 5 kiþinin maaþýný 1000-5000 arasý sýralý daðýtalým.
	for (int i = 0; i < 5; i++)
	{
		//1000 2000 3000 4000 5000
		//1 2 3 4 5  * 1000
		int carpim = Carp(i + 1, 1000);
		printf("%d.kisinin maasi=%d\n", i + 1, carpim);
	}

	*/
	/*

	//degerler deðiþkenine 10 adet sýralý sayý alýp bu sayýlarýn ortalamasýný alalým.

	int degerler[10];
	for (int i = 0; i < 10; i++)
	{
		degerler[i] = i;
	}

	float toplam = 0;

	for (int i = 0; i < 10; i++)
	{
		toplam = toplam + degerler[i];
	}

	printf("Ortalama=%.2f", OrtalamaHesapla(toplam,10));

	*/
	/*

	// girilen deðere göre yýldýzlardan oluþan kare çizelim.

	KareCiz(5);
	*/
	_getch();
}