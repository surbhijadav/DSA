#include <iostream>
using namespace std;

// Calculate sum of digits of a number.
int sumDigit(int num){
   int sum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        sum += lastDig;
    }
    
    return sum;
}


int main(){
    cout << "sum =" << sumDigit(2356) << endl;
    return 0;
}