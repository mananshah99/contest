/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem007 extends Library {
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
}
