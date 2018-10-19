#include <iostream>
#include <conio.h>
#include "MyMath.h"

using namespace std;

int main() 
{
	cout << "New commit" << endl;
	cout << MyMath::Operations::sum(10, 2) << endl;
	cout << MyMath::Operations::sub(10, 2) << endl;
	cout << MyMath::Operations::mult(10, 2) << endl;
	cout << MyMath::Operations::div(10, 2) << endl;

	_getch();
	return 0;
}
