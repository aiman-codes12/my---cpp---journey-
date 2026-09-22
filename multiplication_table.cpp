#include<iostream>
using namespace std;
int main()
{
	cout <<"\n \t MULTIPLICATION TABLE GENERATOR: ";
	
	int num;
	cout <<"\n \t Enter number: ";
	cin >> num;
	cout <<"\n \t The table of " << num <<": ";
	
	for(int i = 1; i <= 20; i++)
	cout <<"\n \t" << num << "× " << i << " = " << num*i;
	
	return 0;
}