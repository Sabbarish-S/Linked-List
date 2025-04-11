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
        Node(int data)
};
