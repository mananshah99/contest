#include <iostream>
using namespace std;

int MAX = 1000;

int main()
{
  int total = 0;
     for(int i = 1; i < MAX; i++) 
     {
         if (0 == i%3 || 0 == i%5)
         {
            total += i;
         }
     }
    cout << total << endl;
}