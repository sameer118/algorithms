#include <iostream>
using namespace std;
int power (int a , int n )
{
	if (n==0)
		return 1;
	int temp = power(a,n/2);
	if (n%2==0)
		return temp * temp;
	return a * temp * temp;
}

int main ()
{
	cout << power (2,9) << endl;
	return 0;
}