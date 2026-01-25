#include <iostream>
using namespace std;
// Hollow Diamond Patter 
int main(){
    int count = 5;

    // top 
    for (int i = 0; i < count; i++)
    {
    //    space 
        for (int j = 0; j < count-i-1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            // space 
            for (int j = 0; j < 2*i-1; j++)
            {
               cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

// bottom
for (int i = 0; i < count-1; i++)
{
    // spaces 
    for (int j = 0; j < i+1; j++)
    {
        cout << " ";
    }
    cout << "*";

    if (i != count-2)
    {
          // spaces 
       for (int j = 0; j < 2*(count-i)-5; j++)
       {    
           cout << " ";
       }
       cout << "*";
    }
    cout << endl;
}
    return 0;
}

