#include <iostream>

// function to print an array
void printArray(int array[], int size) 
{

  for (int i = 0; i < size; i++) {
    std::cout << array[i] << " ";
  }

  std::cout << " " << std::endl;
 
}

int main()
{
    
    int arr[] = { 9, 3, 4, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,size);
    
    for(int i = 0; i < size; i++)
    {
      int lowest_index = i;

      for( int j = i+1; j < size; j++)
      {

          if(arr[j] < arr[lowest_index])
          {
            lowest_index = j;  
          } 
       
      }

      int temp = arr[i];
      arr[i] = arr[lowest_index];
      arr[lowest_index] = temp;
      
    }
    
    printArray(arr,size);
    return 0;

}
