// Program to demonstrate 'Selection Sort'

#include<iostream>
using namespace std;

void selectionsort(int input[], int n)
{
    for (int i = 0; i < n-1; i++)               // This will run till 'n-1' where 'n' is the size of the array, because the element which will be left at last will be the greatest among all other element.
    {
                                                // Finding minimum element in the array.
        int min = input[i], minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if(input[j] < min){                 // Here we are checking if the element of the array is smaller than the previously set min element of the array.
                min = input[j];                 // If yes then we are changing the val of min to that element which is found to be smaller.
                minindex = j;                   // We are also storing the index of that element, so we can swap with it in the future.
            }
        }
        
        // Swapping the min element with the first element and so on.
        int temp = input[i];                    // Taking an 'temp' int var to store the first element.
        input[i] = input[minindex];             // Here we are changing the first element with the smallest element that is found in the array.
        input[minindex] = temp;                 // Now, we are changing the element at the 'pos' of the smaller element with the first element.

    }
    
}

int main(){
    system("cls");
    int input[] = {9,5,7,8,4};                  // Initializing the array.
    int arrsize = sizeof(input) / sizeof(input[0]);             // Storing the size of the array in an int type var, here the size would come in bytes which is then divided by sizeof() one element of array which will eventually gives us the length of the array.

    selectionsort(input, arrsize);                    // Calling the selectionsort() function where we are passing the array and size of the array.


    // Printing the sorted array.
    for (int i = 0; i < arrsize; i++)
    {
        cout<<input[i]<<" ";
    }
    
}