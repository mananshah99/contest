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
public class Problem016 extends Library {
    public void euler016()
    {
        String finalnum = BigInteger.valueOf(2).pow(1000).toString();
        
        long result = 0;
	for (int i = 0; i < finalnum.length(); i++) 
		result += Integer.parseInt(String.valueOf(finalnum.charAt(i)));
	System.out.println(result);
    }
    
}
