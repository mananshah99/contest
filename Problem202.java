/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem202 extends Library
{
    //This code takes a bit over 12 hours to finish running. Please don't use it
    //as an example for future problems. 

  public static void euler202() 
  {
    //number to test
    long n = 12017639147L;
    
    //# of paths possible
    long count = 0;
    
    /* We want to determine how many paths are possible given that the laser
     * bounces off 12017639147 surfaces. We see that: 
     * 
     * The number of ways one has to search for equals the number of pairs (a,b) 
     * of positive integers which fulfill the following conditions:
     * 
     *  1. a + b = (n + 3)/2 , where n is the required number of reflections
     *      - derived from http://arxiv.org/PS_cache/math/pdf/0509/0509292v7.pdf
     *  2. a is congruent to b mod 3 (there are three sides) 
     *  3. The gcd of a and b must equal 1 (for it to return back to the original corner)
     * 
     * Then it becomes quite trivial to arrive at the following code:
     */
    
    for (long a = 0; a <= (n + 3) / 2; a++) 
    {
      long b = (n + 3) / 2 - a;
      if ((a - b) % 3 == 0 && gcd(a, b) == 1) 
        count++;
    }
    System.out.println(count);

  }
}

