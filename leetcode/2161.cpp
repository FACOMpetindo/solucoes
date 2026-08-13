class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        queue<int> less;
        queue<int> equal;
        queue<int> more;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < pivot)
            {
                less.push(nums[i]);
            }
            else if (nums[i] == pivot)
            {
                equal.push(nums[i]);
            }
            else
            {
                more.push(nums[i]);
            }
        }

        vector<int> ans(nums.size());

        int i = 0;
        while (!less.empty())
        {
            auto elem = less.front();
            ans[i] = elem;
            i++;
            less.pop();
        }

        while (!equal.empty())
        {
            auto elem = equal.front();
            ans[i] = elem;
            i++;
            equal.pop();
        }

        while (!more.empty())
        {
            auto elem = more.front();
            ans[i] = elem;
            i++;
            more.pop();
        }

        return ans;
    }
};