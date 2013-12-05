/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem015 extends Library {
    public void euler015()
    {
        // n choose k algorithm 
        // for any grid, n is the number of rows* number of columns
        // and k is the number of rows
        int n = 4;
        int k = 2;

        if (k > (n - k)) 
            k = n - k;

        long c = 1;
        for (int i = 0; i < k; i++) {
            c *= n - i;
            c /= i + 1;
        }
        System.out.println(c);
    }
}