package projecteuler;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Manan
 */
public class Problem040 extends Library
{
    public static void euler040()
    {
        String s = "";
        for(int i=1; i<1000000; i++)
        {
            s += i;
            if(s.length()>999999) break;
        }
        long result = 1;
        result *= Integer.parseInt(Character.toString(s.charAt(0)));
        result *= Integer.parseInt(Character.toString(s.charAt(9)));
        result *= Integer.parseInt(Character.toString(s.charAt(99)));
        result *= Integer.parseInt(Character.toString(s.charAt(999)));
        result *= Integer.parseInt(Character.toString(s.charAt(9999)));
        result *= Integer.parseInt(Character.toString(s.charAt(99999)));
        result *= Integer.parseInt(Character.toString(s.charAt(999999)));
        
        System.out.println(result);
    }
}
