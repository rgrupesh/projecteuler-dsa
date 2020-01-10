#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long int i, j, lpf, num = 600851475143, count = 1;

	for(i = 1; i < ceil(sqrt(num)); i++) if(num % i == 0)
	{
		for(j = 2, count = 0; j < i; j++) if(i % j == 0) count++;
		if(count == 0) lpf = j;
	}

	cout << "The largest prime factor is " << lpf;
	
	return 0;
}