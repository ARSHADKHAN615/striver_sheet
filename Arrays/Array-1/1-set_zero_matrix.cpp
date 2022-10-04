//** Approach 1 brute force
class Solution
{
public:
    void helper(vector<vector<int>> &matrix, int Findrow, int FindCol)
    {
        int RowSize = matrix.size();
        int ColSize = matrix[0].size();

        int top = Findrow;
        int bottom = Findrow;
        int left = FindCol;
        int right = FindCol;

        while (top >= 0)
        {
            matrix[top][FindCol] = 0;
            top--;
        }
        while (bottom < RowSize)
        {
            matrix[bottom][FindCol] = 0;
            bottom++;
        }
        while (left >= 0)
        {
            matrix[Findrow][left] = 0;
            left--;
        }
        while (right < ColSize)
        {
            matrix[Findrow][right] = 0;
            right++;
        }
    }

    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> ind;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    // helper(matrix,1,1);
                    ind.push_back({i, j});
                }
            }
        }
        for (int i = 0; i < ind.size(); i++)
        {
            helper(matrix, ind[i][0], ind[i][1]);
        }
    }
};


/* Approach 2 is to use two arrays one for row and one for column 
first traverse the matrix and mark the row and column in which 0 is present
then traverse the matrix again and set the row and column to 0 if the row and column is marked
*/
// TC O(m*n)+O(m*n)
// SC O(m+n)

class Solution
{
public:
    void setZeroes(vector<vector<int>> &m)
    {
        int row = m.size();
        int col = m[0].size();
        vector<int> tempRow(row, -1);
        vector<int> tempCol(col, -1);

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (m[i][j] == 0)
                {
                    tempRow[i] = 0;
                    tempCol[j] = 0;
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (tempRow[i] == 0 || tempCol[j] == 0)
                {
                    m[i][j] = 0;
                }
            }
        }
    }
};