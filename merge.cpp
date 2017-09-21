#include <iostream>
#include <cstdio>
using std::cout;
using std::cin;
using std::endl;

void merge(int A[], size_t half1, size_t half2)
{
	int * temp;
	int counter = 0;
	int cursor1 = 0;
	int cursor2 = 0;
	
	temp = new int[half1 + half2];
	
	while(cursor1 < half1 && cursor2 < half2)
	{
		if(A[cursor1] < (A+half1)[cursor2])
		{
			temp[counter] = A[cursor1];
			++counter;
			++cursor1;
		}
		else
		{
			temp[counter] = (A+half1)[cursor2];
			++counter;
			++cursor2;
		}
	}
	
	for(int i = cursor1; i < half1; ++i)
	{
		temp[counter] = A[i];
		++counter;
	}
	
	for(int j = cursor2; j < half2; ++j)
	{
		temp[counter] = (A+half1)[j];
		++counter;
	}
	
	for(int x = 0; x < (half1 + half2); ++x)
	{
		A[x] = temp[x];
	}
	
	delete temp;
	
}

void mergeSort(int A[], size_t n)
{
	int half1,half2;
	
	if(n >1)
	{
		half1 = n/2;
		half2 = n - half1;
		
		mergeSort(A, half1);
		mergeSort(A+half1, half2);
		
		merge(A, half1, half2);
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
   
   mergeSort(array, 10);
   
   cout<<"\nSorted: ";
   
   for(int i = 0; i < 10; ++i)
   {
		cout<<array[i]<<" ";
   }
}