// K-Reversing Linked List.
// Program to reverse every K-nodes.



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

// ---------- K-Reverse ---------- //
node* kreverse(node *head, int k){
    // Base Case
    if(head == NULL)        // Checking if linked list is empty or not.
        return NULL;
    
    // Reverse  the first K nodes;
    node* prev = NULL;              // Taking a new node named prev as NULL.
    node* current = head;           // Taking a new node named current to store the value of head to use for reversal.
    node* temp;
    int count = 1;

    // This loop will run k-times as we have declared a count variable and we are checking if it is smaller than or equal to K.
    // And if it is then we are stopping the loop according to it's while condition.

    while(current!=NULL && count <= k)
    {
        // Store the next node
        temp = current->next;
        // Update the current node
        current->next = prev;

        // Move one step ahead
        prev = current;
        current = temp;
        count++;                                // After every operation we are just updating our count variable to keep track of the remaining node from K.
    }
    
    // It will check for if temp is having any node left or we can say if there are any nodes left after reversing linked list for k-nodes after one time
    // And if there are then we are calling the function again and after that we are updating out value for head->next 
    // Which will eventually link all the fragments which have been reversed.

    if(temp!=NULL){
        head->next = kreverse(temp,k);      // Keep in mind that this is a recursive call so all the other part of linked list will be getting attached to just take a close look.
    }

    return prev;

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

    // We have to update the head too as we are returning a replacement for head after updating our linked list.
    head = kreverse(head,2);            // Calling the k-reverse function

    printll(head);
}