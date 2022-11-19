#include <iostream>

int main()
{
    // for storing matrix type data we use two dimentional array 
    // 1 2 3
    // 4 5 6
    // 9 4 6
    // two dimentional array is also called array of arrays

    // 2D array initialization
    // data_type array_name[number_of_rows/number_of_1D_array][number_of_column/size_of_1D_arrays] = { }

    //int arr[2][3] = { {1,2,3} , {4,5,6} };
    int arr[2][3] = { 1,2,3,4,5,6 }; // same as above 

    std::cout << "printing 2D array: " << std::endl;
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //std::cout << arr[i][j]  <<" " ;
            std::cout << arr[i][j]  << '-'<< &arr[i][j] <<" " ;
        }
        std::cout << '\n';
        std::cout << "pinter to first element of array:" << &arr[0][0] << '\n';
        std::cout << "pinter to first element of array:" << arr << '\n';
        std::cout << "pinter to first element of array:" << *arr << '\n';
        std::cout << "pinter to first element of array:" << &arr << '\n';
        std::cout << "pinter to first element of array:" << &arr << '\n';
        
        
       
    }
    
    return 0;
}