/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem218 extends Library
{
   public static void euler218()
   {
	//Triple is m, n, and p
	//p must be less than 10^8	  
      
      long MAX = 100000000; 
      
      while(true)
      {
         int u = 1;
         for (long v = u+1; true; v+=2)
         {
            if (gcd(u, v) > 1) continue;

			//first iteration of Euler's formula
			
            long m = 2 * u * v;
            long n = u*u - v*v;
            n = n<0 ? -n : n;
            long p = u*u + v*v;
            
            if (p > MAX)
            {
               if (v == u + 1) //end of loops
               	return;
               break;
            }

            //second iteration of Euler's formula
                        
            long a = 2 * m * n;
            long b = m * m - n * n;
            b = b<0 ? -b  : b;
            long c = m*m + n*n;

            // We know our triplet is divisible by 4 and 3, so to check if it's divisible 
            // by 84, we check divisibility by 7
            
            if (a % 7 != 0 && b % 7 != 0) System.out.println(a + " " + b + " " + c);
         }
         u++;
      }
   }
   
   private static long gcd(long a, long b)
   {
   		//Euclid's algorithm
    	while (b > 0)
    	{
        	long temp = b;
        	b = a % b; 
        	a = temp;
    	}
    	return a;
   }
}
