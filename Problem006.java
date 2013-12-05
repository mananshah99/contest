/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem006 extends Library {
    public static void euler006() 
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
        
        System.out.println(result2-result1);
    }
}
