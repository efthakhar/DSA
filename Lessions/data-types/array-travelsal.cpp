#include <iostream>

void printArray(int array[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << " " << std::endl;
}

int main()
{
    int size;
    

    std::cout << "enter the array size" << std::endl;
    std::cin >> size;
    int arr[size];

    std::cout << "enter array elements" << std::endl;
    for (int i = 0; i < size; i++) 
    {
        std::cin>>arr[i];    
    }

    std::cout << "==============" << std::endl;
    std::cout << "Constructed array is:" << std::endl;
    printArray(arr,size);


}