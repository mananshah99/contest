/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem007 {
    public static void euler007() 
    {
        int count=0;
        int num=2;
        while(true)
        {
            if(isPrime(num)) count++;
            if(count==10001) 
            {
                System.out.println(num); 
                System.exit(1);
            }
            num++;
        }
    }
    public static boolean isPrime(int n)
    {
        if(n==2) return true;
        if(n%2==0) return false;
        if(n>3 && n%3==0) return false;
        if(n>5 && n%5==0) return false;
        for(int j=2; j<= (int)n/2; j++)
        {
            if(n%j==0) return false;//if its not prime (has factors)
        }
        return true;
    }
}
