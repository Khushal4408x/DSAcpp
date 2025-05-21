#include <iostream>
using  namespace std;
class Node{
public:
    int data;
    Node* next; Node* prev;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;}};
    class DoublyLL{
        Node* head ;
        Node* tail;
        public:
        DoublyLL(){
            head=tail=NULL;}
        void push_front(int val){
            Node* temp= new Node(val); 
            if(head==NULL){
                head=tail=temp;}
            else{
                temp->next=head;
                head->prev=temp;
                head=temp;}
        }
        void push_back(int val){
            Node* temp=new Node(val);
            if(head==NULL){
                head=tail=temp;}
            else{
                tail->next=temp;
                temp->prev=tail;
                tail=temp;}
        }
        void pop_front(){
            if(head==NULL) return ;
            if(head==tail){
                delete head;
                head=tail=NULL;}
            else{
                Node* temp=head;
               head=head->next;
                head->prev=nullptr;
                temp->next=NULL;
                delete temp;}
        }
        void pop_back(){
            if(head==NULL)return ;
            else if(head==tail){
                delete tail;
                head=tail=NULL;}
            else{
                Node* temp= tail;
                tail=tail->prev;
                tail->next=NULL;
                temp->prev=NULL;
                delete temp;}
        }
        void print(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"<=>";
                temp=temp->next;}
            cout<<"NULL\n";
        }
    };
int main(){
    DoublyLL dll;
    dll.push_front(1);dll.push_front(2);dll.push_front(3);dll.push_back(0);dll.push_back(-1);dll.pop_front();dll.pop_back();
    dll.print();
}
