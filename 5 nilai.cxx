#include <iostream>

using namespace std;

int main()
{
	int pilihan, nilai1, nilai2, nilai3, nilai4, nilai5, nilai6, nilai7, nilai8, nilai9, nilai10, nilai11;
	string penjumlahan, pengurangan, perkalian, pembagian, ok;
	double nilai;
	char loop, pilihan2;
	
	
	cout<<"\t SELAMAT DATANG DI OPERATOR SEDERHANA\n";
	cout<<" Ketik OK untuk melanjutkan : ";
	cin>>ok;
	
		do {
		cout<<" 1. Penjumlahan\n";
		cout<<" 2. Pengurangan\n";
		cout<<" 3. Perkalian\n";
		cout<<" 4. Pembagian\n";
		cout<<" Pilih opsi 1, 2, 3, 4 : ";
		cin>>pilihan;
	
		if(pilihan==1)
		{
			cout<<" Untuk opsi menggunakan huruf adalah angka Romawi\n";
			cout<<" 1. Penjumlahan 2 nilai\t 6. Penjumlahan 7 nilai\n";
			cout<<" 2. Penjumlahan 3 nilai\t 7. Penjumlahan 8 nilai\n";
			cout<<" 3. Penjumlahan 4 nilai\t 8. Penjumlahan 9 nilai\n";
			cout<<" 4. Penjumlahan 5 nilai\t 9. Penjumlahan 10 nilai\n";
			cout<<" 5. Penjumlahan 6 nilai\t X. Penjumlahan 11 nilai\n";
			cout<<" Pilih opsi 1-X : ";
			cin>>pilihan2;
		
			if(pilihan2=='1') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 + nilai2;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
	
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 + nilai2 + nilai3;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 + nilai2 + nilai3 + nilai4;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='4') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				
				nilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='5') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				
				nilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='6') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7: ";
				cin>>nilai7;
				
				nilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='7') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				
				nilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7 + nilai8;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='8') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				
				nilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7 + nilai8 + nilai9;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='9') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				
				nilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7 + nilai8 + nilai9 + nilai10;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='X') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				cout<<" Nilai 11 : ";
				cin>>nilai11;
				
				nilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7 + nilai8 + nilai9 + nilai10 + nilai11;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
				
		}else {
			cout<<" Input yang anda masukkan salah!!!";
		}
	}else if(pilihan==2)
	{
		cout<<" Untuk opsi menggunakan huruf adalah angka Romawi\n";
		cout<<" 1. Pengurangan 2 nilai\t 6. Pengurangan 7 nilai\n";
		cout<<" 2. Pengurangan 3 nilai\t 7. Pengurangan 8 nilai\n";
		cout<<" 3. Pengurangan 4 nilai\t 8. Pengurangan 9 \n";
		cout<<" 4. Pengurangan 5 nilai\t 9. Pengurangan 10 nilai\n";
		cout<<" 5. Pengurangan 6 nilai\t X. Pengurangan 11 nilai\n";
		cout<<" Pilih opsi 1-X : ";
		cin>>pilihan2;
		
			if(pilihan2=='1') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 - nilai2;
				cout<<" Hasil dari pengurangan adalah : "<<nilai<<"\n";
	
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 - nilai2 - nilai3;
				cout<<" Hasil dari pengurangan adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai2 : ";
				cin>>nilai2;
				cout<<" Nilai3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 - nilai2 - nilai3 - nilai4;
				cout<<" Hasil dari pengurangan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='4') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				
				nilai = nilai1 - nilai2 - nilai3 - nilai4 - nilai5;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='5') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				
				nilai = nilai1 - nilai2 - nilai3 - nilai4 - nilai5 - nilai6;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='6') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				
				nilai = nilai1 - nilai2 - nilai3 - nilai4 - nilai5 - nilai6 - nilai7;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='7') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				
				nilai = nilai1 - nilai2 - nilai3 - nilai4 - nilai5 - nilai6 - nilai7 - nilai8;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='8') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				
				nilai = nilai1 - nilai2 - nilai3 - nilai4 - nilai5 - nilai6 - nilai7 - nilai8 - nilai9;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='9') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				
				nilai = nilai1 - nilai2 - nilai3 - nilai4 - nilai5 - nilai6 - nilai7 - nilai8 - nilai9 - nilai10;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='X') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				cout<<" Nilai 11 : ";
				
				nilai = nilai1 - nilai2 - nilai3 - nilai4 - nilai5 - nilai6 - nilai7 - nilai8 - nilai9 - nilai10 - nilai11;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
		
				}else {
					cout<<" Input yang anda masukkan salah!!!";
				}
			}
			
		if(pilihan==3)
		{
			cout<<" Untuk opsi menggunakan huruf adalah angka Romawi\n";
		cout<<" 1. Perkalian 2 nilai\t 6. Perkalian 7 nilai\n";
		cout<<" 2. Perkalian 3 nilai\t 7. Perkalian 8 nilai\n";
		cout<<" 3. Perkalian 4 nilai\t 8. Perkalian 9 \n";
		cout<<" 4. Perkalian 5 nilai\t 9. Perkalian 10 nilai\n";
		cout<<" 5. Perkalian 6 nilai\t X. Perkalian 11 nilai\n";
		cout<<" Pilih opsi 1-X : ";
		cin>>pilihan2;
		
			if(pilihan2=='1') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 * nilai2;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 * nilai2 * nilai3;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 * nilai2 * nilai3 * nilai4;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='4') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				
				nilai = nilai1 * nilai2 * nilai3 * nilai4 * nilai5;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='5') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				
				nilai = nilai1 * nilai2 * nilai3 * nilai4 * nilai5 * nilai6;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='6') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				
				nilai = nilai1 * nilai2 * nilai3 * nilai4 * nilai5 * nilai6 * nilai7;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='7') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				
				nilai = nilai1 * nilai2 * nilai3 * nilai4 * nilai5 * nilai6 * nilai7 * nilai8;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='8') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				
				nilai = nilai1 * nilai2 * nilai3 * nilai4 * nilai5 * nilai6 * nilai7 * nilai8 * nilai9;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='9') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				
				nilai = nilai1 * nilai2 * nilai3 *  nilai4 * nilai5 * nilai6 * nilai7 * nilai8 * nilai9 * nilai10;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='X') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				cout<<" Nilai 11 : ";
				
				nilai = nilai1 * nilai2 * nilai3 * nilai4 * nilai5 * nilai6 * nilai7 * nilai8 * nilai9 * nilai10 * nilai11;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else {
						cout<<" Input yang anda masukkan salah";
					}
		}else if(pilihan==4)
		{
				cout<<" Untuk opsi menggunakan huruf adalah angka Romawi\n";
		cout<<" 1. Pembagian 2 nilai\t 6. Pembagian 7 nilai\n";
		cout<<" 2. Pembagian 3 nilai\t 7. Pembagian 8 nilai\n";
		cout<<" 3. Pembagian 4 nilai\t 8. Pembagian 9 \n";
		cout<<" 4. Pembagian 5 nilai\t 9. Pembagian 10 nilai\n";
		cout<<" 5. Pembagian 6 nilai\t X. Pembagian 11 nilai\n";
		cout<<" Pilih opsi 1-X : ";
		cin>>pilihan2;
		
			if(pilihan2=='1') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
		
				nilai = nilai1 / nilai2;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
			}else if(pilihan2=='2') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
		
				nilai = nilai1 / nilai2 / nilai3;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
		
			}else if(pilihan2=='3') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
		
				nilai = nilai1 / nilai2 / nilai3 / nilai4;
				cout<<" Hasil dari perkalian adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='4') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				
				nilai = nilai1 / nilai2 / nilai3 / nilai4 / nilai5;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='5') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				
				nilai = nilai1 / nilai2 / nilai3 / nilai4 / nilai5 / nilai6;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='6') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				
				nilai = nilai1 / nilai2 / nilai3 / nilai4 / nilai5 / nilai6 / nilai7;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='7') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				
				nilai = nilai1 / nilai2 / nilai3 / nilai4 / nilai5 / nilai6 / nilai7 / nilai8;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='8') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				
				nilai = nilai1 / nilai2 / nilai3 / nilai4 / nilai5 / nilai6 / nilai7 / nilai8 / nilai9;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='9') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				
				nilai = nilai1 / nilai2 / nilai3 / nilai4 / nilai5 / nilai6 / nilai7 / nilai8 / nilai9 / nilai10;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
				
			}else if(pilihan2=='X') {
				cout<<" Nilai 1 : ";
				cin>>nilai1;
				cout<<" Nilai 2 : ";
				cin>>nilai2;
				cout<<" Nilai 3 : ";
				cin>>nilai3;
				cout<<" Nilai 4 : ";
				cin>>nilai4;
				cout<<" Nilai 5 : ";
				cin>>nilai5;
				cout<<" Nilai 6 : ";
				cin>>nilai6;
				cout<<" Nilai 7 : ";
				cin>>nilai7;
				cout<<" Nilai 8 : ";
				cin>>nilai8;
				cout<<" Nilai 9 : ";
				cin>>nilai9;
				cout<<" Nilai 10 : ";
				cin>>nilai10;
				cout<<" Nilai 11 : ";
				
				nilai = nilai1 / nilai2 / nilai3 / nilai4 / nilai5 / nilai6 / nilai7 / nilai8 / nilai9 / nilai10 / nilai11;
				cout<<" Hasil dari penjumlahan adalah : "<<nilai<<"\n";
			
			}else {
					cout<<"\n Input yang anda masukkan salah!!!";
				}
			}
		cout<<" Kembali ke opsi awal [Y/N]? ";
		cin>>loop;
		}while(loop=='Y' | loop=='y');
		cout<<"\n\t\t PROGRAM DIAKHIRI";
		
		return 0;
}