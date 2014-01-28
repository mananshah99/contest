/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */

//not finished
public class Problem045 extends Library {

    public static void euler045()
    {
        double result;
        int i = 150;
        while (true) 
        {
            i++;
            result = i * (2 * i - 1);
            if (isPentagonal(result)) {
                System.out.println(Double.toString(result));
                break;
            }
        }

    }
    
    public static boolean isPentagonal(double x) {
        return (int)((Math.sqrt(1 + (24 * x)) + 1.0) / 6.0) == (Math.sqrt(1 + (24 * x)) + 1.0) / 6.0;
    }
}
