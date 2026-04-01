#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class Stack{
   
private:
Node* top;
   
public:

//Constructor
Stack() {
    top = NULL;
}

//Push: tambah data

void push(int x){
    Node* newNode = new Node();
    newNode -> data = x;
    newNode -> next = top;
    top = newNode;
    
    cout << x << " ditambahkan ke stack\n";
}

//Pop

void pop() {
    
    if(top == NULL){
        cout << "Stack Underflow\n";
        return;
    }
    
    Node* temp = top;
    cout << temp -> data << " dihapus dari stack\n";
    top = top -> next;
    delete temp;
}

//PEEK
void peek() {
    if(top == NULL){
        cout << "Stack kosong\n";
    } else {
        cout << "Elemen teratas: " << top -> data << endl;
    }
}

//CEK KOSONG

bool isEmpty(){
    return(top == NULL);
}
   
};

int main() {
    
    Stack s;
    
    s.push(5);
    s.push(6);
    s.push(7);
    
    s.peek();
    
    s.pop();
    s.peek();
    
    return 0;
}