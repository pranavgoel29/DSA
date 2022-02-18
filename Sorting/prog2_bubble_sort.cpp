#include<iostream>
using namespace std;

void bubblesort(int input[], int n)
{
    for (int i = 0; i < n-1; i++)               
    {
        for (int j = i+1; j < n; j++)
        {
            if(input[i] > input[j]){                 
                int temp = input[i];                 
                input[i] = input[j];
                input[j] = temp;
            }
        }              
    }
}


int main()
{
    system("cls");
    int input[] = {9,5,7,8,4};                  // Initializing the array.
    int arrsize = sizeof(input) / sizeof(input[0]);             // Storing the size of the array in an int type var, here the size would come in bytes which is then divided by sizeof() one element of array which will eventually gives us the length of the array.

    cout<<"Before sort: ";
    for (int i = 0; i < arrsize; i++)               // Array before sorting.
    {
        cout<<input[i]<<" ";
    }
    cout<<"\n"<<endl;

    bubblesort(input, arrsize);                    // Calling the bubblesort() function where we are passing the array and size of the array.

    cout<<"After sort: ";
    // Printing the sorted array.
    for (int i = 0; i < arrsize; i++)
    {
        cout<<input[i]<<" ";
    }
    
}