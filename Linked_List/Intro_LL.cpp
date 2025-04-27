#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
        Node* head;
        Node* tail; 
    public:
    List(){
    head=tail=NULL;
}
    void push_front(int val){
        Node* temp= new Node (val);

        if(head==NULL){
            head=tail=temp;
            return;
        }
        else{
          temp->next=head;
          head=temp;
        }
     }
     void push_back(int val){
        Node* temp=new Node(val);
        if(head==NULL){
           head=tail=temp;
        }
        else{
            tail->next=temp;
            temp->next=NULL;tail=temp;
        }
     }
     void pop_front(){
        Node* temp=head;
        h=head->next
    
     }
     void display(){
        Node* temp=head;
        while (temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
            
        }
        cout<<"NULL"<<endl;
        cout << "Tail value: " <<tail->data << endl;

     }

};
int main(){
    List l1;
    l1.push_front(3);   l1.push_front(4);   l1.push_front(2);
    l1.push_back(7);
    l1.display();

}