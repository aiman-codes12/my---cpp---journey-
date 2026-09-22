#include<iostream>
#include<string>
using namespace std;
int main ()
{
	cout <<"\n \t STUDENT GRADING SYSTEM:  ";
	
	string name;
	cout <<"\n \t Enter your name: ";
	cin >> name;
	
	int computer, english, physics, chemistry, pst, sindhi, maths;
	
	cout <<"\n \t Enter Computer marks: ";
	cin >> computer;
	cout <<"\n \t Enter English marks: ";
	cin >> english;
	cout <<"\n \t Enter physics marks: ";
	cin >> physics;
	cout <<"\n \t Enter chemistry marks: ";
	cin >> chemistry;
	cout <<"\n \t Enter pst marks: ";
	cin >> pst;
	cout <<"\n \t Enter sindhi marks ";
	cin >> sindhi;
	cout <<"\n \t Enter maths marks: ";
	cin >> maths;
	
	int total;
	total = computer + english +physics + chemistry + pst + sindhi + maths;
	cout <<"\n \t total marks = " << total;
	
	float percentage;
	percentage = (total / 175.0)* 100;
	cout <<"\n \t percentage = " << percentage <<"%";
	
	cout <<"\n \t Grade is = ";
	if(percentage >= 80) { cout <<" A+1"; }
	else if(percentage >= 70) { cout <<" A";}
	else if(percentage >= 60) { cout <<" B";}
	else if(percentage >= 50) { cout << " C";}
	else{ cout <<"fail";}
	
	return 0;
}