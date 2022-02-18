#include<iostream>
using namespace std;

void bubblesort(int input[], int n)
{
    // for (int i = 0; i < n-1; i++)               
    // {
    //     for (int j = i+1; j < n; j++)            // Brute force method.
    //     {
    //         if(input[i] > input[j]){                 
    //             int temp = input[i];                 
    //             input[i] = input[j];
    //             input[j] = temp;
    //         }
    //     }              
    // }

    for (int i = 0; i < n-1; i++)               
    {
        for (int j = 0; j < n-1-i; j++)                 // In this the time complexity is decreased from the brite force method.
        {
            if(input[j] > input[j+1]){                 
                int temp = input[j];                 
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }              
    }
}


int main()
{
    system("cls");
    int n;
    cout<<"Size of array: ";
    cin>>n;

    int input[n];// = {9,5,7,8,4};                  // Initializing the array.
    //int arrsize = sizeof(input) / sizeof(input[0]);             // Storing the size of the array in an int type var, here the size would come in bytes which is then divided by sizeof() one element of array which will eventually gives us the length of the array.


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

    bubblesort(input, n);                    // Calling the bubblesort() function where we are passing the array and size of the array.

    cout<<"\nAfter sort: ";
    // Printing the sorted array.
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<" ";
    }
    
}