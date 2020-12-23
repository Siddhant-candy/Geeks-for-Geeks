#include <iostream>
#include <string>


using namespace std;
// Print n to 1 using recursion

void printn(int n)
{
	if(n == 0)
	return;
	cout << n<<endl;
	printn(n-1);
}

//Print 1 to n tail recursive

void print1(int n,int k)
{
	if(k > n)
	return;
	
	cout << k << endl;
	print1(n,k+1);
}

//factorial non tail recursive

long long factorial(int n)
{
	if(n == 0)
	return 1;
	return n*factorial(n-1);
}

//factorial tail recursive
long long factorialn(int n ,int k)
{
	if(n == 0 || n==1)
	return k;
	
	factorialn(n-1,k*n);
}

// Sum of natural numbers

int getsum(int n)
{
	if(n==0)
	return 0;
	
	return n+getsum(n-1);
	
}


// Palindrome check

bool isPalindrome(int n,string str,int len)
{
	if(n>=len)
	return true;
	
	if(str[n] != str[len-1])
	return false;
	
	isPalindrome(n+1,str,len-1);
	
	
	
	
}


// Sum of Digits

int sumDigit(int n)
{
	if(n/10 == 0)
	return n;
	
	return sumDigit(n/10)+n%10;
	
}

//Rod Cutting

int rod(int n,int a,int b,int c)
{
	if(n==0)
	{
		return 0;
	}
	
	if(n<a && n<b && n<c)
	{
		return 0;
	}
	
	int m1 = rod(n-a,a,b,c);
	int m2 = rod(n-b,a,b,c);
	int m3 = rod(n-c,a,b,c);
	
	return max(max(m1,m2),m3)+1;
}



//Subsets



//Tower of Hanoi

int toh(int n,int from ,int to,int aux)
{
	if(n==1)
	{
	 cout <<"move rod 1 from tower "<<from<<" to tower "<<to<<endl;
	 return 1; 
	}
	
	int a = toh(n-1,from,aux,to);
	cout << "move rod " << n << " from tower " << from <<" to tower " << to<<endl;
	int b = toh(n-1,aux,to,from);
	
	return a+b+1;
}







//Josephus  

int jos(int n,int k)
{
  if(n == 1)
  return 0;
  
  return (jos(n-1,k)+k)%n;
}

int josephus(int n,int k)
{
	return jos(n,k)+1;
}






main()
{
	/*string s = "SIDDIS";
    if(isPalindrome(0,s,s.length()) == 0)
    cout << "True";
    else
    cout << "False";
    
    int n = 545;
    cout << rod(5,3,2,1);
    
    cout << toh(3,1,3,2);*/
    
    cout << josephus(5,3);
}


	     
		
