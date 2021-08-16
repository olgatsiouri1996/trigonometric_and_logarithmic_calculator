// g++
#include <iostream>
#include <cmath>
using namespace std;
// main
int main() {
	int x;
	cout << "Type a number between 1 and 5 to select one of the following functions: sin(), cos(), tan(), exp() and log(): ";
	cin >> x;
  	switch (x) {
		case 1:
			double a;
			cout << "Type a number(float):";
			cin >> a;
			cout << "the sine of the input number is:" << sin(a);
			cout << "\n";
			break;
		case 2:
			double b;
			cout << "Type a number(float):";
			cin >> b;
			cout << "the cosine of the input number is:" << cos(b);
			cout << "\n";
			break;
		case 3:
			double c;
			cout << "Type a number(float):";
			cin >> c;
			cout << "the tangent of the input number is:" << tan(c);
			cout << "\n";
			break;
		case 4:
			double d;
			cout << "Type a number(float):";
			cin >> d;
			cout << "the Euler constant to the power of the input number is:" << exp(d);
			cout << "\n";
			break;
		case 5:
			double f;
			cout << "Type a number(float):";
			cin >> f;
			cout << "the logarithic value of the input number is:" << log(f);
			cout << "\n";
  			break;	
	} 
	return 0;
}