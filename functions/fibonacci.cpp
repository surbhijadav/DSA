#include <iostream>
using namespace std;

//  WAF to print nth Fibonacci.

void fibonacci(int f){
    int sum = 0;
    int a = 0,b=1,c;
    for (int i = 2; i <= f; i++)
    {
        c = a +b;
          a=b;
          b=c;
    }

    cout << f <<"fibonacci is" << c;
}

int main(){
    fibonacci(10);
    return 0;
}