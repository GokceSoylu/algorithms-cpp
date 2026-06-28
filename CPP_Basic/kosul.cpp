#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s = 78;
    if (s >= 90)
    {
        cout << "AA";
    }
    else if (s >= 80)
    {
        cout << "BB";
    }
    else if (s >= 70)
    {
        cout << "CC";
    }
    else
    {
        cout << "ff";
    }
    return 0;
}