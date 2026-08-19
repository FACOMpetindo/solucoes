#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int soma = 0;
    for (int i = min(x, y) + 1; i < max(x, y); i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }

    cout << soma << endl;
}