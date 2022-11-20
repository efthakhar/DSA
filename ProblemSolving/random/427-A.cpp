#include <iostream>
using namespace std;



int main()
{
    int size;
    cin >> size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    int untreated = 0;
    int employed = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>=1){
            employed += arr[i];
        }

        if(arr[i] == -1 && employed == 0){
            untreated++;
        }
        if(arr[i] == -1 && employed >= 1){
           // untreated--;
            employed--;
            
        }

       // cout << untreated << "==";
        
    }

   
    cout << untreated ;
   

}