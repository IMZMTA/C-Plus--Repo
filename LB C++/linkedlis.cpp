/* Singly LinkedList */

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




//     return 0;
// }





/* Doubly LinkedList */

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     //constructor
//     Node (int data){
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }

//     //destructor
//     ~Node(){
//         int value=this->data;

//         //memory is freed
//         if(next!=NULL){
//             delete next;
//             next=NULL;
//         }

//         cout<<"Memory is free for Node deleted -> "<<value<<endl;
//     }

// };

// void print(Node* head){

//     Node* temp=head;

//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;

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

// void insertAtHead(Node* &head, Node* &tail, int d){

//     if(head==NULL){
//         Node* temp=new Node(d);
//         head=temp;
//         tail=temp;
//     }
//     else{
//     Node* temp=new Node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
//     }
// }

// void insertAtTail(Node* &head, Node* &tail, int d){

//     if(tail==NULL){
//         Node* temp=new Node(d);
//         tail=temp;
//         head=temp;
//     }
//     else{
//     Node* temp=new Node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;
//     }
// }

// void insertAtPosition(Node* &head, Node* &tail, int position, int d){

//     if(position<=0){
//         cout<<"Not a valid position, So insertion took place"<<endl;
//         return;
//     }

//     if(position==1){
//         insertAtHead(head,tail,d);
//         return;
//     }

//     Node* temp=head;
//     int cnt=1;

//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }

//     if(temp->next==NULL){
//         insertAtTail(head,tail,d);
//         return;
//     }

//     Node* nodeToInsert=new Node(d);
//     nodeToInsert->next=temp->next;
//     temp->next->prev=nodeToInsert;
//     temp->next=nodeToInsert;
//     nodeToInsert->prev=temp;

// }

// void deleteNode(Node* &head, Node* &tail, int position){
//     //deleteing first node
//     if(position==1){
//         Node* temp=head;
//         temp->next->prev==NULL;
//         head=temp->next;
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

//         curr->prev=NULL;
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;
//         tail=prev;
//     }
// }

// int main()
// {

//     // Node* node1=new Node(10);

//     // Node* head=node1;
//     // Node* tail=node1;

//     Node* head=NULL;
//     Node* tail=NULL;

//     print(head);

//     insertAtHead(head,tail,15);
//     print(head);
//     insertAtHead(head,tail,20);
//     print(head);

//     insertAtTail(head,tail,30);
//     print(head);

//     insertAtPosition(head,tail,2,100);
//     insertAtPosition(head,tail,1,200);
//     // insertAtPosition(head,tail,7,150);
//     insertAtPosition(head,tail,6,150);
//     print(head);

//     deleteNode(head,tail,6);
//     print(head);

//     cout<<"Head -> "<<head->data<<endl;
//     cout<<"Tail -> "<<tail->data<<endl;

//     return 0;
// }




// /* Cicural Linked List */

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

// void insertNode(Node* &tail, int element, int data){

//     //empty list
//     if(tail==NULL){
//         Node* temp=new Node(data);
//         tail=temp;
//         temp->next=temp;
//     }
//     else{
//         Node* curr=tail;

//         while(curr->data!=element){
//             curr=curr->next;
//         }
//         //element found
//         Node* temp=new Node(data);
//         temp->next=curr->next;
//         curr->next=temp;
//     }
// }

// void print(Node* &tail){

//     Node* temp=tail;

//     //empty list
//     if(tail==NULL){
//         cout<<"List is empty"<<endl;
//         return;
//     }

//     do{
//         cout<<tail->data<<" ";
//         tail=tail->next;
//     }while(tail!=temp);
//     cout<<endl;
// }

// void deleteNode(Node* &tail,int d){

//     if(tail==NULL) {
//         cout<<"Nothing to delete";
//         return;
//     }
//     else{

//         Node* prev=tail;
//         Node* curr=prev->next;
//         while(curr->data!=d){

//             prev=curr;
//             curr=curr->next;
//         }

//         prev->next=curr->next;

//         //1 Node List
//         if(curr==prev){
//             tail=NULL;
//         }
//         //>=2 Node List
//         else if(tail==curr){
//             tail=prev;
//         }
//         curr->next=NULL;
//         delete curr;
//     }
// }

// int main(){

//     Node* tail=NULL;

//     insertNode(tail,3,5);
//     print(tail);
    
//     insertNode(tail,5,8);
//     print(tail);

//     insertNode(tail,8,10);
//     print(tail);

//     insertNode(tail,8,25);
//     print(tail);

//     return 0;
// }