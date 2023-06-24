#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        (x + y > 6) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}