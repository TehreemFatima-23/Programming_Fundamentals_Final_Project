#include<iostream>
using namespace std;
char grade(int marks)
{
	if(marks>=0 && marks<=49)
	return 'F';
	else if(marks>=50 && marks<=60)
	return 'E';
	else if(marks>=61 && marks<=70)
	return 'D';
	else if(marks>=71 && marks<=80)
	return 'C';
	else if(marks>=81 && marks<=90)
	return 'B';
	else
	return 'A';
	
}
int main()
{
	int marks;
	cout<<"Enter marks (0-100):";
	cin>>marks;
	cout<<"Grade:"<<grade(marks);
	return 0;
}
