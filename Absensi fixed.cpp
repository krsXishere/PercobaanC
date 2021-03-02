#include <iostream>
using namespace std;
int main ()
{
	int kelas, nama, absen;
	char loop;
	
	do {
    cout<<" Absensi\n\n";
    cout<<" 1. Kelas X-TKJ\n";
    cout<<" 2. Kelas X-RPL\n";
    cout<<" Masukkan kelas : ";
    cin>>kelas;
    
    if (kelas==1) {
    	cout<<" 1. Affandy\n";
        cout<<" 2. Thaura\n";
        cout<<" Masukkan nama : ";
        cin>>nama;
        if (nama==1) {
        	cout<<" 1. Hadir\n";
            cout<<" 2. Izin\n";
            cout<<" 3. Sakit\n";
            cout<<" 4. Alfa\n";
            cout<<" Masukkan absen : ";
            cin>>absen;
            if (absen==1) {
            	cout<<" Absen telah terkirim";
            }else if (absen==2) {
            	cout<<" Absen telah terkirim";
        	}else if (absen==3) {
            	cout<<" Absen telah terkirim";
            }else if (absen==4) {
            	cout<<" Absen telah terkirim";
            }else{
            	cout<<" Input anda salah!!!";
            }
        }else if (nama=='2') {
        	cout<<" 1. Hadir\n";
            cout<<" 2. Izin\n";
            cout<<" 3. Sakit\n";
            cout<<" 4. Alfa\n";
            cout<<" Masukkan absen : ";
            cin>>absen;
            if (absen==1) {
            	cout<<" Absen telah terkirim";
            }else if (absen==2) {
            	cout<<" Absen telah terkirim";
        	}else if (absen==3) {
            	cout<<" Absen telah terkirim";
            }else if (absen==4) {
            	cout<<" Absen telah terkirim";
            }else{
            	cout<<" Input anda salah!!!";
            }
        }else{
        	cout<<" Input anda salah!!!";
        }
    }else if (kelas==2) {
    	cout<<" 1. Chandra\n";
        cout<<" 2. Krisna\n";
        cout<<" Masukkan nama : ";
        cin>>nama;
        if (nama==1) {
        	cout<<" 1. Hadir\n";
            cout<<" 2. Izin\n";
            cout<<" 3. Sakit\n";
            cout<<" 4. Alfa\n";
            cout<<" Masukkan absen : ";
            cin>>absen;
            if (absen==1) {
            	cout<<" Absen telah terkirim";
            }else if (absen==2) {
            	cout<<" Absen telah terkirim";
        	}else if (absen==3) {
            	cout<<" Absen telah terkirim";
            }else if (absen==4) {
            	cout<<" Absen telah terkirim";
            }else{
            	cout<<" Input anda salah!!!";
            }
        }else if (nama==2) {
        	cout<<" 1. Hadir\n";
            cout<<" 2. Izin\n";
            cout<<" 3. Sakit\n";
            cout<<" 4. Alfa\n";
            cout<<" Masukkan absen : ";
            cin>>absen;
            if (absen==1) {
            	cout<<" Absen telah terkirim";
            }else if (absen==2) {
            	cout<<" Absen telah terkirim";
        	}else if (absen==3) {
            	cout<<" Absen telah terkirim";
            }else if (absen==4) {
            	cout<<" Absen telah terkirim";
            }else{
            	cout<<" Input anda salah!!!";
            }
        }else{
        	cout<<" Input anda salah!!!";
        }
    }else{
    	cout<<" Input anda salah!!!";
    }
    cout<<"\n Kembali ke opsi awal? [Y/y] : ";
    cin>>loop;
    }while (loop=='Y' | loop=='y');
}
