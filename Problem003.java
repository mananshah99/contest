/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem003 extends Library {
    public static void euler003()
    {
        long num = 600851475143L;
        long largest = 0;
        for (long i = 2; num > 1; i++) {
            if (num % i == 0) {
                if(isPrime(i))
                    largest = i;
                num /=i;
            }
        }
        System.out.println(largest);
    }
}
