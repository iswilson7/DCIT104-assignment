#include <iostream>

int primeFunc()
{	
	//initializing sum and first term 
	int sum = 0;  
	int firstTerm = 2;
	

	for (int i = firstTerm; i <= 100; i++) //starting from first term and going through to 100
	{	

		int factors = 0; //initializing number fo factors for each i to 0

		for ( int j = i; j >= 1; j--) //starting from i and dividing each i by numbers from i to 1. The divisors is assigned to j. 
		{ 
			if(i % j == 0)
			factors += 1; //if any number below i goes into i without a remainder, then the number is a factor of i. We start counting the factors for each i here.
		}


		if(factors == 2) //if an i has a maximum factors fo 2, then it's prime.
		{	
			std::cout << i << ", ";
			
			sum += i; //We print the i and add it to the sum
		}
		
	}	
 

return sum;
}

int integerFunc()
{
	int sum = 0;
	int term1 = 1;

	for( int i =term1; i < 100; i++)
	{
		if( i % 3 == 0 || i % 5 == 0)
		{
		std::cout << i <<", ";
		sum += i;
		}
	}

	return sum;
}


int main()
{	
	//Question 1 - prime sum
	std::cout << "Prime numbers from 2 to 100 are\n";//{ ";

	int primeSum = primeFunc();
	//std::cout << " }";

	std::cout << "\n\n";
	std::cout << "Sum of prime numbers from 2 to 100 is " << primeSum << std::endl;

	//Question 2 - Integer sum
	std::cout << "\n\nIntegers between 0 and 100 that are either divisible by 3 or 5 are\n";

	int integerSum = integerFunc();
	std::cout << "\n\nSum of Integers between 0 and 100 that are either divisible by 3 or 5 is "<< integerSum << std::endl;


	return 0;
}

