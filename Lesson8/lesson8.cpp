#include <iostream>
#include <random>
using namespace std;

class Fraction {
	int numerator;
	int denominator;
public:
	Fraction() {
		numerator = 0;
		denominator = 1;
	}
	Fraction(int n, int d)
	{
		numerator = n;
		denominator = d;
	}
	void Input(int n, int d) {
		numerator = n;
		denominator = d;
	}
	void Print() {
		cout << numerator << "/" << denominator << endl;
	}
	void Input() {
		srand(time(0));
		numerator = rand() % 100;
		denominator = rand() % 100;
		while (denominator == 0)
		{
			denominator = rand() % 100;
		}
	}
	void SetN(int _numerator) 
	{
		numerator = _numerator;
	}
	void SetD(int _denominator)
	{
		denominator = _denominator;
	}
	int GetN() { 
		return numerator;
	}
	int GetD() {
		return denominator;
	}
};

int main() {
	/*Fraction a;
	a.Input(1, 2);
	a.Print();
	a.SetD(100);
	a.Print();
	int d = a.GetD();
	cout << d << endl;

	Fraction b;
	b.Input();
	b.Print();
	b.SetN(100);
	b.Print();
	int n = b.GetN();
	cout << n << endl;*/

	Fraction c;
	c.Print();

	Fraction d(1, 10);
	d.Print();
}