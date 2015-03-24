/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.util.ArrayList;

/**
 *
 * @author Manan
 */

public class Problem029 extends Library {

   public static void euler029()
   {
        double pow;
        ArrayList<Double> terms = new ArrayList<>();
        
        for(int a = 2; a <= 100; a++) {
            for(int b = 2; b <=100; b++) {
                pow = Math.pow(a,  b);
                if(!terms.contains(pow)) terms.add(pow);
            }
        }
        System.out.println(terms.size());
    }
}