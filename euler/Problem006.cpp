#include<iostream>
using namespace std;

int main()
{
	{
        //sum of squares of first 100 natural numbers
        int result1 = 0;
        for(int i=1; i<=100; i++)
        {
            result1 += ((i)*(i)); //square of number
        }
        //square of sum of first 100 natural numbers
        int result2 = 0;
        for(int j=1; j<=100; j++)
        {
            result2+=j;    
        }
        result2 *= result2; //square of result
        
        int finalresult=0;
        finalresult = result2-result1;
        
        System.out.println(finalresult);
    }
}