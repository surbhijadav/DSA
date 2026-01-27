#include <iostream>
using namespace std;

int sumNum(int a){
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
       sum += i;
      
    }
    return sum;
}

int main(){
    cout << sumNum(5) << endl;
    return 0;
}