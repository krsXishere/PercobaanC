#include <iostream>

using namespace std;
void wait ( double seconds )//fungsi timing
{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}

int main(int argc, char *argv[])
{
   
    for(int i=5;i>=0;i--){
            system("cls");//penghapus layar
            system("color 04");//warna banckground hitam text merah
            cout<<" lampu akan hijau dalam hitungan :"<<endl;
            cout<<"\t"<<i;wait(1);//pemberian waktu
            }
    system("cls");//penghapus layar
    for(int i=5;i>=0;i--){
            system("cls");//penghapus layar
            cout<<"silahkan jalan :D"<<endl;
            system("color 02");//warna backgroun hitam text hijau
            cout<<" lampu hijau akan habis :"<<endl;
            cout<<"\t"<<i;wait(1);//pemberian waktu
            }
    cout<<endl<<endl;
   
    system("PAUSE");
    return EXIT_SUCCESS;
}