#include <iostream>
using namespace std;

// in video 
int main(){
    int nums[] = {5,15,22,1,-15,24};
    int size = 6;

    int smallest = INT_MAX;
    int biggest = INT_MIN;

    // for(int i= 0; i< size; i++){
    //     if(nums[i] < smallest){
    //         smallest =nums[i];
    //     }
    // }

// short method 
    for(int i= 0; i< size; i++){
        smallest = min(nums[i],smallest);
        biggest = max(nums[i],biggest);
    

        for(int i= 0; i< size; i++){
        if(nums[i] < smallest){
            smallIndex =i;
        
    

    for(int i= 0; i< size; i++){
        if(nums[i] > biggest){
            bigIndex =i;

        cout << "smallest index =" << smallIndex << endl; 
        cout << "biggest index =" << bigIndex << endl; 
        }
    }}}
    
    

    cout << "smallest =" << smallest << endl; 
    cout << "biggest =" << biggest << endl; 


}}