// Reversing Linked List Iteratively.
// This method takes less space than recursive reverse.

#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;             // This will store the address of the next node, it is of node datatype.

    node(int data){
        this->data = data;
        next = NULL;            // By default we will keep our next pointer NULL.
                                // And allocate the address to it after we get/store some data in the next node.
    }
};

void insertathead(node * &head, int data)
{
    if(head==NULL)              // We are checking if head is NULL to check if the node exist in the linked list or not.
    {
        head = new node(data);          // Here we are pointing the head to a value that we have just passed and, hence creating the first node of our linked list and pointing head to it.
        return;
    }
    node * n = new node(data);         
    n->next = head;                    
    head = n;                          
}

// ---------- Iterative Reverse ---------- //
void iterativereverse(node *&head){
    node* prev = NULL;
    node* current = head;
    node* temp;

    while(current!=NULL)
    {
        // Store the next node
        temp = current->next;
        // Update the current node
        current->next = prev;

        // Move one step ahead
        prev = current;
        current = temp;
    }
    head = prev;
    return;

}

void printll(node * head){
    while(head != NULL){
        cout<< head->data <<"-->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    system("cls");
    int i;
    node* head = NULL;          // Here we are saying that we are taking a head pointer of datatype node 
                                // it will be pointing to NULL in the beginning.

    insertathead(head, 1);          // here head is null so it will add a new value as 3 and point head to it.
    insertathead(head, 2);          
    insertathead(head, 3);          
    insertathead(head, 4);          

    printll(head);

    // Calling the reverse function
    iterativereverse(head);

    printll(head);
}