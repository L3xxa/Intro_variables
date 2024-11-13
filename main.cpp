#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double S, v, t, a;
	cout << "Enter the speed: ";
	cin >> v;
	cout << "Enter the time: ";
	cin >> t;
	cout << "Enter the asceleration: ";
	cin >> a;
	S = v * t + (a * t * t) / 2;
	cout << "The distance is: " << S << endl;

	return 0;

}