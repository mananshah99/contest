/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem028 {
    
    public static void euler028()
    {        
        /*
         * top right corner is n^2, top left corner is n^2 - (n-1)
         * bottom left corner is n^2 - 2(n-1), bottom right corner is n^2 - 3(n-1)
         * use the above pattern to write a solve (where n goes from 3 to 1001, incrementing by 2)
         */
         
        long result = 1; //start with unique case of 1 (DIMENSIONS = 1)
        for(int DIMENSIONS = 3; DIMENSIONS<=1001; DIMENSIONS+=2){
            int DIMENSIONS_2 = (DIMENSIONS)*(DIMENSIONS);
            result += (DIMENSIONS_2 - (DIMENSIONS - 1)) + (DIMENSIONS_2 - 2*(DIMENSIONS - 1))
                    + (DIMENSIONS_2 - 3*(DIMENSIONS - 1)) + DIMENSIONS_2;
        }
        System.out.println(result);
    }
    
}
