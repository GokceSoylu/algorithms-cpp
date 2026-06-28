#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void createList(Node *flg, int a)
{
    // Node *flg = head;
    for (int i = 0; i < a; i++)
    {
        flg->data = (i + 1) * 10;
        flg->next = new Node();
    }
    flg->data = a * 10;
    flg->next = nullptr;
    return;
}
void writeList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data;
        head = head->next;
    }
}

int main()
{
    Node *Head = new Node();
    createList(Head, 20);
    writeList(Head);
    return 0;
}