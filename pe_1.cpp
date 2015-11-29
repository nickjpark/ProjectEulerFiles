 
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/


int main() 
{ 
    int sum = 0; // sum creates a running sum of all the multiples
    int i=0;
    while(i < 1000)
    {
		if(i % 3==0 || i % 5==0) // this tests if each number is a multiple of 3 or 5
		{
			sum+=i;
		}
		i++;
    	
	}
	cout <<"Sum of values: "<< sum << endl;
	system("PAUSE");
	return 0;
}
