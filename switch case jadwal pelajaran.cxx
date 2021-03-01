#include <iostream>

using namespace std;

int main()
{
	int japel;
	char loop;
	
	do {
	cout<<" Selamat datang di program switch case × do while\n";
	cout<<" Program ini untuk menentukan jadwal pelajaran \n kelas X-RPL 1\n";
	cout<<" Masukkan kode opsi di bawah ini untuk menentukan \n hari yang dimaksud : ";
	cout<<"\n 1 = Senin\n 2 = Selasa\n 3 = Rabu\n 4 = Kamis\n 5 = Jum'at";
	cout<<"\n Masukkan input 1-5 : ";
	cin>>japel;
	switch (japel) {
		case 1:
			cout<<" Jadwal hari Senin\n PABP, PPKn, Sejarah Indonesia";	break;
		case 2:
			cout<<" Jadwal hari Selasa\n MTK, Fisika, Kimia";	break;
		case 3:
			cout<<" Jadwal hari Rabu\n B. Indonesia, B. Inggris, B. Sunda";	break;
		case 4:
			cout<<" Jadwal hari Kamis\n DG, SK, KJD, PD";	break;
		case 5:
			cout<<" Seni Budaya/PJOK";	break;
		default:
			cout<<" Input yang anda masukkan salah!!!";break;
			
		}

	cout<<"\n Kembali ke opsi awal? [Y/N] ";
	cin>>loop;
	} while (loop=='Y' | loop=='y');
	cout<<"\t\t Progam Diakhiri !!!";
	return 0;
}
		
		