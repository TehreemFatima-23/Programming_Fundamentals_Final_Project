#include <iostream>
using namespace std;
int main()
{
	int hours, minutes, seconds, totalSeconds;
	cout<<"Enter elapsed time:"<<endl;
	cout<<"Enter hours:"<<endl;
	cin>>hours;
	cout<<"Enter minutes"<<endl;
	cin>>minutes;
	cout<<"Enter seconds:"<<endl;
	cin>>seconds;
	totalSeconds = (hours*3600) + (minutes*60) + seconds;
	cout<<"Elapsed time in seconds:"<<totalSeconds<<endl;
	return 0;
}
