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
    Node * head=new Node(arr[0]);
    Node*mover=head;
    for (int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthOfLL(Node* head){
    int count=0;
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

int main(){
    vector<int> arr={13,55,6,2,77,8000000};
    Node *head=convertArr2LL(arr);
    cout<<head->data;
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

    return 0;
}
