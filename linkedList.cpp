#include "linkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    while(head!=nullptr)
        pop();
}

LinkedList::LinkedList(const LinkedList& listToCopy){
    this->head=nullptr;
    
    for(int i=0;i<listToCopy.size();++i)
        this->push(listToCopy.at(i));
}

LinkedList& LinkedList::operator=(const LinkedList& listToCopy){
    
    if (this != &listToCopy) {
        while(head!=nullptr)
            pop();
        for(int i=0;i<listToCopy.size();++i)
            this->push(listToCopy.at(i));
    }

    return *this;
}


void LinkedList::push(int data){
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = head;
    head = new_node; 
}

int LinkedList::pop(){
    int returnVal = head->data;
    Node* oldHead=head;
    head=head->next;
    delete oldHead;
    
    return returnVal;
}

void LinkedList::print(){
    Node* h =head;
    while(h!=nullptr){
        cout<< h->data<<endl;
        h = h->next;
    }
}

int LinkedList::size() const{
    Node* indexNode= head;
    int numIndex=0;
    while(indexNode!=nullptr){
    indexNode=indexNode->next;
    ++numIndex;
    }
    return numIndex;
}

void LinkedList::insert(int data, int index){
    if(index>=size())
        return;
    
    Node* h = head;
    for(int i=0;i<(size()-index-1);++i)
        h=h->next;

    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = h->next;
    h->next = newNode;
}

int LinkedList::at(int index) const{
    Node* h = head;
    for(int i=0;i<(size()-index-1);++i)
        h=h->next;
    return h->data;
}
