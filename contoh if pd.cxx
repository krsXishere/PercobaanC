#include <iostream>

using namespace std;

int main()
{
	int ortu, anak;
	char l;
	do {
	cout<<" CONTOH IF "<<endl <<endl;
	cout<<" Masukkan orang tua : ";
	cin>>ortu;
	
	if (ortu == 1) {
		cout<<" Ortu "<<ortu <<endl;
		cout<<" Masukkan anak : ";
		cin>>anak;
		
		if (anak == 1) {
			cout<<" Anak laki-laki"<<endl;
		} else {
			cout<<" Anak perempuan"<<endl;
		}
		
	} else if (ortu == 2) {
		cout<<" Ortu "<<ortu <<endl;
	} else { 
		cout<<" Ortu lainnya"<<ortu <<endl;
	}
	cout<<" Press Y to back ";
	cin>>l;
	} while (l=='Y' | l=='y');
return 0;
}