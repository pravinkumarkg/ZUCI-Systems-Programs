#include <iostream>
using namespace std;

int main() {
	int n1=0,n2=1,n3,num,count=0;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		if(n3==num)
		{
		 count=1;
		}
	}
		if(count==0)
		{
			cout<<"not fib";
		}
		else
		{
		cout<<"fib";
		}
	
	return 0;
}
