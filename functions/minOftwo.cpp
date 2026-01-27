#include <iostream>
using namespace std;


// min of 2 numbers 
int min(int a,int b){
    if (a < b)
    {
        cout << "A is min";
        return a;
    }
    else
    {
        cout << "B is min";
        return b;
    }
}

int main() {
    cout <<min(4,5) <<endl;
    return 0;
}