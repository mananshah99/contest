/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem001 extends Library {
    public static void euler001() 
    {
        int sum = 0;
        for (int i=1; i < 1000; i++) 
            if (i%3 == 0 || i%5 == 0) sum += i;
        System.out.println(sum);
    }
}
