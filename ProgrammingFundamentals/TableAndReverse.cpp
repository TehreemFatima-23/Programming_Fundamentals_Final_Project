#include <iostream>
using namespace std;

void table(int n){
    
    for (int i=1; i<=10; i++)
    cout<<n<<" X "<<i<<" = "<<(n*i)<<endl;
}

void reverseTable(int n){
    
     for (int i=10; i>=1; i--)
    cout<<n<<" X "<<i<<" = "<<(n*i)<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of which the table you want: ";
    cin>>n;

    cout<<"Normal Table"<<endl;
    cout<<"------------"<<endl;
    table(n);

    cout<<endl;
    cout<<"Reverse of the table"<<endl;
    cout<<"--------------------"<<endl;
    reverseTable(n);

    return 0;
}