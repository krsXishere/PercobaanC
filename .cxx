#include <iostream>

using namespace std;

int main()
{
	int pilihan, nilai1, nilai2;
	string penjumlahan, pengurangan;
	double nilai;
	
	cout<<" 1. Penjumlahan\n";
	cout<<" 2. Pengurangan\n";
	cout<<" 3. Perkalian\n";
	cout<<" 4. Pembagian\n";
	cout<<" Pilih opsi 1, 2, 3, 4 : ";
	cin>>pilihan;
	
	if(pilihan==1) {
		cout<<" Nilai 1 : ";
		cin>>nilai1;
		cout<<" Nilai 2 : ";
		cin>>nilai2;
		
		nilai = nilai1 + nilai2;
		cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
		
	}else if(pilihan==2) {
		cout<<" Nilai 1 : ";
		cin>>nilai1;
		cout<<" Nilai 2 : ";
		cin>>nilai2;
		
		nilai = nilai1 - nilai2;
		cout<<" Hasil dari pengurangan adalah : "<<nilai<<"\n";
	}
	
	if(pilihan==3) {
		cout<<" Nilai 1 : ";
		cin>>nilai1;
		cout<<" Nilai 2 : ";
		cin>>nilai2;
		
		nilai = nilai1 * nilai2;
		cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
		
	}else if(pilihan==4) {
		cout<<" Nilai 1 : ";
		cin>>nilai1;
		cout<<" Nilai 2 : ";
		cin>>nilai2;
		
		nilai = nilai1 / nilai2;
		cout<<" Hasil dari pembagian adalah : "<<nilai<<"\n";
		
	}
	
	return 0;
	
}