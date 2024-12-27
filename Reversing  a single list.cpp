#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value){
        data = value;
        next = NULL;
    }
};
void insertatbegin( node* &head, int newdata){
    node* newnode = new node(newdata);
    newnode->next = head;
    head = newnode;
}
void insertatend(node* &head,int value){
    node*newnode = new node(value);
    if(head == NULL){
        head = newnode;
        return;
    }
    node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
node * reverselist(node* &head){
    node*prev = NULL;
    node*cur = head;
    node*next = NULL;
    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    } 
    return prev;
}
void display(node* head){
    node*temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    node*head = nullptr;
    int n,value;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter node "<<i<<" :";
        cin>>value;
        insertatend(head,value);
    }
    cout<<"Before reversing the list: "<<endl;
    display(head);
    head = reverselist(head);
    cout<<"Reversed Linked list: "<<endl;
    display(head);

    return 0;
}