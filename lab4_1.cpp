#include <iostream>
#include <cmath>
using namespace std;

double calculate(int x) 
{
    double e = 2.71828;
    double y = ((3*pow(x,3)) + (2*e) + (pow(2,(2*x+1))) +sqrt(x*x + 1.0));
    return y; 
}

int main()
{
    int x;
    cout << "Enter x = " ;
    cin >> x;
    cout << " Result y = " << calculate(x) << "\n";
    return 0;
}

