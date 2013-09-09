/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem010 {
    public static void euler010()
    {
        long result = 0;
        for(int i=2; i<2000000; i++)
        {
            if(isPrime(i))
            {
                result += i;
            }
        }
        System.out.println(result);
    }
    public static boolean isPrime(int n)
    {
        if(n==2) return true;
        if(n%2==0) return false;
        if(n>3 && n%3==0) return false;
        if(n>5 && n%5==0) return false;
        boolean isPrime = true;
        for(int j=2; j<= Math.sqrt(n); j++)
        {
            if(n%j==0) isPrime = false;//if its not prime (has factors)
        }
        return isPrime;
    }
}
