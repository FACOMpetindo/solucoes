class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int maior = 0, maior2 = 0;

        for (auto val : nums)
        {
            if (val >= maior)
            {
                maior2 = maior;
                maior = val;
            }
            else if (val > maior2)
            {
                maior2 = val;
            }
        }

        return (maior - 1) * (maior2 - 1);
    }
};