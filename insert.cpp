#include <iostream>
#include <cstdio>
using std::cout;
using std::cin;
using std::endl;

void insertSort(int A[], size_t n)
{
	
	for(int i = 1; i < n; ++i)
	{
		int temp = A[i];
		int j = i -1;
		
		while(A[j] > temp)
		{
		   A[j+1] = A[j];
		   --j;
		}
		
		A[j+1] = temp;
		
	}
}

int main()
{
   cout<<"Please insert 10 numbers"<<endl;
   
   int array[10];
   
   
   for(int i = 0; i < 10; ++i)
   {
		cin >> array[i];
		
   }
   
   cout<< "Numbers: ";
   
   for(int i = 0; i <10; ++i)
   {
		cout<<array[i]<<" ";
   }
   
   insertSort(array, 10);
   
   cout<<"\nSorted: ";
   
   for(int i = 0; i < 10; ++i)
   {
		cout<<array[i]<<" ";
   }
}
	