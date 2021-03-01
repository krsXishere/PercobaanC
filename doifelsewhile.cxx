#include <iostream>
using namespace std;
int main()
{
	char loop, mabar;
	
	do {
	cout<<" Mau mabar ga? \n";
	cout<<" A. Gas\n";
	cout<<" B. Tar aja bg males\n";
	cout<<" Jawab : ";
	cin>>mabar;
	
	if(mabar='A') {
		cout<<" Yauda ayo gas !!! LOGIN!!!";
	} else if(mabar='B') {
		cout<<" Mau kapan mabarnya? nanti aja ya? okoklh";
	} else {
		cout<<" Lo gajelas mau mabar apa kagak? ";
	}
	cout<<"\n Bener jawabannya? kalo tadi jawab A skrg jgn jawab Y/y yh ?";
	cout<<"\n Jawab : ";
	cin>>loop;
	} while(loop=='Y' | loop=='y');
	
	return 0;
}