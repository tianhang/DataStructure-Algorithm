#include<iostream>
#include<climits>
using namespace std;


int invertInteger(int x)
{	
	int res = 0;
	int sign = 1;
	int MAX = INT_MAX;
	if(x < 0)
	{
		sign = -1;
		MAX = INT_MIN;
	}
	while(x != 0)
	{
		if(((MAX - res) + res/10)*sign >=  res*sign)
			res = res*10 +x%10;
		else
			return 0;
		x = x/10;
	}
	return res;
}
bool isPalindrome(int x) {
	return x == invertInteger(x);	
}
int main()
{
        
	return 0;
}
