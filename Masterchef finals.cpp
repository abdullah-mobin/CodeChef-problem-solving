#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        (a<=10 && a!=0)? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    return 0;
}