#include <iostream>

using namespace std;




// Tail Recursive function for factorial :
int fact(int n,int k)
{
	if(n == 0 || n == 1)
	return k;
	
	fact(n-1,k*n);
}

//Fibonacci

int fib(int n)
{
	if(n == 0 || n == 1)
	return n;
	
	return fib(n-1)+fib(n-2);
}

// sum of n natural numbers

int sumofn(int n)
{
	if(n == 1)
	return 1;
	
	return sumofn(n-1)+n;
}

//palindromeofstrings

bool ispalindrome(string str,int i,int k)
{
	if(i>=k)
	return true;
	
	if(str[i] != str[k])
	return false;
	
	ispalindrome(str,i+1,k-1);
	
}

// Sum of digits:
int sumOfDigits(int n)
{
	if(n/10 == 0)
	return n;
	
	return n%10 + sumOfDigits(n/10);
}

// Josephus

int josephus (int n,int k)
{
	
	
		if(n == 1)
		{
			return 0;
		}
		
		int i =  josephus(n-1,k)+k;
	     
		return i%n;	
	
	
	
}

main()
{
    //	cout << fact(5,1);
    int n = 5,k=2;
    cout << josephus(n,k)+1;
}
