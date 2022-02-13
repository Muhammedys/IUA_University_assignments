#include <iostream>
#include<conio.h>

using namespace std;

#define SIZE 3

int main()
{
	int arr[SIZE];
	int i,j;
	int temp;
	
	for(i = 0; i < SIZE; i++)
	{
		cout << "Enter element ["<< i + 1 <<"] ";
		cin >> arr[i];
	}
	
	cout << "The element entered are:" << endl;
	for(i = 0; i < SIZE; i++)
		cout << arr[i] << "\t";
	cout << endl;
	
	for(i = 0; i < SIZE; i++)
	{		
		for(j = i + 1; j < SIZE ;j++)
		{
			if(arr[i] > arr[j])
			{
				temp  = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << "The elements in Ascending Order are:" << endl;
	for(i = 0; i < SIZE; i++)
		cout << arr[i] << "\t";
	cout << endl;	
	
	getch();	
	return 0;
	
}
