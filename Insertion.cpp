#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public:
     int data;
     Node* next;

     Node(int data1, Node* next1)
     {
        data = data1;
        next = next1;
     }

     Node(int data1)
     {
        data = data1;
        next = nullptr;
     }
};


Node* convertArr2LL(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }

}

Node* inserthead(Node* head, int val)
{
    Node* temp = new Node(val,head);
    return temp;
}

Node* insertTail(Node*head, int val)
{
    if(head == NULL)
    {
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertatKPos(Node* head, int el,int k)
{
    if(head == NULL)
    {
        if(k == 1)
        {
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1)
    {
        return new Node(el,head);
    }
    int counter = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        counter++;
        if(counter == k-1)
        {
            Node* x = new Node(el,temp->next); // try to recall by drawing first connect the existing temp next
            temp->next = x;
            break;
        }
        temp=temp->next;
    }
    return head;

}

Node* insertElbeforeVal(Node* head, int el,int val)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == val)
    {
        return new Node(el,head);
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
       
        if(temp->next->data == val)
        {
            Node* x = new Node(el,temp->next); // try to recall by drawing first connect the existing temp next
            temp->next = x;
            break;
        }
        temp=temp->next;
    }
    return head;

}

int main()
{
    vector<int> s = {2,6,7,100,9};
    // int n;
    // cout<<"Enter the size of the array"<<endl;
    // cin>>n;
    // for(int i = 0; i < n; i++)
    // {
    //     int ns;
    //     cin>>ns;
    //     s.push_back(ns);

    // }
    // for(int i = 0 ; i < n; i++)
    // {
    //     cout<<s[i]<<" ";

    // }
    // cout<<endl;

    Node* head = convertArr2LL(s);
    //head = new Node(100,head);
    head = insertElbeforeVal(head,6,100);
    print(head);
    
}
