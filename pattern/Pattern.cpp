#include <iostream>
using namespace std;
// Square Pattern 
// Numbers 
// int main(){
//     int n = 4;
//     for(int i=1;i<=n; i++){
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// star 
// int main(){
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 0; j < n; j++)
//        {
//         cout << "*";
//        }
//        cout << endl;
//     }  
// }

// Alphabet 
// int main(){
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// number continue 
// int main(){
//     int n= 3;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << num << " ";
//             num++;  
//         }
//         cout << endl;
//     } 
// }

    // alphabet continue 
    // int main(){
    //     int n = 3;
    //     char ch = 'A';
    //     for (int i = 0; i < n; i++)
    //     {
    //        for (int j = 0; j < n; j++)
    //        {
    //         cout << ch ;
    //         ch += 1;
    //        }
    //        cout << endl;
    //     } 
    // }

// Triangle Pattern 
    // Easy with stars 
// int main(){
//    int a = 40;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//            cout << "*";
//         }
//         cout << endl;
//     }
//    return 0; 
// }

// Easy with numbers(same in line)
// int main(){
//     int n = 5;
//     int print=1;
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 0; j < i+1; j++)
//        {
//             cout << print;
//        }
//        cout << endl;
//        print++;
//     }
//     return 0;
// }

// Easy with character(same in line)
// int main(){
//     int n = 5;
//     char ch= 'A';
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 0; j < i+1; j++)
//        {
//             cout << ch;
//        }
//        cout << endl;
//        ch++;
//     }
//     return 0;
// }

// Easy with numbers(incresed in line )
// int main(){
//     int count = 5;
//     for (int i = 0; i < count; i++)
//     {
//         int num = 1;
//         for (int j = 0; j < i+1; j++)
//         {
//             cout << num;
//             num++;
//         }
//         cout << endl;
//     }  
// }

// Easy with numbers(Reversed num triangle )
// int main(){
//     int count = 5;
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i+1; j > 0; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Floyd's Triangle (NUmber)
// int main(){
//     int count = 5;
//     int num = 1;
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i+1; j > 0; j--)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Floyd's Triangle (NUmber)
// int main(){
//     int count = 5;
//     char alpha = 'A';
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i+1; j > 0; j--)
//         {
//             cout << alpha << " ";
//             alpha+=1;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// INVERTED TRIANGLE PATTERN 
// reverse number 
// int main(){
//     int count = 5;
//     for (int i = 0; i < count; i++)
//     {
//        for (int j = 0;j < i; j++)
//        {
//          cout << " " ;
//        }
//          for (int k = 0; k < count-i; k++)
//          {
//             cout << (i+1);
//          }
//        cout << endl;
//     }   
// }


// reverse Alphabet 
// int main(){
//     int count = 5;
//      char ch = 'A';
//     for (int i = 0; i < count; i++)
//     {
       
//        for (int j = 0;j < i; j++)
//        {
//          cout << " " ;
//        }
//          for (int k = 0; k < count-i; k++)
//          {
//             cout << ch;
           
//          }
//        cout << endl;
//         ch+=1;
//     }      
// }

// PYRAMID pattern 
//  numbers pyramid 
// int main(){
//     int count = 4;
//     for (int i = 0; i < count; i++)
//     {
//         spaces: n-i-1
//         for (int j = 0; j < count-i-1; j++)
//         {
//             cout << " ";
//         }
//         num1 : i+1
//         for (int k = 1; k <= i+1; k++)
//         {
//            cout << k;
//         }
//         num2 :
//         for (int l = i; l > 0; l--)
//         {
//             cout << l;
//         }
//         cout << endl;
//     }
// }

