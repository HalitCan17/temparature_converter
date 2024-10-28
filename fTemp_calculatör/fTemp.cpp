
//3. project  28.10.2024
// basic temparature converter


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int option;
	double cTemp, fTemp, kTemp;
	
	cout << "choose an one option" << endl;
	cout << " 1:  celcius ---> fahrenheit" << endl;
	cout << " 2:  fahrenheit ---> celcius" << endl;
	cout << " 3:  celcius ---> kelvin" << endl;

	cin >> option;

	
	if (option==1)
	{
		
		cout << "Enter a temparature in Celcius: ";
		cin >> cTemp;

		fTemp = cTemp * 1.8 + 32;

		cout << fTemp << " Fahreinheit" << endl;
	}
	else if (option == 2) 
	{
		cout << " Enter a temparature in Fahreinheit: ";
		cin >> fTemp;

		cTemp = (fTemp - 32) / 1.8;

		cout << cTemp <<  " Celcius" << endl;
    }
	else if (option ==3)
	{
		cout << " Enter a temparature in celcius: ";
		cin >> cTemp;

		kTemp = cTemp + 273;

		cout << kTemp << " Kelvin" << endl;
	}
	else 
	{
		cout << " Invalid option selected." << endl;
	}


	return 0;
}