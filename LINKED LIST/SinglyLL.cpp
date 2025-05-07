#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data:" << " " << value << endl;
    }
};
void InsertAtHead(Node *&head, int d)
{
    // new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertattail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
                // NODE INSERT KARNE KA CODE AT ANY POSITION
void insertAtPosition(Node* &tail, Node* & head, int position, int d) {
    //insert at Start
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertattail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}
                    // NODE DELETE KARNE KA CODE FOR EVERY POSITION
void deletenode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free for first node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    // creating a new node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertattail(tail, 12);
    print(head);
    insertattail(tail, 18);
    print(head);
    insertattail(tail, 20);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    deletenode(4, head);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    return 0;
}

// 
// ListNode* findnthnode(ListNode* temp,int k){
//     int cnt=1;
//     while(temp!=NULL){
//         if(cnt==k) return temp;
//         temp=temp->next;
//         cnt++;
//     }
//     return temp;
// }

// ListNode* rotateRight(ListNode* head, int k){
//     if(head==NULL || k=0) return head;
//     ListNode* tail=head;
//     int len=1;
//     while(tail!=NULL){
//         tail=tail->next;
//         len++;
//     }

//     if(k%len==0) return head;

//     k=k%len;

//     tail->next=head;
//     ListNode* lastnode=findnthnode(head,len-k);

//     head=lastnode->next;
//     lastnode->next=NULL;

//     return head;
// }