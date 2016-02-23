#include<iostream>
#include<string>
#include<climits>
using namespace std;

string removeSpace(string str)
{
	int k=0;
	for(int i=0;i < str.length();i++)	
	{
		if(str[i] == ' ')	
		{
			k++;
		}
	}
	return str.substr(k,str.length()-k);

}

int myAtoi(string str) {

	str = removeSpace(str);

	if(str.length() < 1)
		return 0;

	int res = 0;
	int mark = 1, num = 0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] == '+' || str[i] == '-')
		{
			if(str[i] == '-')
				mark = -1;
			else 
				mark = 1;
			num++;
			if(num > 1 )
				return 0;
			continue;
		}

		if(str[i] == ' ')
		{
			return 0;	
		}

		int temp = str[i]-'0';
		cout<<i<<"--"<<temp<<endl;
		if(temp > 9 || temp < 0)
			break;
		res = res*10 + temp;

		if(mark*res > INT_MAX/10)
			return INT_MAX; 
		if(mark*res < INT_MIN/10 )
			return INT_MIN;

	}
	
	return mark*res;
}

int main()
{
//	cout<<myAtoi("+1")<<endl;
	cout<<removeSpace("   jijeiji")<<endl;

	return 0;

}


