#include <iostream>

using namespace std;

int main()
{
	int ortu, anak;
	char l;
	do{
	cout<<" CONTOH IF \n\n";
	cout<<" Masukkan orang tua : ";
	cin>>ortu;
	
	if (ortu == 1) {
		cout<<" Ortu "<<ortu<<"\n";
		cout<<" Masukkan anak : ";
		cin>>anak;
		
		if (anak == 1) {
			cout<<" Anak laki-laki\n";
		} else {
			cout<<" Anak perempuan\n";
		}
		
	} else if (ortu == 2) {
		cout<<" Ortu "<<ortu<<"\n";
	} else { 
		cout<<" Ortu lainnya"<<ortu<<"\n";
	}
	cout<<" Press Y to back ";
	cin>>l;
	} while (l=='Y' | l=='y');
	
return 0;
}