#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
	    int x,y,a;
	    cin >>x>>y>>a;
	    if(a<y && a>=x) cout << "YES"<<endl;
	    else cout << "NO"<<endl;
	}
	return 0;
}
