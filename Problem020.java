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
public class Problem020 {
    public void euler020()
    {
        BigInteger factorial = BigInteger.valueOf(1);
        for (int i = 1; i <= 100; i++)
            factorial = factorial.multiply(BigInteger.valueOf(i));

        String finalnum = factorial.toString();
        
        long result = 0;
	for (int i = 0; i < finalnum.length(); i++) {
		result += Integer.parseInt(String.valueOf(finalnum.charAt(i)));
	}
	System.out.println(result);
    }
}
