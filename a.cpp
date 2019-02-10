#include <iostream>
using namespace std;

// Generic Programming - Ignore 

class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(){
        next = NULL;
    }

};

class LinkedList{
    // Head + Circles inside linked with each other
    public:
    // Head -> Node type ptr
    Node * head;
    Node * tail;

    // Construct
    LinkedList(){
        head = NULL;
        tail = NULL;
    } 
    // Circles inside linked with each other
    // Rules how circles will be linked

    // Insert
    void insert(int value){
       // If 1st Node is added
       Node * temp = new Node; 
       // Insert value in the node
       temp->data = value;
       // 1st Node only.
       if(head == NULL){
            head = temp;
       }
       // Any other Node only.
       else{
            tail->next = temp;
       }
       tail = temp;
    } 

    void insertAt(int pos, int value){
	// Create a node
        Node * temp = new Node;
        temp -> data = value;
        // Reach the place before the pos
        Node * current = head;
        int i =1;
	// Update the code for 1st position
	if (pos==1){
		temp -> next = current;
		head = temp;
	}	
	else{
		int i =1;
		while(i < pos-1){
			if(current -> next == NULL){
				cout<<"Linked List does not have that many elements"<<endl;
				break;
			}
			else{
			i++;
			current = current->next;
			}
		}
		if(current -> next != NULL){
		// Moving ptrs like magic ! if not head
		temp->next = current->next;
		current->next = temp;
		}
	}
    }

    // Deletion of last element
    void delet(){
        // store the tail in temp
        Node * temp ;
        // before tail has to point to null
        Node * current = head;
        while(current->next->next != NULL){
            current = current->next;
        }
	temp = current->next;
        current->next = NULL; 
	
        // update tail
        tail = current;
        // delete temp
         delete temp;
    }
	void deleteat(int pos){
		//storing data of the head
		Node * current = head ;
		//for 1st position
		if(pos==1){
			head=current->next;
			delete current;
		}
		else{
			//finding twh position to delete
			int i=1;
			while(i<pos-1)
				{
				if(current -> next == NULL){
					cout<<"Linked List does not have that many elements"<<endl;
					break;
				}
				else{
				i++;
				current  = current-> next;
				}
			}
			if(current -> next != NULL){
				//storing the position to delete
				Node * del = current -> next;
				//pointing previous circle to next of the del(that we want to delete circle)
				current -> next = del -> next;
				delete del;
			}
		}	
      }
	//count
	int count(){
	Node * current = head;
	int count=0;
        while(current != NULL){
            count++;
            current = current->next;
        }
        cout <<"Linked list have "<<count<<" elements"<< endl;
	return count;
    }
    // Display
    void display(){
        Node * current = head;
        while(current != NULL){
            cout << current->data << "->";
            current = current->next;
        }
        cout << endl;

    }
};


/*int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(5);
    l1.insert(1);
	l1.insert(1);
	l1.display();
	l1.delet();
    l1.display();
	l1.delet();
    l1.display();
    /*l1.deleteat(3);
    l1.display();
    l1.insertAt(3,7);
    l1.display();
    l1.count();
    return 0;
}
*/

