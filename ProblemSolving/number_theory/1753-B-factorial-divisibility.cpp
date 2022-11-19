/*
You are given an integer x and an array of integers a1,a2,…,an. You have to determine if the number a1!+a2!+…+an! is divisible by x!.

Here k! is a factorial of k — the product of all positive integers less than or equal to k. For example, 3!=1⋅2⋅3=6, and 5!=1⋅2⋅3⋅4⋅5=120.

Input
The first line contains two integers n and x (1≤n≤500000, 1≤x≤500000).

The second line contains n integers a1,a2,…,an (1≤ai≤x) — elements of given array.

Output 
In the only line print "Yes" (without quotes) if a1!+a2!+…+an! is divisible by x!, and "No" (without quotes) otherwise.

*/

#include <iostream>


int getFactorial(int num)
{
   int factorial = num;
    for( int i = 1; i<num; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}

int main()
{
    
    int array_size, number, sum = 0;
    
    std::cin >> array_size >> number;
    int array_int[array_size];
    for(int i=0;i<array_size;i++)
    {
        std::cin >> array_int[i] ;
    }

    
    for(int i =0;i<array_size;i++)
    {
       sum+= getFactorial(array_int[i]);
    }

    int numFactorial = getFactorial(number);
    

    if(  sum % numFactorial == 0){
        std::cout << "Yes";
    }else{
        std::cout << "No";
    }
  
    return 0;
}