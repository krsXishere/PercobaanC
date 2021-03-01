#include <iostream>

using namespace std;

int main()
{
	int bulan;
	char loop;
	
	do {
	cout<<" Selamat datang di program pengkondisian pasti\n";
	cout<<" Program ini untuk menentukan bulan\n\n";
	cout<<" Masukkan input 1-12 : ";
	cin>>bulan;
	switch (bulan) {
		case 1:
			cout<<" Januari";	break;
		case 2:
			cout<<" Februari";	break;
		case 3:
			cout<<" Maret";	break;
		case 4:
			cout<<" April";	break;
		case 5:
			cout<<" Mei";	break;
		case 6:
			cout<<" Juni";	break;
		case 7:
			cout<<" Juli";	break;
		case 8:
			cout<<" Agustus";	break;
		case 9:
			cout<<" September";	break;
		case 10:
			cout<<" Oktober";	break;
		case 11:
			cout<<" November";	break;
		case 12:
			cout<<" Desember";	break;
		default:
			cout<<" Input yang anda masukkan salah!!!";break;
			
		}

	cout<<"\n Kembali ke opsi awal? [Y/N] : "; 	cin>>loop;
	cout<<"\n";
	} while (loop=='Y' | loop=='y');
	cout<<" Progam Diakhiri !!!";
	
	return 0;
}
		
		