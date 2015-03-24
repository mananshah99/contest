/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem012 extends Library {

    int index = 0;
    int numfactors = 0;
    public void euler012()
    {
        while(true)
        {
            if(getNumFactors(nextTriangularNumber(index))>500)
            {
                System.out.println(nextTriangularNumber(index));
                return;
            }
            // debugging System.out.println(index + "  " + nextTriangularNumber(index) + "  " + getNumFactors(nextTriangularNumber(index)));
            numfactors=0;
            index++;
        }
        //return i;
    }
    public long nextTriangularNumber(int number)
    {
        return ((long)number *((long)number+1)/2);
    }
    public int getNumFactors(long num)
    {
        if(num<=1) return 0;
        for(int k=1; k<=(Math.sqrt(num)); k++)
        {
            if(num%k == 0)
            {
                numfactors+=2;
            }
            if(k==(Math.sqrt(num))) numfactors--;
        }
        return numfactors;
    }
}