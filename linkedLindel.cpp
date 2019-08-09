#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Node
{
public:
    int num;
    Node* next;
};

void append(Node** href, int val)
{
    Node* newnode = new Node();
    newnode->num = val;
    newnode->next = NULL;
    Node* temp = *href;
    if(temp == NULL)
    {
        *href = newnode;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return;
}

void push(Node**href,int  val)
{
    Node* newnode = new Node();
    Node* temp = *href;
    newnode->num = val;
    newnode->next = temp;
    *href = newnode;
}

void printlist(Node** loop)
{
    Node* pop = *loop;
    while(pop != NULL)
    {
        cout << pop->num << " ";
        pop = pop->next;
    }
}

void delete1(Node* href,int key, int lim)
{
    Node* temp = href;
    int count1 = 1;
   while(temp->next != NULL && count1 != key-1)
   {
       temp = temp->next;
       count1++;

   }
    Node* prev = temp;
    prev->next = temp->next->next;

}



int main()
{
    int n;
    cin >> n;
    int arr[n];
    Node* head = NULL;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        append(&head, arr[i]);
    printlist(&head);
    cout << "\n";
    push(&head, 8);
    printlist(&head);
    cout << "\n";
    cout << "deleting node " << endl;
    int d;
    cin >> d;
    delete1(head, d, n);
    printlist(&head);

    return 0;

}
