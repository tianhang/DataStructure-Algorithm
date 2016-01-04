#include<iostream>
#include<vector>
using namespace std;

int uniquePaths(int m,int n)
{
	vector<vector<int> > DP(m,vector<int>(n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0)
			{
				if(j==0)
				{
					DP[i][j] = 1;
				}
				else
				{
					DP[i][j] = DP[i][j-1]; 
				}
			}	
			else
			{
				if(j==0)
				{
					DP[i][j] = DP[i-1][j];
				}
				else
				{
					
					DP[i][j] = DP[i-1][j] + DP[i][j-1]; 
				}
			}
		}
	}
	return DP[m-1][n-1];
	
}
int main()
{
	cout<<uniquePaths(1,1)<<endl;
	cout<<uniquePaths(2,2)<<endl;
	cout<<uniquePaths(3,3)<<endl;
	cout<<uniquePaths(4,4)<<endl;

	return 0;
}
