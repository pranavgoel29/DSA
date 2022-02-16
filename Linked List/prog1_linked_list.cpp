// Program to add the node at the beginning of the Linked List.


// Head will always store the address of the first node.
// After running and checking if head is point to NULL or not we will go to next node if it is not NULL.
// Node is storing the data and the address to the next node.

// First we have to create a node either with Struct or Class.
// We will use pointer as node will also store the address of the next node. With an int data too.

// We will define our own NODE datatype in the form of a class.


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

//-----Linked List-----//
void insertathead(node * &head, int data)
{
    if(head==NULL)              // We are checking if head is NULL to check if the node exist in the linked list or not.
    {
        head = new node(data);          // Here we are pointing the head to a value that we have just passed and, hence creating the first node of our linked list and pointing head to it.
        return;
    }
    node * n = new node(data);          // We are creating a new pointer of type node 'n' and assining the new value to it.
    n->next = head;                     // And then in the next of node type will store the value of head which is address of the current node.
    head = n;                           // And similarly head is pointing to 'n'.
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
    node* head = NULL;          // Here we are saying that we are taking a head pointer of datatype node 
                                // it will be pointing to NULL in the beginning.

    insertathead(head, 3);          // here head is null so it will add a new value as 3 and point head to it.
    insertathead(head, 2);          // head is pointing 2 and n is pointing 3
    insertathead(head, 1);          // head is pointing 1 and n is pointing 2
    insertathead(head, 0);          // head is pointing 0 and n is pointing 1

    printll(head);                  // It will just print the whole linked list.
}
