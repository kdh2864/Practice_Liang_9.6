#include <iostream>
#include <iomanip> // For using setprecision()
#include "QuadraticEquation.h"
using namespace std;

int main()
{
	cout << "Enter the a, b, c of double, for example 1, 1, -2: ";
	double a, b, c;
	cin >> a >> b >> c;

	Quadraticequation quadraticEquation(a, b, c);

	cout << fixed << setprecision(3);
	cout << "You entered a, b, c is: " << quadraticEquation.getA() << ", "
		<< quadraticEquation.getB() << ", " << quadraticEquation.getC() << endl;
	cout << "The discriminant is "
		<< quadraticEquation.getDiscriminant() << endl;
	if (quadraticEquation.getDiscriminant() >= 0) {
		cout << "And two roots are " << quadraticEquation.getRoot1()
			<< " and " << quadraticEquation.getRoot2() << endl;
	}
	else {
		cout << "The equation has no real roots" << endl;
	}
	return 0;
}