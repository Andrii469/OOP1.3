#include <iostream>
#include <iomanip>
#include "Money.h"

using namespace std;

int main()
{
	Money x, a, b;
	x.Read(a, b);
	x.Display(a, b);
	cout << " SUMMA = " << x.ToString(a, b) << endl;
	x.Subtraction(a, b);
	

	return 0;
}