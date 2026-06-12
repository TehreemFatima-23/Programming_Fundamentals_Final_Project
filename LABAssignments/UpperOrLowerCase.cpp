#include<iostream>
using namespace std;
int main()
{
	cout<<"Whether a character is uppercase or lowercaseL:"<<endl;
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	if(ch>='A'&&ch<='Z')
	{
		cout<<"Character is in uppercase"<<endl;
		}
		else if(ch>='a'&&ch<='z')
		{
			cout<<"Character is in lowercase"<<endl;		
	}
	else
	{
		cout<<"Invalid alphabet character"<<endl;
	}
	return 0;
}

