#include <bits/stdc++.h>
using namespace std;

struct Node
{
    public:
        int data;
        Node* next;
        Node* prev;

    public:
        Node(int data1, Node* next1, Node* prev1)
        {
            data = data1;
            next = next1;
            prev = prev1;
        }
    public:
        Node(int data1)
        {
            data = data1;
            next = nullptr;
            prev = nullptr;
        }
};

Node* convertArr2DLL(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i< arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp; 
    }
    return head;
}

void print(Node* head, vector<int> arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr = {23,43,12,74,12};
    Node* head = convertArr2DLL(arr);
    print(head,arr);

}

