void nextPermutation(vector<int> &nums)
{
    auto dest = std::is_sorted_until(nums.rbegin(), nums.rend());
    if (dest != nums.rend())
    {
        auto target = std::upper_bound(nums.rbegin(), dest, *dest);
        std::iter_swap(dest, target);
    }
    std::reverse(nums.rbegin(), dest);
}


// this is the code for next permutation
/* this code approach is to find the first element from the end which is not in sorted order 
and then find the next element which is greater than the element found and swap them 
and then reverse the array from the element found to the end of the array*/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size(), k, l;

        for (k = n - 2; k >= 0; k--)
        {
            if (nums[k] < nums[k + 1])
            {
                break;
            }
        }
        if (k < 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (l = n - 1; l > k; l--)
            {
                if (nums[l] > nums[k])
                {
                    break;
                }
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};


