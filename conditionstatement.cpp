#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter x :" << endl;
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "x is even : " << x << endl;
    }
    else
    {
        cout << "x is odd : " << x << endl;
    }

    return 0;
}
