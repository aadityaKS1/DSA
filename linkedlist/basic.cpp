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
int SearchInLL(Node*head,int el){
    int found=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==el){
            found=1;
            break;
        }
        temp=temp->next;
    }
    return found;
    }
Node* insertHead(Node* head,int el){
    if (head==NULL){
        return new Node(el);
    }
    return new Node(el,head);
}
Node * insertTail(Node* head,int el){
    if(head==NULL){
        return new Node(el);
    }
    Node * temp=head;
    while( temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(el);
    return head;
}
Node * insertatK(Node * head, int el ,int k){
    if(head==NULL){
        return new Node(el);
    }
    if(k==1){
        return new Node(el,head);
    }
    Node * temp=head;
    int count=1;
    while(temp!=NULL){
        if(count==k-1){
            Node * newNode =new Node(el,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
        count++;
    }
    return head;
}
Node * insertBeforeVal(Node* head,int el,int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        return new Node(el,head);
    }
    Node * temp=head;
    while(temp->next!=NULL){
        if( temp->next->data==val){
            Node * newNode=new Node(el,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node * deleteHead(Node* head){
    if(head==NULL){
        return head;
    }
    Node * temp=head;
    head=head->next;
    delete temp;
    return head;
}   
Node * deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node * temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}
Node * deleteAtK(Node* head,int k){
    if (head==NULL){
        return head;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;    
        return head;
    }
    int cnt=0;
    Node * temp=head;
    Node * prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    return head;
}
Node * removeEl(Node * head,int el){
    if(head==NULL){
        return head;
    }
    while(head!=NULL && head->data==el){
        Node * temp=head;
        head=head->next;
        delete temp;
    }
    Node * temp=head;
    Node * prev=NULL;
    while(temp!=NULL ){
        if(temp->data==el){
            prev->next=prev->next->next;
            delete temp;
            break;
        }

            prev=temp;
            temp=temp->next;
        
    }
    return head;
}   
int main(){
    vector<int> arr={13,55,6,2,77,8000000};
    Node *head=convertArr2LL(arr);
    //insertat tail
    head=insertTail(head,999);
    //insert at 3
    head=insertatK(head,1000,3);
    //insert before 77
    head=insertBeforeVal(head,500,77);
    //delete head
    head=deleteHead(head);
    //delete at k
    head=deleteAtK(head,4);
    //delete el
    head=removeEl(head,55);
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
    head=insertHead(head,10);


    return 0;
    
}
