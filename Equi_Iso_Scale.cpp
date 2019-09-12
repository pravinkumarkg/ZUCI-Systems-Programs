#include <iostream>
using namespace std;

int main() {
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	if(a1==a2&&a2==a3)
	{
		cout<<"Equilateral Triangle";
	}
	else if(a1==a2||a1==a3||a2==a3)
	{
		cout<<"Isosceles Triangle";
	}
	else
	{
		cout<<"Scalene Triangle";
	}
	return 0;
}
