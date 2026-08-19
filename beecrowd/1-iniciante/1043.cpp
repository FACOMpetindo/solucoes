#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x, y, z;
    cin >> x >> y >> z;
    if (x + y > z && x + z > y && y + z > x)
        cout << "Perimetro = " << fixed << setprecision(1) << x + y + z << endl;
    else
        cout << "Area = " << fixed << setprecision(1) << ((x + y) * z) / 2.0f << endl;
}