#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;
    Node* back;

    public: 
    Node(int data1, Node* next1, Node* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 0; i < arr.size();i++)
    {
        Node* temp = new Node(arr[i],)
    }
}

int main()
{
    vector<int> arr = {2,43,1,72, 93};
    Node* head = convertArr2DLL(arr);

}