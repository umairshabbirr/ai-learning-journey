#include<iostream>
using namespace std;
int main()
{
	int arr[10]={2,4,6,8,10,12,14,16,18,20};
	int* array = new int [10];
	
	for(int i=0; i<10; i++)
	{ array[i]=2*i+1;
	}
	cout<<"statis array:";
	for(int i=0; i<10; i++) 
	{
	
	cout<<arr[i]<<" "; 
	}
	cout<<"arrayD:";
	
	for (int i=0;i<10;i++)
	{
	
	cout<<array[i]<<" ";
}
	cout<<endl;
 delete[] array;
	return 0;
}
