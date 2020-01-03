#include<iostream>

using namespace std;

double findDistance(double u,double a,double t)
{
  double s = (u*t) + (0.5*a*t*t);
  return s;
}

int main(){

  double s,u,a,t;
  cout << "Enter u = ";
  cin >> u;

  cout << "Enter a = ";
  cin >> a;

  cout << "Enter t = ";
  cin >> t;

  cout << "Distance = " << findDistance(u,a,t);


  return 0;
}
