#include <iostream>
#include <cmath>

using namespace std;

double t(const double x);

int main()
{
    double y;
    cout << "y = "; cin >> y;

    double c = (1 + 2 * t(1 + pow(y, 2)) -
        pow(t(2 * y), 2)) / (10 + sqrt(t(1 + abs(y))));

    cout << "c = " << c << endl;
    return 0;
}
double t(const double x)
{
    return (pow(x, 2) / 2 - pow(x, 4) / 24 - 1);
}