// To delete a node from the 'Beginning' of the Linked List.


#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data = data;
            next = NULL;
        }
};

// Function to create a Linked List
void insertathead(node* &head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    else{
        node *n = new node(data);
        n->next = head;
        head = n;
    }
}


// Function to delete a node from the 'Beginning' of the Linked List.

void deleteathead(node* &head){
    if(head!=NULL){                             // We are checking if Linked List is empty or not.
        node* temp = head;                      // We are creating a 'temp' node which stores the value of 'head'.
        head = head->next;                      // Changing head value to 'next' node, which removes/disconnects the previous node from the linked list.
        free(temp);                             // Finally freeing the space which was contained by the 'head' node which was changed to 'temp'.
    }
}



// Function to display the Linked List
void printll(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    system("cls");
    node* head = NULL;

    insertathead(head, 3);
    insertathead(head, 2);
    insertathead(head, 1);
    insertathead(head, 0);

    printll(head);                             // Printing the Linked List before deletion.
                                               // 0-->1-->2-->3-->

    deleteathead(head);                        // Deleting the node by calling the deletion function.

    printll(head);                             // Printing the Linked List after deletion.
                                               // 1-->2-->3-->
}