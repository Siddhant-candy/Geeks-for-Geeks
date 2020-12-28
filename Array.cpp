#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int max(vector <int> arr,int k)
{
 int sum = 0;
 int i =0 ,j = 0;
 for(i=0;i<k;i++)
 sum+=arr[i];
 
 i=0;
 j=k-1;
 int maxsum = sum;
 
 while(j<arr.size()-2)
 {
    sum = sum-arr[i]+arr[j+1];
    if(sum > maxsum)
    maxsum = sum;
    
    j = j+1;
    i = i+1;
 }

return maxsum;
}


vector <int> moveZero(vector <int> arr)
{
    int k = 0,temp=0;
    
    for(int i = 0;i<arr.size();i++)
    {
        if(arr[i] != 0)
        {
            temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
            k = k+1;
        }
        
    }
    
    
    return arr;
    
}

//Left rotate by one 

vector <int> left1(vector <int> arr)
{
    int a = arr[0];
    for(int i = 0 ;i<arr.size();i++)
    {
        arr[i] = arr[i+1];
        
    }
    
    arr[arr.size()-1] = a;
    
    
    return arr;
}

// Left rotate by d numbers   -Solution 1

/*vector <int> left2(vector <int> arr,int d)
{
   if(d>=arr.size())
   d = d%arr.size();
   
   while(d > 0)
   {
       left1(arr);
       d-=1;
   }
}*/


//Solution - 2 
/*
vector <int> left2(vector <int> arr,int d)
{
    int n = arr.size();
    if(d > n)
    d=d%n;
    
    vector <int> temp (d);
    int i =0;
    for(i=0;i<d;i++)
        temp[i] = arr[i];
    
    for(i=d;i<n;i++)
    arr[i-d] = arr[i];


    for(i=0;i<d;i++)
    arr[n-d+i] = temp[n-i];

    
    return arr;
}*/

void reverse(int arr[],int low,int high)
{
    int temp =0;
    while(low<high)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

//Solution 3 - REVERAL ALGORITHM
void left2(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}


//Finding leader

void leader(vector <int> arr)
{
    int n = arr.size();
    int max = arr[n-1];
    cout << max<<" ";
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            cout<<arr[i]<<" ";
            max = arr[i];
        }
    }
}

//max difference ::
int maxdiff(vector <int> arr)
{
    int n = arr.size();
    int diff = arr[1]-arr[0] , minval = arr[0];
    for(int i = 1;i<n;i++)
    {
        diff = max(diff,arr[i]-minval);
        minval = min(minval,arr[i]);
    }
    return diff;
}


//frequency in a sorted array

void frequency(int arr[])
{
    int n = 6;
    int count = 0;
	int key = arr[0];
	
	for(int i=0; i<n ;i++)
	{
		if(arr[i] == key)
		count+=1;
		
		else
		{
			cout<<"\n" << arr[i-1]<<"="<<count;
			count = 1;
			key = arr[i];
		}
	}
}

//Finding the majority element (Moorays Voting Algorithm)
int majority()
{
    

main()
{
     int arr[6]= {10,10,10,25,30,30};
	
	
   	/*vector <int> arr2 {8,5,0,10,0,20};
	arr2 = moveZero(arr2);
	for(int i = 0;i<arr2.size();i++)
	cout << arr2[i]<<endl;*/
	
	/*vector <int> arr3 {1,2,3,4,5};
	arr3 = left1(arr3);
	for(int i = 0;i<arr3.size();i++)
	cout << arr3[i]<<endl;
	
	arr3 = left2(arr3,2);
	
	for(int i = 0;i<arr3.size();i++)
	cout << arr3[i];
	
	leader(arr);
	for(int i = 0 ;i<arr.size();i++)
	cout << arr[i];
	
	cout << maxdiff(arr);*/
	frequency(arr);
}
