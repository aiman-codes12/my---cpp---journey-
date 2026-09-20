#include<iostream>
using namespace std;
int main()
{
	cout <<"\n \t MY SIMPLE MINI CALCULATOR: ";
	cout <<"\n \t ==================== ";
	
	float a, b;
	char op;
	
	cout <<"\n \t Enter the value of a: ";
	cin >> a;
	cout <<"\n \t Enter the value of b: ";
	cin >> b; 
	cout <<"\n \t Choose operation (+, -, *, /,) : ";
	cin >> op;
	
	if(op == '+' ) {
		cout <<"\n \t The result is = " << a + b;
	} else if(op == '-') { 
	    cout <<"\n \t The result is = " << a - b;
	} else if(op == '*') {
		cout <<"\n \t The result is = " << a * b;
	} else if (op == '/') {
		cout <<"\n \t The result is = " << a / b;
	} 
	    return 0;
}
	
	