#include "linkedList.h"

using namespace std;


void testCopyConstructor(LinkedList list){
    list.pop();
    list.print(); //4,7
}

int main(){
    LinkedList list;
    list.push(7);
    list.push(10);
    list.push(3);
   
    list.print();
    // 3, 10, 7
   
    cout<<endl;
    cout << list.pop() << endl;
    // 3
    cout<<endl;
    list.print();
    // 10, 7
    
    cout<<endl;
    list.insert(4, 1); // Insert 4 at index 1
    
    list.print();
    // 10, 4, 7
    
    cout<<endl;
    list.insert(5, 10); // Attempt to insert value at invalid location (should do nothing)
    list.print();
    cout<<endl;
    
    testCopyConstructor(list);
    
    LinkedList list2 = list;
    list.push(14);
    list2.push(5);
    list2.print();
    list.print();
    // CORRECT: 5, 10, 4, 7;
    // INCORRECT: 5, 14, 10, 4, 7;
    // INCORRECT: 5
    
    return 0;
}