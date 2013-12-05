/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem010 extends Library {
    public static void euler010()
    {
        long result = 0;
        for(int i=2; i<2000000; i++)
        {
            if(isPrime(i))
                result += i;
        }
        System.out.println(result);
    }
}
