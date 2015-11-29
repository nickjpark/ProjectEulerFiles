 
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/




int main() 
{ 
	long long num1=600851475143; //long long is needed because of the number of digits
	long long num2=num1;
	long long num3=1;
	while (num2>num3)
	{
		long long ind=2;
			while(num2 % ind != 0)
			{
			ind++;	
			}
	cout << num2 << "=" << num2 / ind << "*"<< ind << endl;
	num3=ind;
	num2/=ind;
	}
	system("Pause");
	return 0;
}
