#include<iostream>
using namespace std;

int main()
{
	int i, a = 0, b = 1, c = 0, sum = 0;

	for(i = 0; c < 4000000; i++)
	{
		c = a + b;
		if(c % 2 == 0) 
			sum += c;
		a = b;
		b = c;
	}

	cout << "Sum is " << sum;
	return 0;
}