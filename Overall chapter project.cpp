
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


	system("pause>0");



}


