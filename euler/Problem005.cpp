#include <iostream>
using namespace std;

int main()
{
        int i = 20;
        int count = 0;
        while(true)
        {
            for(int j = 1; j<=20; j++)
            {
                if(i%j!=0)
                {
                    break;
                }
                else count++;
            }
            if(count==20)
            {
                cout << i << endl;
                return 0;
            }
            else
            {
                count=0;
                i++;
            }
        }
    }