#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

bool judgeStr(string str)
{
	int len = str.length(); 	
	for(int j = 0 ; j < len/2; j++)	
	{
		if(str[j] != str[len-j-1])
			return false;
	}
	return true;
}

string longestPalindrome(string s)
{
	int len = s.length();	
	string longestStr;
	for(int i = 0;i < len;i++)
	{
		if(i == 0)
			longestStr = s[i];
		else
		{
			string sub = s.substr(0,i+1);
			for(int j = 0 ;j < sub.length(); j++)	
			{
				string str = sub.substr(j);
				if(judgeStr(str))
				{
					if(str.length() > longestStr.length())		
						longestStr = str;
				}		
			}
		}	
	}
	return longestStr;
}
int main() 
{
	string str = "helfdfffdshfhjsdloworld!" ;
	//cout<<str.length()<<endl;
	cout<<longestPalindrome(str)<<endl;
	return 0;
} 
