
#include <iostream>

int main()
{
    std::cout << "=== pointer with variable ===" << std::endl; 
    int a = 10;
    // storing the address of variable "a" in pointer "p"
    // &a refers the address of variable a
    // here we store the address of variable a in pointer p
    int *p = &a;

    // get the adress of variable "a"
    std::cout << &a << std::endl; // using  variable a
    std::cout << p << std::endl;  // using pointer which refer the address of varibale a
    // adding integer value with a pointer or substraction from a pointer is allowed
    // adding two pointer is not allowed
    std::cout << p + 1 << std::endl;  // increasing pointer variable
    std::cout << p - 1 << std::endl;  // decreasing pointer variable


    // get value of variable "a"
    std::cout << a << std::endl; // using variable directly
    std::cout << *p << std::endl; // using ponter of tha address of variable "a" . t is also called dereferencing
   // incrementing or decremention with array base address is not allowed 
   // for example: a++

    std::cout << "=== pointer with array ===" << std::endl;
    // array name itself is a pointer
    // array name store the base address theat means arr[0] of the array
    // for array it is valid that a = &a 
    // but for non-array variable b it is invalid : b = &b
    int arr[] = {1,2,3};
    std::cout << "array base address :" << arr << std::endl;
    // incase of array we can write a[i] = *(a+i)

    std::cout << "array elements using dereferencing operator : " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << *(arr + i) << " ";
    }

    std::cout << "\n" ;

    std::cout << "array elements' addresses: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << (arr + i) << " ";
        // std::cout << &arr[i] << " "; // same result as above line
    }
   

    
}