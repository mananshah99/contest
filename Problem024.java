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
public class Problem024 extends Library 
{
    public static void euler024() {
       System.out.println(new BigInteger(permute("0123456789").get(999999)));
    }
}
