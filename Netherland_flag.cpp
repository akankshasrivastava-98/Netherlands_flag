// C++ program to arrange the balls of same color together

#include<iostream>
#include "algo.h"
#include "print1.h"
#include "print2.h"

using namespace std;

// Main Code
int main()
{
    int n,i;

    cout << "Enter the total number of all balls of 3 different colors of Netherlands Flag : ";
    cin >> n;

    int arr[n];
    char arrc[n+1];

    cout << "\nEnter the colors in which order you want : (R=red, W=white, B=blue) "<< endl;

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

    cout << "\nArray before running the algorithm with assigned number (Red=0, White=1, Blue=2) : ";

    printArray(arr, n);

    Algo(arr, n);

    cout << "\nArray after running the algorithm in sorted order : ";

    printArray(arr, n);

    cout << "\nThe balls once arranged in the required order gives the following result : \n";

    printArrayc(arr,n);

    return 0;
}
