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
	Fraction operator+(Fraction& b)
	{
		Fraction temp;
		if (this->denominator == b.denominator)
		{
			temp.numerator = this->numerator + b.numerator;
			temp.denominator = this->denominator;
		}
		else
		{
			temp.numerator = (this->numerator * b.denominator) + (b.numerator * this->denominator);
			temp.denominator = this->denominator * b.denominator;
		}
		return temp;
	}
	Fraction operator+(int b)
	{
		Fraction temp;
		temp.numerator = numerator + (b * denominator);
		temp.denominator = denominator;
		return temp;
	}
	Fraction operator-(Fraction& b)
	{
		Fraction temp;
		if (this->denominator == b.denominator)
		{
			temp.numerator = this->numerator - b.numerator;
			temp.denominator = this->denominator;
		}
		else
		{
			temp.numerator = (this->numerator * b.denominator) - (b.numerator * this->denominator);
			temp.denominator = this->denominator * b.denominator;
		}
		return temp;
	}
	Fraction operator-(int b)
	{
		Fraction temp;
		temp.numerator = numerator - (b * denominator);
		temp.denominator = denominator;
		return temp;
	}
	Fraction operator*(Fraction& b)
	{
		Fraction temp(numerator * b.numerator, denominator * b.denominator);
		return temp;
	}
	Fraction operator*(int b)
	{
		Fraction temp(numerator * b, denominator);
		return temp;
	}
	Fraction operator/(Fraction& b)
	{
		Fraction temp(numerator * b.denominator, denominator * b.numerator);
		return temp;
	}
	Fraction operator/(int b)
	{
		Fraction temp(numerator, denominator * b);
		return temp;
	}
	Fraction& operator++()
	{
		numerator += denominator;
		return *this;
	}
	Fraction operator++(int)
	{
		Fraction temp(*this);
		numerator += denominator;
		return temp;
	}
	Fraction& operator--()
	{
		numerator -= denominator;
		return *this;
	}
	Fraction operator--(int)
	{
		Fraction temp(*this);
		numerator -= denominator;
		return temp;
	}
};

int main() {
	Fraction a(10, 10);
	a.Print();
	++a;
	a.Print();
	Fraction b = a - 5;
	b.Print();
	Fraction c = --a;
	c.Print();
	a.Print();
	Fraction d = a++;
	d.Print();
	a.Print();
	Fraction e = a * c;
	e.Print();
	Fraction g(5, 10);
	Fraction h(3, 2);
	Fraction f = g / h;
	f.Print();
}