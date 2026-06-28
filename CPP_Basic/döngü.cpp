#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    while (a % 7 == 0)
    {
        for (int i = 1; i < a; i++)
        {
            cout << i << "\n";
            if (a % 7 != 0)
                break;
            a--;
        }
    }
}