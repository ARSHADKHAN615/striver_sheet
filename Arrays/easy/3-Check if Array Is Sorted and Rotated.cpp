// check if array is sorted and rotated or not
// Approach of this problem is itrate and find the two point 
class Solution
{
public:
    //** Approach 1
    bool check(vector<int> &nums)
    {
        int check = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
            {
                check++;
            }
        }
        if (nums[nums.size() - 1] > nums[0])
            check++;
        return check <= 1;
    }
    //** Approach 2
    bool check(vector<int> &nums)
    {
        int check = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > nums[(i + 1) % nums.size()])
            {
                check++;
            }
        }
        return check <= 1;
    }
};