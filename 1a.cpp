#include <iostream>
#include "a.cpp"
using namespace std;
class Stack{
    public:
    Node * top;
    LinkedList l1;
    Stack(){
        top=l1.head;

    }
    //pushes at top
    void push(int value){
        // void insertAt(int pos, int value){
        l1.insertAt(1,value);
        //top i snew head
        top = l1.head;
    }
    //delete at top
    void pop(){
        //void deleteat(int pos){
           l1.deleteat(1);
        //top = new head
        top=l1.head;
    }
    bool isEmpty(){
        if(top==NULL) return true;
        return false;
    }
    int size(){
        return l1.count();

    }
    void topDisplay(){

    }
    void Dispaly(){
        l1.display();
    }
};
int main(){
    Stack s1;
    for(int i=0;i<5;i++)
        s1.push(i);
    s1.Dispaly();
    s1.pop();
    s1.Dispaly();
    s1.pop();
    s1.Dispaly();
    s1.pop();
    s1.Dispaly();
    return 0;
}