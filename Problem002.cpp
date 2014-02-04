#include <iostream>
using namespace std;

int main() 
{
    int x= 1;
    int y=1;
    int z = 0;
    int result = 0;
    
    while(z<4000000)
    {
        z = (x+y);
        
       if(z%2==0) result += z;
       
       //next iteration
       
       x = y;
       y = z;
    }
    
    cout << result << endl;
}
