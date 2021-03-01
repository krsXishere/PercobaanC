#include <iostream>
using namespace std;
int main()
{
	string name, older;
	char loop;
	do {
		cout<<" Ur name? "; cin>>name;
		cout<<" How old are u? "; cin>>older;
		cout<<" I am "<<name<<"\n";
		cout<<" I am "<<older<<" years old";
		cout<<" Wanna repeat this program bruh? Y for yes!!! : "; cin>>loop;
	} while(loop=='y' | loop=='Y');
}