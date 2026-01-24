#include <iostream>
using namespace std;

 Find the character lowercase or uppercase 
int main(){
    char A;
    cout << "enter the character";
    cin >> A;

    // if (A >= 65 && A <= 90)
    if (A >= 'a' && A <= 'z'){
        cout << "Character is LOWERCASE";
    }else {
        cout << "Character is UPPERCASE";
    }
}