#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) 
{
	int len = nums.size();
	int MAX = nums[0];
	vector<int>DP(len,0);
	for(int i=0;i < len ;i++) {

		if(i == 0) { 
			DP[i] = nums[i];	
		} else {
			DP[i] = max((DP[i-1]+nums[i]),nums[i]);
		}
		cout<<DP[i]<<endl;
		if(DP[i] > MAX)
			MAX = DP[i];
	}
	return MAX;
}

int main()
{
	vector<int>nums;
//	nums[0] = 12;
	nums.push_back(-1);
	nums.push_back(8); 
	nums.push_back(-1); 
	nums.push_back(-9);
	nums.push_back(10); 
	nums.push_back(-1);
	cout<<maxSubArray(nums)<<endl;
	return 0;
}
