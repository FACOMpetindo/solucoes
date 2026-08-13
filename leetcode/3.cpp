class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int l = 0, r = 0;
        set<char> unicos;

        int ans = 0;
        for (int r = 0; r < s.length(); r++)
        {
            while (unicos.count(s[r]) == 1)
            {
                unicos.erase(s[l]);
                l++;
            }
            unicos.insert(s[r]);
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};