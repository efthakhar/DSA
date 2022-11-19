#include <iostream>
using namespace std;

void printArray(string array[], int size) 
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << endl;
  }
  
}


int main()
{
    int test_case;
    cin >> test_case;
    string all_results[test_case] = {};
    char question = 'Q';
    char answer = 'A';
    

    for(int i=0; i<test_case; i++)
    {   
        int answered = 0;
        int questions = 0;

        int size ;
        cin >> size;
        string dialog;
        cin >> dialog;

       
        for(int i=0; i<dialog.length(); i++)
        {     
           if(dialog.at(i) == question ) 
           {
              questions++;
           }
           if(dialog.at(i) == answer && questions>answered)
           {
                answered++;
           } 
 
        }

        string result = (answered == questions) ? "Yes":"No";
        all_results[i] = result;
        
        

    }

    
    printArray(all_results,test_case);

     
}