#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int az;
	cin>>az;
	switch(az)
	{
		case "salom":cout<<"Salom"<<sleep(2)<<"Qandaysan";
		case "Assalomu alaykum":cout<<"Va alaykum assalom"<<sleep(2)<<"Qandaysan";
		case "Savolim bor edi":cout<<"Nima savol"<<sleep(2)<<"Aytishing mumkin";
		
	}
}
