Circular Linked List:
//Circulat Singly linked List:
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
typedef struct node sn;
sn* insertAtBegin(sn* tail,int value){
    sn* newnode = (sn*)malloc(sizeof(sn));
    newnode->data = value;
    if(tail == NULL){
        tail = newnode;
        tail->next = newnode;
    }else{
        newnode->next = tail->next;
    }
    return tail;
}
sn* insertAtEnd(sn*tail,int value){
    sn* newnode = (sn*)malloc(sizeof(sn));
    newnode->data = value;
    if(tail == NULL){
        tail = newnode;
        tail->next = newnode;
    }else{
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
    return tail;
}
sn* deleteAtEnd(sn* tail) {
    if (tail == nullptr) {
        // If the list is empty
        cout << "List is empty, nothing to delete." << endl;
        return nullptr;
    }
    sn* temp = tail->next;

    // If there is only one node in the list
    if (temp == tail) {
        delete tail;
        tail = nullptr;
        return tail;
    }
    // Traverse the list to find the second last node
    sn* curr = temp;
    while (curr->next != tail) {
        curr = curr->next;
    }
    // Update the second last node's next pointer
    // to point to head
    curr->next = temp;
    delete tail;
    tail = curr;

    return tail;
}
void display(sn*tail){
    if(tail == NULL)return;
    sn*t = tail->next;
    while(t!=tail){
        cout<<t->data<<"->";
        t = t->next;
    }
    cout<<tail->data<<"->NULL"<<endl;
}
int main() {
    sn* tail = NULL;
    int n,value;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter value of node "<<i<<": ";
        cin>>value;
        tail = insertAtEnd(tail,value);
    }
    display(tail);
    tail = deleteAtEnd(tail);
    display(tail);
    return 0;
}