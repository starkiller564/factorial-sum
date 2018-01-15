#include<iostream>
using namespace std;
void main()
{
	double n, i, sum = 0, f = 1;
	cout << "Enter a natural number: ";
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		f *= i;
		sum += f;
		cout << i << "! = " << f << endl; //Optional
	}
	cout << "The sum of factorials is: " << sum << endl;
	system("pause");
}