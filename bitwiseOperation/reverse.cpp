#include <iostream>
using namespace std;

//  WAF to reverse an integer N.
int reverse(int num){
    int reverseNum  = 0;
   while(num > 0){
     int last = num %10;  
    reverseNum = reverseNum * 10 + last;
    num = num / 10;
    
   }
    return reverseNum;
}

int main(){
    int num = 1234; 
    int ans = reverse(num);
    cout << "reverseNum" << ans;
    return 0;
}