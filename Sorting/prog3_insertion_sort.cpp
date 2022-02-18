// Program to demonstrate 'Insertion Sort'.
// In this we do shifting of elements not swapping.

#include<iostream>
using namespace std;


void insertionsort(int arr[], int n)                    // Here we are taking 'arr[]' and sizeof array 'n' as input/parameter.
{
    // Let 'i' be current position from which we are starting.
    // And j = i-1 as we are starting from the second element of the array.
    // We are running the outter loop till 'n' means when 'i' is 'n' we will come out of the loop.



    // Example input

    // array = {7, 4, 8, 2, 1}              Size of the array is 5.
    // i = 1    i.e.,   current = 4
    // We are taking 'j' as     j = i-1;  i.e.,  j=0, when we are i = 1

    // We will now run the inner loop till 'j>=0' that means 
    // We are comparing the current element with all the prev elements of array till it reaches index '0'.
    // If that condition is false then we are breaking out of the loop.
    // At last we are putting the value of the 'current' var at the right place.

    // After First cycle

    /*
    arr[i] = current
    current = 4;            i=1
    arr[j] = 7;             j = i-1 = 0
        condition is true
    so, arr[j+1] = arr[j], i.e.,     arr[1] = 7;
    after this loop will be completed as it has been fully executed.

    At last arr[j+1] = current      where, current = 4;     and 'j' is after the changes of val of 'j'
    arr[0] = current = 4;
    */

   

    for (int i = 1; i < n; i++)                         
    {                                                           
        int current = arr[i];
        int j;
        for ( j = i-1; j>=0; j--)
        {
            if(current<arr[j])                      // Here we are comparing the current element with the prev elements till '0' index in the array.
            {
                arr[j+1] = arr[j];                  // Shifting the values after finding the proper place to insert the smaller element.
            }
            else{
                break;                              // Breaking the loop when we can't find the smaller element than the current element.
            }
        }
        arr[j+1] = current;                         // Placing the current element in the correct place that will be found after running the inner loop.
    }
    
}


int main(){
    system("cls");

    int n;
    cout<<"Size of array: ";
    cin>>n;

    int input[n];

    cout<<"Input your array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }

     cout<<"Before sort: ";
    for (int i = 0; i < n; i++)               // Array before sorting.
    {
        cout<<input[i]<<" ";
    }

    insertionsort(input, n);                    // Calling the insertionsort() function where we are passing the array and size of the array.

    cout<<"\nAfter sort: ";
    // Printing the sorted array.
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<" ";
    }
}