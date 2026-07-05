#include<iostream>
using namespace std;
void square (int side);

int main(){

	int side;
	cout<<"Enter side:";
	cin>>side;
	square (side);
}

void square (int side)
{
	int i,j;
	for(i=1;i<=side;i++){
		cout<<"*";
		for(j=2;j<=side;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}

}
