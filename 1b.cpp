#include<iostream>
#include "a.cpp"
using namespace std;
class Queues{
    public:
    Node * top;
    Node * bottom;
    LinkedList l1;
    Queues(){
        top=l1.head;
        bottom=l1.tail;
    }
    //pushes at top
    void enqued(int value){
        // void insertAt(int pos, int value){
        l1.insertAt(1,value);
        //top i snew head
        top = l1.head;
    }
    //delete at top
    /*void dequed(){
        //void deleteat(int pos){
           l1.deleteat(l1.count());
        //bottom=new tail
        tai=l1.tail;
    }*/
    void dequed(){
	if(top==NULL)
		cout<<"no more elements"<<endl;
        else{
	l1.delet();
       // head = l1.head;
        bottom=l1.tail;}
    }
    bool isEmpty(){
        if(top==NULL) return true;
	else
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
	    q1.dequed();
	    q1.Dispaly();
	q1.dequed();
	    q1.Dispaly();
	q1.dequed();
	   q1.Dispaly();
	q1.dequed();
	   q1.Dispaly();
	    cout<<q1.size()<<endl;
	   if( q1.isEmpty()==1)
			cout<<"TRUE"<<endl;
	else
		cout<<"FALSE"<<endl;
	    return 0;
	}
