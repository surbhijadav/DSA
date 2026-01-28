// binary to Decimal 

#include <iostream>
using namespace std;

int binTodecimal(int binNum){
    int ans=0,pow = 1;

    while (binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans; //decimal form
}


int main(){
    int binary = 101;
    cout << binTodecimal(binary) <<endl;

    return 0;
}