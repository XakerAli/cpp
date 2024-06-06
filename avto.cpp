#include<iostream>
using namespace std;
int main()
{
	string b,v[1000];
	int c=0,l=0,g;
	cin>>b;
	if(b[0]=='0' and b[1]>='1' and b[1]<='9')
	{
		cout<<"Toshkent shahri";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<b<<'='<<v[0]<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7] ;
				return 0;
			}
	}
	else if(b[0]=='1' and b[1]>='0' and b[1]<='9')
	{
		cout<<"Toshkent viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<b<<'='<<v[0]<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7] ;
				return 0;
			}
	}
	else if(b[0]=='2' and b[1]>='0' and b[1]<='5')
	{
		cout<<"Sirdaryo viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7] ;
				return 0;
			}
	}
	else if(b[0]=='2' and b[1]>='5' and b[1]<='9')
	{
		cout<<"Jizzax viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='4' and b[1]>='0' and b[1]<='9')
	{
		cout<<"Farg'ona viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='5' and b[1]>='0' and b[1]<='9')
	{
		cout<<"Namangan viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='6' and b[1]>='0' and b[1]<='9')
	{
		cout<<"Andijon viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='7' and b[1]>='0' and b[1]<='4')
	{
		cout<<"Qashqadaryo viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='7' and b[1]>='5' and b[1]<='9')
	{
		cout<<"Surxondaryo viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='8' and b[1]>='0' and b[1]<='4')
	{
		cout<<"Buxoro viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='9' and b[1]>='0' and b[1]<='4')
	{
		cout<<"Xorazm viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='8' and b[1]>='5' and b[1]<='9')
	{
		cout<<"Navoiy viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='9' and b[1]>='5' and b[1]<='9')
	{
		cout<<"Qoraqalpog'iston'";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<v[0]<<b<<'='<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else if(b[0]=='3' and b[1]>='0' and b[1]<='9')
	{
		cout<<"Samarqand viloyati";
		if(b[3]>='0' and b[3]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[3];
		}
		if(b[4]>='0' and b[4]<='9')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[4];
		}
		if(b[5]>='0' and b[5]<='9')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[5];
		}
		if(b[6]>='a' and b[6]<='z')
		{
			c=c;
		}
		else
		{
			l++;
			v[l]=b[6];
		}
		if(b[7]>='A' and b[7]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[7];
		}
		if(b[8]>='A' and b[8]<='Z')
		{
			c=0;
		}
		else
		{
			l++;
			v[l]=b[8];
		}
			if(b[2]>='A' and b[2]<='Z'and b[3]>='0' and b[3]<='9' and b[4]>='0' and b[4]<='9' and b[5]>='0' and b[5]<='9' and b[6]>='A' and b[6]<='Z' and b[7]>='A' and b[7]<='Z')
			{
				cout<<" To'g'ri raqam ";
			}
			else
			{
				cout<<" Noto'g'ri raqam iltimos tekshirib qaytadan kriting\n";
				cout<<"Kritilgan raqam : "<<b;
				cout<<"\nXatolar : "<<"= "<<v[0]<<v[1]<<' '<<v[2]<<' '<<v[3]<<' '<<v[4]<<' '<<v[5]<<' '<<v[6]<<' '<<v[7];
				return 0;
			}
	}
	else
	{
		cout<<"Xato raqam iltimos tekshirib qaytadan urining\nQuydagicha kriting 30A999AA\n";
	}
}
