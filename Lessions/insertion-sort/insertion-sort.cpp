#include <iostream>

// function to print an array
void printArray(int array[], int size) 
{
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << " " << std::endl;
}


void compareAndSwap(int arr[],int i)
{

    if(arr[i+1] < arr[i])
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
        if(i!=0)
        {
            compareAndSwap(arr,i-1);
        }    
    }
 
}

int main()
{
    int arr[] = { 3 , 7, 4, 2, 5, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr,size);

    for(int i = 0; i < size-1; i++)
    {
        compareAndSwap(arr,i);
    }

    printArray(arr,size);
    return 0;
}