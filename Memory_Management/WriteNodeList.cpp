#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void WriteListElemnt(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "\n";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node();
    head->data = 10;
    Node *flag = new Node();
    flag = head;
    for (int i = 0; i < 10; i++)
    {
        flag->data = i * 10;
        flag->next = new Node();
        flag = flag->next;
        flag->next = nullptr;
    }
    WriteListElemnt(head);
    return 0;
}