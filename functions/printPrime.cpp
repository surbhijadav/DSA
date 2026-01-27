#include <iostream>
using namespace std;

//  WAF to print all prime numbers from 1 to N.
void printPrime(int n){
    for (int i = 2; i <= n; i++)
    {
       int count = 0;
       for (int j = 1; j <= i; j++)
       {
        if (i % j == 0)
        {       
            count++;
        }
        
       }
       
        if (count == 2)
        {
           cout << i << " ";
        }
    }
}

int main(){
    printPrime(50);
    return 0;
}



























