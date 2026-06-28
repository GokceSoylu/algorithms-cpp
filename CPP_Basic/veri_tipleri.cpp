#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10;                   // integer ondalık eleman sayısı-indexler 4byte
    double b = 10.75;             // ondalık 8 byte
    char character = 'G';         // tek tırnak 1 byte
    string metin = "baykar";      // metin çift tırak
    bool bayrak = true;           // true false = 1 byte
    long long l = 12345678765332; // çok büyük sayılar için
}