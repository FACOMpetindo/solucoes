class Solution
{
public:
    int minimumPushes(string word)
    {
        map<char, int> mapa;

        for (auto c : word)
        {
            mapa[c]++;
        }

        vector<pair<int, char>> cont;
        for (auto [chave, valor] : mapa)
        {
            cont.emplace_back(valor, chave);
        }

        sort(cont.rbegin(), cont.rend());

        int ans = 0;
        for (int i = 0; i < cont.size(); i++)
        {
            int qtd = (i + 8) / 8;
            ans += cont[i].first * qtd;
        }

        return ans;
    }
};