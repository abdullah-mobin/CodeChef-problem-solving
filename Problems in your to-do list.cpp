#include <iostream>
#include <algorithm>
using namespace std;

bool ifGrater(int x)
{
    if (x >= 1000)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int inpt, temp, del = 0;
        cin >> inpt;
        for (size_t i = 0; i < inpt; i++)
        {
            cin >> temp;
            if (ifGrater(temp))
            {
                ++del;
            }
        }
        cout << del << endl;
    }

    return 0;
}