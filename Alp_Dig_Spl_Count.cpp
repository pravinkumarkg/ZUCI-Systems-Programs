#include <iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin>>str;
	int alpcount=0,digitcount=0,splcount=0,i=0;
	while(str[i]!='\0')
	{
	if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
	{
		alpcount++;
	}
	else if(str[i]>='1'&&str[i]<='9')
	{
		digitcount++;
	}
	else
	{
		splcount++;
	}
	i++;
	}
	cout<<alpcount<<endl<<digitcount<<endl<<splcount;
	return 0;
}
