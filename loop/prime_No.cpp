#include <iostream>
using namespace std;

// Check if a number is prime or not. 
int main(){
    int n = 7;
    bool isPrime = true;
    for (int i = 2; i* i <= n; i++)
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i == 0)
        {
           isPrime = false;
           break;
        }
    }

    if(isPrime == true)
    {
        cout << "Prime no\n";
    } else
    {
        cout << "Non-Prime no\n";
    }
 return 0;   
}