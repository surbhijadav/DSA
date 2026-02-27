#include <iostream>
#include <vector>
using namespace std;

int main(){
    //  vector<int> vec
    // vector<int> vec = {1,2,3};
    // vector<int> vec(3,0);
    // cout << vec[0];
    // cout << vec[1];
    // cout << vec[2];

// For-Each Loop
    // Number vector
    vector<int> vec(5,0);
    // size of vector
    cout <<"Size =" << vec.size() << endl;

    for (int i: vec) {
        cout << i << endl;   
    }

    // Character vector
    vector<char> chr = {'A','B','C','D'};
    cout <<"Size =" << chr.size() << endl;
    for (char i: chr) {
        cout << i << endl;
    }

     // push_back
    vector<int> vc;
    cout <<"Size =" << vc.size() << endl;
    vc.push_back(25);
    vc.push_back(5);
    vc.push_back(6);
    vc.push_back(8);

    // pop_back
    for (int i:vc){
    cout << i << endl;
    }
    vc.pop_back();
        for (int i:vc){
    cout << i << endl;
    }

    // front
    cout <<"front =" << vc.front() << endl;

    // back
    cout <<"back =" << vc.back() << endl;
    cout <<"Size =" << vc.size() << endl;

    // at
    cout <<"value at 0 =" << vc.at(0) << endl;
    cout <<"value at 1 =" << vc.at(1) << endl;

// static and dynamic allocation 
    vector<int> vc2;
    vc2.push_back(1);
    vc2.push_back(2);
    vc2.push_back(3);


    cout <<"size =" << vc2.size() << endl;
    cout <<"capacity =" << vc2.capacity() << endl;

    return 0;
}