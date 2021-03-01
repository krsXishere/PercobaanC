#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main ()

{
	
	int angka, tebak, n=0;
	
	srand; time(NULL);
	angka=rand() % 100 +1;
	
	cout << "Selamat datang di Permainan Tebak Angka \n";
	cout << "Ayo Mulai\n";
	
	do { 
		n++;
		cin >> tebak;
		if (tebak < angka) ;
		cout << "Tebakkan angka anda terlalu BESAR, cobalah tebak lagi\n";
		else (tebak > angka) ;
		cout << "Tebakkan angka anda terlalu KECIL, cobalah tebak lagi\n";
}	while (tebak!=angka);
	
	cout << "Selamat, tebakkan anda benar, anda telah menebak sebanyak..." << n << "kali";
	
	return 0;
	
}