#include<iostream>
using namespace std;
int main()
{
	int arr[10]={2,4,6,8,10,12,14,16,18,20};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int*array=new int[size];
	
	for(int i=0; i<size;i++)
	{ array[i]=2*i+1;
		}	
cout << "Static Array (Even indices): ";
    for (int i = 0; i < size; i += 2) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
cout << "Dynamic Array (Even indices): ";
    for (int i = 0; i < size; i += 2)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[]array;
    return 0;
}

