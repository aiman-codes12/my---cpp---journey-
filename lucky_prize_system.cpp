#include<iostream>
using namespace std;
int main()
{
	cout <<"\n \t ================== ";
	cout <<"\n \t LUCKY PRIZE SYSTEM ";
	cout <<"\n \t ================== ";
	
	cout <<"\n \t Are you excited to win a prize - so let's start... ";
	int num;
	cout <<"\n \t Enter number (1 to 10) and win a prize: ";
	cin >> num;
	
	switch(num)
	{
		case 1:
		cout <<"\n \t Congratulations! You won a free iPHONE! ";
		break;
		
		case 2:
		cout <<"\n \t Congratulations! You won  $10! ";
		break;
		
		case 3:
		cout <<"\n \t Congratulations! You won a free CONCERT TICKETS! ";
		break;
		
		case 4:
		cout <<"\n \t Congratulations! You won a free BMW! ";
		break;
		
		case 5:
		cout <<"\n \t Congratulations! You won a VISA to live in your dream country! ";
		break;
		
		case 6:
		cout <<"\n \t SORRY! you won nothing! ";
		break;
		
		case 7:
		cout <<"\n \t Congratulations! You won a free LAPTOP! ";
		break;
		
		case 8:
		cout <<"\n \t Congratulations! You won a free WATCH! ";
		break;
		
		case 9: 
		cout <<"\n \t Congratulations! You won a free CHOCHOLATE BOX! ";
		break;
		
		case 10:
		cout <<"\n \t SORRY! You won nothing! ";
		break;
		
		default:
		cout <<"\n \t Invalid number _ please try again... ";
	}
		return 0;
}
	
	
	
	
	