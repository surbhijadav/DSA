#include <iostream>
using namespace std;

// figure out how to find if a number  is power of 2 without any loop.

int powerOfTwo(int num){
    if (num > 0 && (num & (num - 1)) == 0)
{
        cout << num << " is power of 2";
    }
    else{
        cout << num <<" is not power of 2";
    }
    return 0;
}

int main(){
    int  num = 8;
    powerOfTwo(num);
    return 0;
}