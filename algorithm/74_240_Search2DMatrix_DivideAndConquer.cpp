#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

bool searchMatrix2(vector<vector<int> >& matrix, int target,int row_start,int col_start,int row_end,int col_end) {

	for(int r = row_start,c = col_end; (r <= row_end)&&(c >= col_start);)
	{
		cout<<"current value:"<<matrix[r][c]<<endl;
		if(target > matrix[r][c])
		{
			r++;
		}
		else if(target < matrix[r][c])
		{
			c--;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool searchMatrix(vector<vector<int> >& matrix, int target) {
	int row = matrix.size();
	int col = matrix[0].size();
	int center = matrix[row/2][col/2];
	cout<<"center:"<<center<<endl;
	if(target > center)
	{
		return searchMatrix2(matrix,target,row/2+1,0,row-1,col-1)||searchMatrix2(matrix,target,0,col/2+1,row/2,col-1);
	}
	else if(target < center)
	{
		return searchMatrix2(matrix,target,0,0,row-1,col/2)||searchMatrix2(matrix,target,0,col/2+1,row/2,col-1);
	}
	else
	{
		return true;
	}
	return false;
}

int main()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	vector<int> v5;
	
	v1.push_back(1);	
	v1.push_back(2);	
	v1.push_back(3);	
	v1.push_back(4);	
	v1.push_back(5);	
	
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);
	v2.push_back(9);
	v2.push_back(10);

	v3.push_back(11);
	v3.push_back(12);
	v3.push_back(13);
	v3.push_back(14);
	v3.push_back(15);

	v4.push_back(16);
	v4.push_back(17);
	v4.push_back(18);
	v4.push_back(19);
	v4.push_back(20);

	v5.push_back(21);
	v5.push_back(22);
	v5.push_back(23);
	v5.push_back(24);
	v5.push_back(25);

	vector<vector<int> > vv;
	vv.push_back(v1);
	vv.push_back(v2);
	vv.push_back(v3);
	vv.push_back(v4);
	vv.push_back(v5);

	searchMatrix(vv, 23); 
}
