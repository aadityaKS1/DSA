#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=NULL;
    }
};
Node*convertArr2LL(vector<int> &arr){
    Node * head=new Node(arr[0]);//creating the head node
    Node*mover=head;//a temporary pointer to move through the linked list
    for (int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);//creating a new node
        mover->next=temp; //conneting mover to temp 
        mover=temp;//moving the mover to temp (moving ahead)
    }
    return head;
}
int lengthOfLL(Node* head){
    int count=0;
    //traversal
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int SearchInLL(Node*head,int val){
    int found=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            found=1;
            break;
        }
        temp=temp->next;
    }
    return found;
    }
Node* insertHead(Node* head,int val){
    if (head==NULL){
        return new Node(val);
    }
    return new Node(val,head);
}
Node * insertTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node * temp=head;
    while( temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);
    return head;
}
Node * insertatK(Node * head, int val ,int k){
    if(head==NULL){
        return new Node(val);
    }
    if(k==1){
        return new Node(val,head);
    }
    Node * temp=head;
    int count=1;
    while(temp!=NULL){
        if(count==k-1){
            Node * newNode =new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
        count++;
    }
    return head;
}
int main(){
    vector<int> arr={13,55,6,2,77,8000000};
    Node *head=convertArr2LL(arr);
    cout<<head->data;
    //insertat tail
    head=insertTail(head,999);
    //insert at 3
    head=insertatK(head,1000,3);
    //traversal
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //length of LL
    cout<<lengthOfLL(head);
    cout<<endl;
    //search in LL
    cout<<SearchInLL(head,55);
    head=insertHead(head,100);


    return 0;
}
