// Insert element in the middle of the Linked List.


#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;             // This will store the address of the next node, it is of node datatype.

    node(int data){
        this->data = data;
        next = NULL;            // By default we will keep our next pointer NULL
                                // And allocate the address to it after we get/store some data in the next node.
    }
};

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

void insertinmiddle(node* &head, int data, int pos){
    if(pos==0){                                         // Firstly we are checking if the position is '0' that is if 
                                                        // We want to insert the data or node in the begining of the linked list if i.e., true.
        // Then we are calling the insertathead() funtion as we have made that function to insert the node in the begining of the linked list.
        insertathead(head,data);
    }
    else{                                               // If 'pos' is not 0.
        node * temp = head;                             // We are decraling a new pointer node var so we can store the address of the next node of that pos so we can insert a new one in middle.
        for(int jump=0; jump<pos; jump++){              // Here we are running the loop till that pos-1 as first index is '0'.
            temp->next;                                 // 'temp' is pointing to the next node here of that 'pos'.
        }
        node* n = new node(data);                       // We are declaring a new node 'n' so we can point that to the prev stored node at that 'pos'.
        n->next = temp->next;                           // Here we are copying the next of that 'pos' in the new node 'n'.
        temp->next = n;                                 // We are storing the 'n' node address in 'temp' node 'next' var. So we can point to node 'n' which is newly inserted and node 'n' is pointing to the node which was previously stored at that place.
    }
}

void printll(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    system("cls");
    node* head = NULL;

    insertathead(head,3);
    insertathead(head,2);
    insertathead(head,1);
    insertinmiddle(head, 500, 3);           // Here we are passing head and data that we want at some position which is also passed as a parameter.
    insertathead(head,0);

    printll(head);
}