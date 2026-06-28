// ilk adım olarak listeyi oluşturma fonsiyonumuz ve mantığından bahsedelim
#include <iostream>
using namespace std;

struct Node
{
    int data;   // verimiz
    Node *next; // bir sonraki node'un adresini içimizdeki pointerda tutuyoruz.
};

void createList(Node *&head) // öncelikle işin en önemli kısmı hem * hem & işareti koyuyoruz aslında bu c'de kullandığımız ** mantığı pointerın pointerini kullanıyoruz. biz listenin başını bize gösterexck bir pointer oluşturduk(tabiki pointer adresini tuttuğu verinin cinsinden olması gerektiği için pointerimin Node pointer oldu.) şimdi bizde listenin başını tutan pointer var. am abu pointerde değişiklik yapacağımız için bu pointerin adresini almamız gerekiyor. her zaman için ne yağıyorduk fonksiyonda kalıcı değişiklik istiyorsak
{
}

int main()
{
    Node *head = nullptr;
    createList(head);
}