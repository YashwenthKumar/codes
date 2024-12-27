// You are using GCC
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data = value;
        next = NULL;
    }
};
void insertatbegin(node* &head,int value){
    node*newnode = new node(value);
    newnode->next = head;
    head = newnode;
}
void insertatend(node* &head,int value){
    node *newnode= new node(value);
    if(head == NULL){
        head = newnode;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(node*head){
    node*temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void search(node*head,int key){
    node*temp = head;
    bool found = false;
    while(temp!=NULL){
        if(temp->data == key){
            found = true;
            break;
        }
        temp = temp->next;
    }
    if(found){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main() {
    // Write C++ code here
    node*head = NULL;
    insertatbegin(head,1);
    insertatend(head,2);
    insertatend(head,3);
    display(head);
    int m;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>m;
    search(head,m);
    return 0;
}