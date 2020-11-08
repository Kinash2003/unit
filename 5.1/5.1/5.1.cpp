// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c); // прототип
int main()
{
	double s, t ;
	
	cout << "s = "; cin >> s;

	cout << "t = "; cin >> t;
	
	double h = (((f(t,s,2))+(f(1,s+t,t-s)))/(1+pow( f(1,1,pow(t,2)+pow(s,2)),2)));
	cout << "h = " << h << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return (a+b+c)/sin(a*b)*sin(a * b)+pow(c,2);
}