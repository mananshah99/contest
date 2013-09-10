/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem012 {
    int i=1;
    int numfactors = 0;
    public static void euler012()
    {
        while(getNumFactors(nextTriangularNumber()) !=500)
        {
            if(getNumFactors(nextTriangularNumber())==500) return i;
            numfactors = 0;
        }
        return i;
    }
    public int nextTriangularNumber()
    {
         for(int j=0; j<i; j++)
         {
             i+=j;
         }
         return i;
    }
    public int getNumFactors(int num)
    {
        for(int k=0; k<=(num/2); k++)
        {
            numfactors++;
        }
        return numfactors;
    }
}
