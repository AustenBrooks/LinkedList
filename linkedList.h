#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
    Node* head;
    
    public:
    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& listToCopy);
    LinkedList& operator=(const LinkedList& listToCopy);
    void push(int);
    int pop();
    void print();
    int size() const;
    void insert(int,int); //value, index (head is highest index)
    int at(int) const;
};


#endif