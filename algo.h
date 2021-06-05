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

