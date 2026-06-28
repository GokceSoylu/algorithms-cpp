#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cout << "x==";
    cin >> x;
    cout << "y==";
    cin >> y;
    swap(x, y);
    cout << "x,y = " << x << " " << y;
    return 0;
}