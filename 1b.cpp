#include<iostream>
#include "a.cpp"
using namespace std;
class Queues{
    public:
    Node * head;
    Node * tai;
    LinkedList l1;
    Queues(){
        head=l1.head;
        tai=l1.tail;
    }
    //pushes at top
    void enqued(int value){
        // void insertAt(int pos, int value){
        l1.insertAt(1,value);
        //top i snew head
        head = l1.head;
    }
    //delete at top
    void dequed(){
        //void deleteat(int pos){
           l1.deleteat(l1.count());
        //top = new head
        tai=l1.tail;
    }
    void deee(){
        l1.delet();
        head = l1.head;
        tai=l1.tail;
    }
    bool isEmpty(){
        if(head==NULL) return true;
        return false;
    }
    int size(){
        return l1.count();

    }
    void Dispaly(){
        l1.display();
    }
};
int main(){
    Queues q1;
    for(int i=0;i<5;i++){
        q1.enqued(i);}
	    q1.Dispaly();
	    q1.dequed();
	    q1.Dispaly();
	    q1.deee();
	    q1.Dispaly();
		q1.deee();
	    q1.Dispaly();
	    cout<<q1.size()<<endl;
	    q1.isEmpty();
	    q1.deee();
	    q1.Dispaly();
	    return 0;
	}
