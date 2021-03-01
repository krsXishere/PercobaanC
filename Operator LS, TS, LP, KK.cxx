#include <iostream>

using namespace std;

int main()

{
	int pilihan, a, t, s, A, B, C, KS, LP;
	double L, KK;
	char pilihan2;
	
			cout<<"Selamat datang di Program C++\n";
			cout<<"Penghitung bangun datar Segitiga dan bangun ruang Kubus\n\n";
	
			cout<<"1. Segitiga\n";
			cout<<"2. Kubus\n";
			cout<<"Pilih Opsi 1 atau 2 : ";
			cin>>pilihan;
	
		if(pilihan==1) {
			cout<<"A. Luas Segitiga\n";
			cout<<"B. Keliling Segitiga\n";
			cout<<"Pilih Opsi A atau B : ";
			cin>>pilihan2;
		
		if(pilihan2=='A') {
			cout<<"==Luas Segitiga==\n";
			cout<<"Masukkan nilai alas : ";
			cin>>a;
			cout<<"Masukkan nilai tinggi :";
			cin>>t;
		
			L=2*(0.5*a*t);
			cout<<"Jadi, nilai alas Segitiga adalah "<<L;
		}else if(pilihan2=='B') {
			cout<<"Masukkan nilai sudut A : ";
			cin>>A;
			cout<<"Masukkan nilai sudut B : ";
			cin>>B;
			cout<<"Masukkan nilai sudut C ; ";
			cin>>C;
		
			KS=A+B+C;
			cout<<"Jadi, luas segitiga adalah "<<KS;
		}else {
			cout<<"Maaf input ada salah!!!";
		}
		}else if(pilihan==2) {
			cout<<"A. Keliling Kubus\n";
			cout<<"B. Luas Permukaan Kubus\n";
			cout<<"Pilih Opsi A atau B : ";
			cin>>pilihan2;
		
		if(pilihan2=='A') {
			cout<<"==KELILING KUBUS==\n";
			cout<<"Masukkan nilai sisi (s) : ";
			cin>>s;
		
			KK=12*s;
			cout<<"Jadi, nilai keliling kubus adalah "<<KK;
		}else if(pilihan2=='B') {
			cout<<"==LUAS PERMUKAAN KUBUS==\n";
			cout<<"Masukkan nilai sisi (s) : ";
			cin>>s;
			
			LP=6*s*s;
			cout<<"Jadi, nilai luas permukaan kubus adalah "<<LP;
		}else{
			cout<<"Maaf input yang anda masukkan salah";
		}
	}else{
			cout<<"Maaf input yang anda masukkan salah";
	}
}