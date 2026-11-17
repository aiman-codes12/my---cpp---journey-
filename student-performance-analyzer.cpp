#include<iostream>
using namespace std;
//function 1
void showline() {
cout <<"\n \t ===============୨୧=============== ";
}

//function 2
void showsysname() {
cout <<"\n \t STUDENT - PERFORMANCE ANALYZER: \t\t\t "; }


//function 4
void aboutsys() {
cout <<"\n\n \t NOTE: This system is designed to analyze students' academic performance "; }

//function 5
void inputmarks(int &maths, int &english, int &physics, int &chemistry, int &computer) {
cout <<"\n\n \t Enter Maths marks : ";
cin >> maths;
cout <<"\n \t Enter English marks : ";
cin >> english;
cout <<"\n \t Enter Physics marks : ";
cin >> physics;
cout <<"\n \t Enter Chemistry marks : ";
cin >> chemistry;
cout <<"\n \t Enter Computer marks : ";
cin >> computer; }

//function 6
int calculateTotal(int maths, int english, int physics, int chemistry, int computer) {
return maths + english + physics + chemistry + computer;
}

//function 7
float average(int maths, int english, int physics, int chemistry, int computer) {
return (maths + english + physics + chemistry + computer)/5.0; }

//function 8
int percentage(int maths, int english, int physics, int chemistry, int computer) {
return (maths + english + physics + chemistry + computer)*100/500;
}

//function 9
void showgrade(int percentage) {
if(percentage >= 51 && percentage <= 60) {
cout <<"\n \t The grade is C " <<"\n \t NEED IMPROVEMENT ";
} else if(percentage >= 61 && percentage <= 70) {
cout <<"\n \t The grade is B " <<"\n \t GOOD ⋆ ";
} else if(percentage >= 71 && percentage <= 80) {
cout <<"\n \t The grade is A " <<"\n \t EXCELENT ⋆⋆ ";
} else if(percentage >= 81 && percentage <= 100) {
cout <<"\n \t The grade is A-1 " <<"\n \t STUPENDOUS ⋆⋆⋆ ";
} else{ cout <<"\n \t Your are failed " <<"\n \t STUDY HARD "; }
}

int main()  
{
int maths, english, physics, chemistry, computer;  
showline();  
showsysname();  
showline();  
aboutsys();  
inputmarks(maths, english, physics, chemistry, computer);  
cout <<"\n\n \t The total is : " << calculateTotal(maths, english, physics, chemistry, computer);  
cout <<"\n \t The average is : " << average(maths, english, physics, chemistry, computer);  
cout <<"\n \t The percentage is : " << percentage(maths, english, physics, chemistry, computer);  
showgrade(percentage(maths, english, physics, chemistry, computer));  
showline();

return 0;
}