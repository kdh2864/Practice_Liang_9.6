#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

class Quadraticequation
{
public:
	Quadraticequation();
	Quadraticequation(double a, double b, double c);
	double getA();
	double getB();
	double getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();

private:
	// private data field
	double a;
	double b;
	double c;
};

#endif