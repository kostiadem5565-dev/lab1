#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1000;
    float b_float = 0.0001;
    double b_double = 0.0001;
    cout << (pow((a+b_float), 3) - pow(a, 3))/(3*a*pow(b_float, 2) + pow(b_float, 3) + 3 * pow(a,2) * b_float) << endl;
    cout << (pow((a+b_double), 3) - pow(a, 3))/(3*a*pow(b_double, 2) + pow(b_double, 3) + 3 * pow(a,2) * b_double);
    return 0;
}