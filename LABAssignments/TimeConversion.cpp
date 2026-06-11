#include <iostream>
using namespace std;
int main ()
{
	int total_seconds, hours, minutes, seconds;
	cout<<"Enter the elapsed time in seconds:";
	cin>> total_seconds;
	hours = total_seconds / 3600;
	minutes = (total_seconds % 3600) / 60;
	seconds = total_seconds % 60;
	cout<<"Elapsed time:"<<hours<<":"<<minutes<<":"<<seconds<<endl;
	return 0;
}
