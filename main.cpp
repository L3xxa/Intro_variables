#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

int main() {
    double L, R, S;
    cout << "Enter the length of the circle: ";
    cin >> L;
    R = L / (2 * PI);
    S = PI * R * R;
    cout << "The radius of the circle is " << R << endl;
    cout << "The area of the circle is " << S << endl;

    return 0;
}
