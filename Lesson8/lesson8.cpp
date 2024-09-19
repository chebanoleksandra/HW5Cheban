#include <iostream>
#include <random>
using namespace std;

class Fraction {
	int numerator;
	int denominator;
public:
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
};

int main() {
	Fraction a;
	a.Input(1, 2);
	a.Print();

	Fraction b;
	b.Input();
	b.Print();
}