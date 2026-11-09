#include<iostream>
using namespace std;
int main()
{
	cout <<"\n \t ~~~~~~~~~~~~~ ";
	cout <<"\n \t FORMULAS SOLVER: ";
	cout <<"\n \t ~~~~~~~~~~~~~ ";
	cout <<"\n \t ABOUT THIS FUNCTION: ";     cout <<"\n \t This function contains numerous formulas ";
	cout <<"\n and able  to solve that step by step also displays answer. ";
	
	cout <<"\n \t ================= ";
	cout <<"\n \t Available Formulas: ";
	cout <<"\n \t 1. s = d/t ";
	cout <<"\n \t 2. F = ma ";
	cout <<"\n \t 3. a = (vf - vi)/t ";
	cout <<"\n \t 4. a = (1/2)bh ";
	cout <<"\n \t 5. F = (c*1.8)+32 ";
	cout <<"\n \t 6. a = lb ";
	cout <<"\n \t 7. a = π*r^2 ";
	cout <<"\n \t 8. c^2 = a^2 + b^2 ";
	
	int formula;
	cout <<"\n \t Choose formula as given above: ";
	cin >> formula;
	cout <<"\n \t START: ";
	
	switch(formula)
	{
	
    	case 1:
		float d, t, s;
		cout <<"\n \t • s = d/t ";
		cout <<"\n \t Enter value of d: ";
		cin >> d;
		cout <<"\n \t Enter value of t: ";
		cin >> t;
		s = d/t;
		cout <<"\n \t The speed is: " << s <<"m/s";
		break; 
		
    	case 2:
		float m, a, f;
		cout <<"\n \t • F = ma ";
		cout <<"\n \t Enter value of m: ";
		cin >> m;
		cout <<"Enter value of a: ";
		cin >> a;
		f = m*a;
		cout <<"\n \t The force is: " << f <<"N ";
		break; 
		
    	case 3:
		float vf, vi;
		cout <<"\n \t • a = (vf - vi)/t ";
		cout <<"\n \t Enter value of vf: ";
		cin >> vf;
		cout <<"\n \t Enter value of vi: ";
		cin >> vi;
		cout <<"\n \t Enter value of t: ";
		cin >> t;
		a = (vf - vi)/t;
		cout <<"\n \t The acceleration is: " << a <<"ms^-2 ";
		break; 
		
    	case 4:
		int  b, h;
		cout <<"\n \t • a = (1/2) bh ";
		cout <<"\n \t Enter value of b: ";
		cin >> b;
		cout <<"\n \t Enter value of h: ";
		cin >> h;
		a = (1/2)*b*h;
		cout <<"\n \t The area of triangle is: " << a <<"m^2 ";
		break; 
		
    	case 5:
		float c;
		cout <<"\n \t • F = (c*1.8)+32 ";
		cout <<"\n \t Enter value of c: ";
		cin >> c;
		f = (c*1.8) + 32;
		cout <<"\n \t the conversion of Celsius to fahrenheit is: " << f <<"°F ";
		break; 
		
    	case 6:
		float l;
		cout <<"\n \t • a = lb ";
		cout <<"\n \t Enter the value of l: ";
		cin >> l;
		cout <<"\n \t Enter value of b: ";
		cin >> b;
		a = l*b;
		cout <<"\n \t The area of rectangle is: " << a <<"m^2 ";
		break; 
		
		{case 7:
		cout <<"\n \t • a = π*r^2 ";
		float r;
		float pi = 3.14;
    	cout <<"\n \t Enter value of r: ";
		cin >> r;
		a = pi*r*r;
		cout <<"\n \t The area of circle is: " << a <<"m^2 ";
		break; }
		
       case 8:
        
	   cout <<"\n \t • c^2 = a^2 + b^2 ";
	   cout <<"\n \t Enter value of a: ";
	   cin >> a;
	   cout <<"\n \t Enter value of b: ";
	   cin >> b;
	   c = a*a + b*b;
	   cout <<"\n \t the pythagoras theorem is: " << c;
	   break; 
	 
     default: 
	   cout <<"INVALID NUMBER ";
	   break;
	}	
	cout <<"\n \t ~~~~~END~~~~~ ";
				
	return 0;
}