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