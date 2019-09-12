#include <iostream>
using namespace std;

int main() {
	int n1=0,n2=1,n3=2,n4,length;
	cin>>length;
	cout<<n1<<" "<<n2<<" "<<n3<<" ";
	for(int i=0;i<=length;i++)
	{
		n4=n1+n2+n3;
		cout<<n4<<" ";
		n1=n2;
		n2=n3;
		n3=n4;
	}
	return 0;
}
