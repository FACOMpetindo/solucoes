#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ultimo = 1;
    int penultimo = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << penultimo << (i == n - 1 ? "\n" : " ");
        }
        else if (i == 1)
        {
            cout << ultimo << (i == n - 1 ? "\n" : " ");
        }
        else
        {
            int atual = ultimo + penultimo;
            cout << atual << (i == n - 1 ? "\n" : " ");
            penultimo = ultimo;
            ultimo = atual;
        }
    }
}