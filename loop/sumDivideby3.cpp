#include <iostream>
using namespace std;

// sum of all numbers from 1 to n which are divisible by 3.
int main(){
    int sum = 0;
    int n = 10;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
}
 cout << "sum of digit that diviable by 3:" << sum << endl;
    return 0;
 }

