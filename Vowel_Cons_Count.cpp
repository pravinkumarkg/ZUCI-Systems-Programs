#include <iostream>
using namespace std;

int main() {
	string str;
	cin>>str;
	int v_count=0,c_count=0,i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
		i++;
	}
	cout<<v_count<<endl<<c_count;
	return 0;
}
