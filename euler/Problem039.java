/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem039 {
    public static void euler039()
    {
        int[] pvals = new int[1001];
        for (int a = 1; a < 500; a++) {
            for (int b = 1; b + a < 500; b++) 
            {
                int square = (a*a)+(b*b);
                int root = (int)Math.sqrt(square);
                if(root*root == square && a+b+root <= 1000) {
                   pvals[a+b+root] += 1;
                }  
            }
        }
        int answer = Integer.MIN_VALUE;
        
        for (int i = 1; i < pvals.length; i++) {
            if (pvals[i] > answer) 
                answer = i;
        }
        System.out.println(answer);
    }
}
