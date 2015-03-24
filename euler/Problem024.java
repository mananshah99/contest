/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem024 extends Library 
{
    public static void euler024()
    {
        permutation("", "0123456789");
    }  
    
    //modified version of permutation in Library
    static int count = 1;
    private static void permutation(String prefix, String str) 
    {
        int n = str.length();
        
        //if n is 0 we have a permutation (which is prefix)
        if (n == 0) {if(count==1000000){ System.out.println(prefix); System.exit(1);} count++;}
        else 
        {
            for (int i = 0; i < n; i++){
                permutation(prefix + str.charAt(i), str.substring(0, i) + str.substring(i+1, n));
            }
        }
    }
}