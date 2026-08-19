class Solution
{
public:
    vector<int> pesos;
    int dias;
    bool f(int m)
    {
        cout << m << endl;
        int qtd = 0;
        int temp = 0;
        for (int i = 0; i < pesos.size(); i++)
        {
            if (temp + pesos[i] > m)
            {
                temp = 0;
                qtd++;
            }
            temp += pesos[i];
        }
        if (temp > 0)
            qtd++;

        cout << qtd << endl;
        return qtd <= dias;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        pesos = weights;
        dias = days;

        while (l < r)
        {
            int m = l + (r - l) / 2;

            if (f(m))
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }

        return l;
    }
};