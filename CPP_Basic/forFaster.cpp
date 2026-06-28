#include <iostream>
/*
C++ malumun c üzerine inşa edildiği için. C ye ait printf/scanf komutlarını ve kendine ait cin/cout konutlarının aynı anda senkronize olarak çalıştırmak üzere hazır tutar.
haliyle bu kontrol mekanızması kodu yavaşlatır. biz ise ios_base::sync_with_stdio(false) yaparak bu senkronize işlemini iptal ediypruz. bunu yapınca kodda printf ve scanf kullanamayız ama kkodumuz daha hızlı çalışıor.
*/
/*
ek olarak yine hız kazanmak için cin ve cout komutlatınn birbirini beklemisinide iptal edicez.
cin.tie(NULL)
*/
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    cout << "çıktı:" << a;
    return 0;
}