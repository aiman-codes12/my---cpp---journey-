#include<iostream>
using namespace std;
int main()
{
	cout <<"\n \t CALCULATE MATHEMATICAL EXPRESSIONS: ";
	cout <<"\n \t _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_- ";
	cout <<"\n \t Available Mathematical Expressions: ";
	cout <<"\n \t 1. (a + b)^2 = a^2 + 2ab + b^2 ";
	cout <<"\n \t 2. a^2 - b^2 = (a + b)(a - b) ";     cout <<"\n \t 3. a^3 + b^3 = (a + b)(a^2 - ab + b^2 ";
	
	int a, b, ex, result;
	cout <<"\n \t Enter value of a: ";
	cin >> a;
	cout <<"\n \t Enter value of b: ";
	cin >> b;
	cout <<"\n \t Choose expression (1 to 3): ";
	cin >> ex;
	
	if(ex == 1) { result = a*a + 2*a*b + b*b;
	cout <<"\n \t The solution of this expression is: " << result; 
	} else if(ex == 2) { result = (a + b)*(a - b);
	cout <<"\n \t The solution of this expression is: " << result;
	} else if(ex == 3) { result = (a + b)*(a*a - a*b + b*b);
	cout <<"\n \t The solution of this expression is: "<< result;
	}
	
	cout <<"\n \t ======END====== ";
	return 0;
}