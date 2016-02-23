#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &v,int i,int j)
{
	int left = i;
	int right = j;
	int pivot = v[(i+j)/2];	
	
	while(i <= j)
	{
		while(v[i] < pivot)
			i++;
		while(v[j] > pivot)
			j--;
		if(i < j)
		{
			int temp = v[i];
			v[i] = v[j];
			v[j] = temp;
		}
	}
	return i-1;
}

void quickSort(vector<int> &v,int left,int right)
{
	int k = partition(v,left,right);	
	if()
}
int main()
{
		

	return 0;
}
