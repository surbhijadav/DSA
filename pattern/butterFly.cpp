#include <iostream>
using namespace std;

void printButterfly(int n){
  // upper part 
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*" ;
    }
    for (int k = 1; k <= 2*(n-i) ; k++)
    {
        cout << " ";
    }
    for (int l = 0; l <= i-1; l++)
        {
          cout << "*"; 
        }
    cout << endl;
  } 

// Bottom part 
for (int a = n; a >= 1; a--)
{
  for (int b = 0; b < a; b++)
  {
    cout << "*" ;
  }
  for (int c = 0; c < 2*(n - a); c++)
  {
    cout << " ";
  }
   for (int d = 0; d < a; d++)
  {
    cout << "*" ;
  }
  
  cout << endl;
}
}

int main()
{
  printButterfly(4);
  return 0;
}


