/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.math.BigInteger;

/**
 *
 * @author Manan
 */
public class Problem020 extends Library {
    public void euler020()
    {
        String finalnum = factorial(100);
        
        long result = 0;
	for (int i = 0; i < finalnum.length(); i++) 
		result += Integer.parseInt(String.valueOf(finalnum.charAt(i)));
	System.out.println(result);
    }
}
