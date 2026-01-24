#include <iostream>
using namespace std;

// sum of all odd number from 1 to n 
int main(){
    int sum = 0;
    int n = 20;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
}
 cout << "sum:" << sum << endl;
    return 0;
 }
    
// do-while Loop 
int main(){
    int n = 10;
int i = 1;
do
{
    cout << i << " ";
    i++;
} while (i <= n);
    cout << endl;
    return 0;
}




