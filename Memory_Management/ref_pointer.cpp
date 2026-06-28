#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num = 10;
    int &ref = num; // refarans int& deemkle alınır ve aynı bellek noktasına iki farklı isaim vermek demektir - alias

    ref = 100; // haliyle aynı bellek noktasını gösterdikleri içinde ref değiştirilmeis num'da değiştiri.
    // dikkat! ref bir pointer deil aynı memery alanınan farklıo isimde vermek iki isimli olması gibi
    cout << "num=ref==" << num << "\n";

    // * koyduğuumzda direkt adres tutan bildiğimiz pointer olur.
    int *p = &num;
    cout << "p = " << p << "\n"; // diert p dersek bir deşlrn gibi tuttuğu değeri yani adresi yazdırırız
    cout << "*p = " << *p;       //* koyduğumuzd aözelliği devreye girer ve o adrese gidiip içindekini yazdırır

    return 0;
}