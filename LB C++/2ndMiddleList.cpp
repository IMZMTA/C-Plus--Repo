// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     //contructor
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         }

//     //destructor
//     ~Node(){
//         int value=this->data;

//         //memory is freed
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;
//         }

//         cout<<"Memory is free for Node deleted -> "<<value<<endl;
//     }

// };

// void insertAtHead(Node* &head, int d){

//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }

// void insertAtTail(Node* &tail, int d){

//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=tail->next;
// }

// void insertAtPosition(Node* &head, Node* &tail, int position, int d){

//     if(position<=0){
//         cout<<"Not a valid position, So insertion took place"<<endl;
//         return;
//     }

//     if(position==1){
//         insertAtHead(head,d);
//         return;
//     }

//     Node* temp=head;
//     int cnt=1;

//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }

//     if(temp->next==NULL){
//         insertAtTail(tail,d);
//         return;
//     }

//     Node* nodeToInsert=new Node(d);
//     nodeToInsert->next=temp->next;
//     temp->next=nodeToInsert;


// }

// void deleteNode(Node* &head,Node* &tail, int position){
//     //deleteing first node
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     //delete any midlle node or last node
//     else{

//         Node* curr=head;
//         Node* prev=NULL;

//         int cnt=1;
//         while(cnt<position){
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }


//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;
//         tail=prev;
//     }
// }

// //Get middle element in node 1st way
// Node* getMiddle(Node* head){
//     if(head==NULL || head->next==NULL)
//         return head;

//     //2 nodes
//     if(head -> next -> next == NULL){
//         return head -> next;
//     }
//     Node* fast=head->next;
//     Node* slow=head;

//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }

// //Get Length of linkedlist
// int getLen(Node* head){
    
//     int len=0;
//     while(head!=NULL){
//         head=head->next;
//         len++;
//     }
//     return len;
// }

// void getLength(Node* head){

//     Node* temp=head;
//     int len=0;

//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     cout<<len<<endl;;

// }

// Node* findMiddle(Node* head){
//     int len=getLen(head);
//     int ans=(len/2);

//     Node* temp=head;
//     int cnt=0;
//     while(cnt<ans){
//         temp=temp->next;
//         cnt++;
//     }
//     return temp;
// }

// void print(Node* &head){
    
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {

//     Node* node1=new Node(10);
//     // cout<<node1 -> data<<endl;
//     // cout<<node1 -> next<<endl;

//     Node* head=node1;
//     Node* tail=node1;

//     print(head);

//     insertAtHead(head,12);
//     insertAtHead(head,35);
//     insertAtTail(tail,15);
//     insertAtTail(tail,22);

//     // insertAtPosition(head,tail,0,16);


//     print(head);

//     cout<<"Head -> "<<head->data<<endl;
//     cout<<"Tail -> "<<tail->data<<endl;

//     deleteNode(head,tail,1);
//     print(head);
//     cout<<"Head -> "<<head->data<<endl;
//     cout<<"Tail -> "<<tail->data<<endl;

//     insertAtPosition(head,tail,5,16);
//     print(head);

//     cout<<"Head -> "<<head->data<<endl;
//     cout<<"Tail -> "<<tail->data<<endl;


//     // Node* temp=getMiddle(head);

//     // if(temp!=NULL){
//     //     cout<<"Middle Element: "<<temp->data<<endl;
//     // }
//     // else{
//     //     cout<<"The list is empty, so there is no middle element."<<endl;
//     // }

//     // cout<<temp->data<<endl;

//     // cout<<getMiddle(head)->data;


//     return 0;
// }



#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //contructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        }

    //destructor
    ~Node(){
        int value=this->data;

        //memory is freed
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }

        cout<<"Memory is free for Node deleted -> "<<value<<endl;
    }

};

void insertAtHead(Node* &head, int d){

    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail, int d){

    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    if(position<=0){
        cout<<"Not a valid position, So insertion took place"<<endl;
        return;
    }

    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;


}

void deleteNode(Node* &head,Node* &tail, int position){
    //deleteing first node
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //delete any midlle node or last node
    else{

        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }


        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        tail=prev;
    }
}

Node* reverseR1(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* smallHead = reverseR1(head->next);

    head->next->next=head;
    head->next=NULL;

    return smallHead;
}

// //Recursive way to reverse
// void reverseR(Node* &head, Node* curr, Node* prev){
//     if(curr==NULL){
//         head=prev;
//         return;
//     }
//     Node* forward=curr->next;
//     reverseR(head, forward, curr);
//     curr->next=prev;
// }

Node* reverseList(Node* &head,Node* &tail){

//     // if(head==NULL || head->next==NULL){
//     //     return head;
//     // }

//     // Node* prev=NULL;
//     // Node* forward=NULL;
//     // Node* curr=head;

//     // while(curr!=NULL){
//     //     forward=curr->next;
//     //     curr->next=prev;
//     //     prev=curr;
//     //     curr=forward;
//     // }
//     // return prev;

//     // //recursive way
//     tail=head;
//     Node* curr=head;
//     Node* prev=NULL;
//     reverseR(head,curr,prev);
//     return head;

    //Another way of Recursion
    tail=head;
    return reverseR1(head);
}

//Get Length of linkedlist
int getLen(Node* head){
    
    int len=0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    return len;
}

// void getLength(Node* head){

//     Node* temp=head;
//     int len=0;

//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     cout<<len<<endl;;

// }

Node* findMiddle(Node* head){
    int len=getLen(head);
    int ans=(len/2);

    Node* temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}

void print(Node* &head){
    
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{

    Node* node1=new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    Node* head=node1;
    Node* tail=node1;

    print(head);

    insertAtHead(head,12);
    insertAtHead(head,35);
    insertAtTail(tail,15);
    insertAtTail(tail,22);

    insertAtPosition(head,tail,1,16);
    print(head);

    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;

    deleteNode(head,tail,1);
    print(head);
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;

    insertAtPosition(head,tail,5,16);
    print(head);

    head=reverseList(head,tail);
    print(head);

    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;

    Node* temp=findMiddle(head);

    if(temp!=NULL){
        cout<<"Middle Element: "<<temp->data<<endl;
    }
    else{
        cout<<"The list is empty, so there is no middle element."<<endl;
    }

    cout<<temp->data<<endl;

    return 0;
}