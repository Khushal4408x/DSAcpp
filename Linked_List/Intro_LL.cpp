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
        Node* newnode=new Node(val);

    }
};
int main(){

}