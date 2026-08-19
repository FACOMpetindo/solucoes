#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        bool primo = true;
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                primo = false;
                break;
            }
        }

        if (x < 2)
            primo = false;
        if (primo)
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }
}