class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ans = nums[0];
        int apareceu = 1;
        for (auto val : nums)
        {
            if (val != ans)
            {
                apareceu--;
            }
            else
            {
                apareceu++;
            }

            if (apareceu <= 0)
            {
                ans = val;
                apareceu = 1;
            }
        }

        return ans;
    }
};