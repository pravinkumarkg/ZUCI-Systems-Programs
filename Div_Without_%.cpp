#include <iostream>
using namespace std;

int main() {
	int a,b,count;
	cin>>a>>b;
	while(a>=b)
	{
		a=a-b;
		count++;
	}
	
	cout<<count;
	return 0;
}
