void printArrayc(int arr[], int arr_size)
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

