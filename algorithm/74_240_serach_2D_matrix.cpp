#include<stdlib.h>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int> >& matrix, int target)
{
	int row = matrix.size();
	int col = matrix[0].size();
	for(int r = 0,c = col-1; (r < row)&&(c >= 0);)
	{
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

int main()
{
	return 0;
}
