#include <stdio.h>
#include <conio.h>//_getch() fonksiyonu i�in

//void(return yok), int, float, char

int Carp(int deger1,int deger2)
{
	int carp�m = deger1*deger2;
	return carp�m;
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
	//ge�en hafta tekrar
	/*

	//de�i�kenler

	int ondalikSayi = 1;
	float kesirliSayi = 1.2f;
	char harf = 'A';
	char kelime[] = "Ali";
	double sayi = 1000;
	*/


	/*
	//girdi ��kt� fonksiyonlar�

	char kelime[10];
	//printf("merhaba mars!!!");
	printf("Bir isim giriniz=");
	scanf("%s", kelime);

	//ko�ul ifadeleri

	if (kelime == "Ali")
	{
		printf("Sizin isminiz %s", kelime);
	}
	else
	{
		printf("Sizin isminiz Ali de�il");
	}

	*/
	/*
	//d�ng� ifadeleri

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", i);
	}

	*/
	/*

	//while d�ng�s�

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

	// 5 ki�inin maa��n� 1000-5000 aras� s�ral� da��tal�m.
	for (int i = 0; i < 5; i++)
	{
		//1000 2000 3000 4000 5000
		//1 2 3 4 5  * 1000
		int carpim = Carp(i + 1, 1000);
		printf("%d.kisinin maasi=%d\n", i + 1, carpim);
	}

	*/
	/*

	//degerler de�i�kenine 10 adet s�ral� say� al�p bu say�lar�n ortalamas�n� alal�m.

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

	// girilen de�ere g�re y�ld�zlardan olu�an kare �izelim.

	KareCiz(5);
	*/
	_getch();
}