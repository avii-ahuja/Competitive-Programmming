#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t = 0, a = 0, b = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a % b << "\n";
    }
}