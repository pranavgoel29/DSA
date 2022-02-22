// Program to print 'i' th index element of the Linked List.

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
    node * n = new node(data);         
    n->next = head;                    
    head = n;                          
}

void printll(node * head){
    while(head != NULL){
        cout<< head->data <<"-->";
        head = head->next;
    }
    cout<<endl;
}

void printi(node *head, int i)                                  // Passing index and index 'i' as the arguments.
{
    int count = 0;                                              // Taking a count var.
    while(head != NULL){                                        // Checking if more elements are present in the Linked List.
      if(i==count){                                             // Checking if index is equal to count which should be true when we read that index.
        cout<<"Element at index "<<i<<": "<<head->data;         // Printing the element at index 'i'.
        break;
      }
      head = head->next;                                        // Pointing head to next till we reach out desired index.
      count++;                                                  // Incrementing till the if condition is not true and head does not reach null.
    }
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

    printll(head);                  // It will just print the whole linked list.

    cout<<"\nEnter the index of element you want: ";
    cin>>i;

    printi(head, i);
}
