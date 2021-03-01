#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int  main()
{
	//cara mendeklarasikan konstanta (variable yang bernilai tetap)
	#define pcs "pcs/buah" //cara1
	
	int processor = 100;
	int hdd = 200;
	int monitor = 300;
	int keyboard = 400;
	int mouse = 500;
	
	int penjualan_processor;
	int penjualan_hdd;
	int penjualan_monitor;
	int penjualan_keyboard;
	int penjualan_mouse;
	
	printf("############\n");
	printf("### TOKO KOMPUTER ###");
	printf("############\n\n");
	
	printf("jumlah processor = %i %s", processor, pcs);
	printf("\njumlah hdd = %i %s", hdd, pcs);
	printf("\njumlah monitor = %i %s", monitor, pcs);
	printf("\njumlah keyboard = %i %S", keyboard, pcs);
	printf("\njumlah mouse = %i %s", mouse, pcs);
	
	printf("\njumlah penjualan processor [0-100] : ");
	scanf("%i", &penjualan_processor);
	printf("processor terjual %i %s", penjualan_hdd, pcs);
	
	printf("\njumlah penjualan hdd [0-200] : ");
	scanf("%i", &penjualan_hdd);
	printf("hdd terjual %i %s", penjualan_hdd, pcs);
	
	printf("\njumlah penjualan monitor [0-300] : ");
	scanf("%i", &penjualan_monitor);
	printf("monitor terjual %i %s", penjualan_monitor, pcs);
		
	printf("\njumlah penjualan keyboard [0-400] : ");
	scanf("%i", &penjualan_keyboard);
	printf("keyboard terjual %i %s", penjualan_keyboard, pcs);
	
	printf("\njumlah penjualan mouse [0-500] : ");
	scanf("%i", &penjualan_mouse);
	printf("mouse terjual %i %s", penjualan_mouse, pcs);
		
	printf("\nstok penjualan akhir bulan");
	printf("jumlah processor = %i %s", processor - penjualan_processor, pcs);
	printf("\njumlah hdd = %i %s", hdd - penjualan_hdd ,pcs);
	printf("\njumlah monitor = %i %s", monitor - penjualan_monitor, pcs);
	printf("\njumlah keyboard = %i %S", keyboard - penjualan_keyboard, pcs);
	printf("\njumlah mouse = %i %s", mouse - penjualan_mouse, pcs);
	
 return 0;	
}




