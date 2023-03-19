#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
struct MyStack{
    Node* head = nullptr;
    void push(int x);
    bool pop(int &x);
};
struct MyQueue{
    Node* head = nullptr;
    void enqueue(int x);
    bool dequeue(int &x);
};
void MyStack::push(int x){
    // Node* tmp = new Node{x, head};
    Node* tmp = new Node;
    tmp->data = x;
    tmp->next = head;
    head = tmp;
}

bool MyStack::pop(int &x){
    if(!head) return false;
    x = head->data;
    Node* tmp = head;
    head = head->next;
    delete tmp;
    return true;
}
void MyQueue::enqueue(int x){
    Node* cur = head;
    if(!head) {
        head = new Node;
        cur = head;
    }else{
        while(cur->next != nullptr){
            cur = cur->next;
        }
        cur->next = new Node;
        cur = cur->next;
    }
    cur->data = x;
    cur->next = nullptr;
}
// inline function