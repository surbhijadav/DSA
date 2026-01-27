#include <iostream>
using namespace std;

// WAF to check it a number is prime or not.
void isPrime(int num){
 int count = 0;
 for (int i = 2; i < num; i++)
 {
    if (num % i == 0)
    {
       count++;
    }
 }

    if (count > 0)
    {
        cout << num << "is not prime";
    }
    else
    {
        cout << num << "is prime";
    }
}

int main(){
    isPrime(11);
    return 0;
}


