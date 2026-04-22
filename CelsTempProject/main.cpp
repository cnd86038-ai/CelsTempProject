#include <iostream>
#include <iomanip>
using namespace std;

//Named constants
const int MIN_FAHRENHEIT = 0;
const int MAX_FAHRENHEIT = 20;

/*
Purpose: Converts farhrenheit temp to celsius
Preconditions: fahrenheit is validated (>=0)
Postconditions: returns equivalent temp in celsius
*/

double getCelsius(double fahrenheit)
{
	return (5.0 / 9.0) * (fahrenheit - 32);
}

/*
Purpose: Displays the fahrenheit to celsius conversion table
Preconditions: fahrenheit is validated (>=0)
Postconditions: displays the conversion table
*/
void displayTable()
{
	cout << "Fahrenheit\tCelsius" << endl;
	cout << "-------------------------" << endl;

	cout << setw(15) << "Fahrenheit"
		<< setw(15) << "Celsius" << endl;


	//Loop to display the conversion table
	for (int fahrenheit = MIN_FAHRENHEIT; fahrenheit <= MAX_FAHRENHEIT; fahrenheit++)
	{
		double celsius = getCelsius(fahrenheit);
		cout << setw(15) << fahrenheit
			<< setw(15) << fixed << setprecision(1) << celsius << endl;
	}
}

int main()
{
	displayTable();

	return 0;
}