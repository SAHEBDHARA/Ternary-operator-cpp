
#include <iostream>

using namespace std;

int main()
{
   



	int waight, height, bmi;
	cout << "enter waight and height" << endl;
	cin >> waight >> height;
	bmi = waight / (height * height);
	cout << bmi << endl;
	if (bmi > 18.0)
		cout << "overwaight" << endl;
	else if(bmi < 18.0)
		cout << "underwaight" << endl;
	else 
		cout << "normal" << endl;

	system("cls");

	// making different game 

	int HostNumber, GuessNumber;
	cout << "Host: ";
	cin >> HostNumber;
	system("cls");
	cout << "Guess";
	cin >> GuessNumber;


	//if (HostNumber == GuessNumber)
	//	cout << "currect!";
	//else
	//	cout << "failed!";

	//Ternary operator
	(HostNumber == GuessNumber)? cout << "currect!": cout << "failed!";





	system("pause>0");



}


