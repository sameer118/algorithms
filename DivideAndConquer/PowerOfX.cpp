#include <iostream>
using namespace std;
int power (int a , int n )
{
	if (n==0)
		return 1;
	if (n%2==0)
		return power(a,n/2) * power(a,n/2);
	return a * power(a,(n-1)/2) * power(a,(n-1)/2);
}

int main ()
{
	cout << power (2,9) << endl;
	return 0;
}