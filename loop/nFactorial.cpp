#include <iostream>
using namespace std;

// Print Factorial of a number N. 
int main(){
int factorial= 1;
int n=10;
for (int i=1; i<=n; i++){
    factorial*=i;
}
 cout << factorial << endl;
    return 0;
}
