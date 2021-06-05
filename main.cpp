// C++ program to arrange the balls of same color together

#include<iostream>

using namespace std;

// Function to sort the input array
// the array is having the values {0, 1, 2}
// 0 implies Red, 1 implies White, 2 implies Blue

void Algo(int arr[], int arr_size)
{
    int low = 0;
    int high = arr_size - 1;
    int mid = 0;

//Iterate till all elements in array get sorted
    while (mid <= high)
    {
        switch (arr[mid])
        {
            //if mid is 0
            case 0: swap(arr[low], arr[mid]);
                    low++;
                    mid++;
                    break;

            //if mid is 1 .
            case 1: mid++;
                    break;

            //if mid is 2
            case 2: swap(arr[mid], arr[high]);
                    high--;
                    break;
        }
    }
}

// Function to print array arrc[]
void printArray(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        if(arr[i]== 0)
        {
            cout <<"R ";
        }
        else if(arr[i]==1)
        {
            cout << "W ";
        }
        else
        {
            cout << "B ";
        }
    }
}

// Main Code
int main()
{
    int n,i;

    cout << "Enter the total number of all balls of 3 different colors of Netherlands Flag : ";

    cin >> n;

    int arr[n];

    char arrc[n+1];

    cout << "\nEnter the order of colors in which you entered the ball : ( R=red B=blue W=white) "<< endl;

    for(i=0;i<n;i++)
    {
        cin >> arrc[i];
    }

    for(i=0; i<n; i++)
    {
        if(arrc[i]=='R')
        {
            arr[i]=0;
        }
        else if(arrc[i]=='B')
        {
            arr[i]=2;
        }
        else
        {
            arr[i]=1;
        }
    }

    cout << "\nArray before running the algorithm :\n";

    printArray(arr, n);

    Algo(arr, n);

    cout << "\nThe balls once arranged in the required order gives the following result : \n";

    printArray(arr, n);

    return 0;

}
