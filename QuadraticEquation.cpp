#include "QuadraticEquation.h"
#include <cmath>
using namespace std;

Quadraticequation::Quadraticequation()
{
	a = 1;
	b = -2;
	c = 3;
}

Quadraticequation::Quadraticequation(double newA, double newB, double newC)
{
	a = newA;
	b = newB;
	c = newC;
}

double Quadraticequation::getA()
{
	return a;
}

double Quadraticequation::getB()
{
	return b;
}

double Quadraticequation::getC()
{
	return c;
}

double Quadraticequation::getDiscriminant()
{
	return pow(b, 2) - (4 * a * c);
}

double Quadraticequation::getRoot1()
{
	if (getDiscriminant() < 0)
		return 0;
	else
		return ((sqrt(pow(b, 2) - 4 * a * c) - b) / 2 * a);
}

double Quadraticequation::getRoot2()
{
	if (getDiscriminant() < 0)
		return 0;
	else
		return ((-sqrt(pow(b, 2) - 4 * a * c) - b) / 2 * a);
}