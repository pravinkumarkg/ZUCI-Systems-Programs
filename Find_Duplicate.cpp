#include <iostream>
using namespace std;

int main() {
	int size,i,j;
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i]<<" ";
			
			}
		}
	}
	return 0;
}
