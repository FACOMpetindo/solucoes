#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    for (int i = 0; i < a.size(); i++)
    {
        int x, y;
        x = a[i] - '0';
        y = b[i] - '0';
        cout << (x ^ y);
    }

    cout << "\n";
}