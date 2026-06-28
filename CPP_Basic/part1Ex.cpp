#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i < 20; i++)
    {
        if (i % 3 == 0)
            cout << i << "\n";
    }
    return 0;
}