#include<iostream>
#include<string>

using namespace std;

string findPalindrome(string s,int i,int j)
{
	int len = s.length();
	while(i >=0 && j<= len-1 && (s[i] == s[j]))
	{
		i--;
		j++;	
	}
	return s.substr(i+1,j-i-1);
}
string longestPalindrome(string s)
{
	int len = s.length(); 	
	string longestStr = s.substr(0,1);

	for(int i=0;i<s.length();i++)
	{
		if(findPalindrome(s,i,i).length() > longestStr.length())	
			longestStr = findPalindrome(s,i,i);
		if(findPalindrome(s,i,i+1).length() > longestStr.length())	
			longestStr = findPalindrome(s,i,i+1);
	}
	return longestStr;
}

int main()
{
	string s = "gfdsfgjsdgfjsdfjgsdhfsvfeyrgeyryeyyyeyrjhewrhewyrgyewgryewgrvvvvvvufergewurjjjj";
	cout<<longestPalindrome(s)<<endl;
	return 0;
} 
