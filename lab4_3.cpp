#include<iostream>
using namespace std;

double findDivisor(int a)
{
    int b = 2 ;
    while( a%b != 0)
    {
        b++;
    }
    return b;
    
}

int main()
{
    int a;
    cout << "Enter a = ";
    cin >> a;

    cout << "Expect Output = " << findDivisor(a);
    return 0;
}
