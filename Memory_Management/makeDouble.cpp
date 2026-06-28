#include <iostream>
#include <vector>
using namespace std;

void makeDouble(vector<int> &ar)
{
    for (int i = 0; i < ar.size(); i++)
    {
        ar[i] = ar[i] * 2;
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    ;

    vector<int> arr = {1, 2, 3, 4, 5};
    makeDouble(arr);
    for (int x : arr)
        cout << x << "\n";
    return 0;
}