#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }

    public:
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
    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* removehead(Node*head)
{
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;

}

Node* removeTail(Node* head)
{
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removeKpos(Node* head, int k) // counter increase
{
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int counter = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp)
    {
        counter++;
        if(counter == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;

    }
    return head;


}

Node* removeKel(Node* head, int el) // counter increase
{
    if(head == NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
   
    Node* temp = head;
    Node* prev = NULL;
    while(temp)
    {
       
        if(temp->data == el)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;

    }
    return head;


}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Node* head = convertArr2LL(arr);
    //head=removehead(head);
    //head = removeTail(head);
    //head = removeKpos(head,5);
    head = removeKel(head,2);
    cout<<"After the removal of tail : "<<endl;
    print(head);
}
