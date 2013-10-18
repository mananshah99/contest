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
//    long i=1;
    int num = 1;
    int numfactors = 0;
    public void euler012()
    {
        //while(true)
        //{
            System.out.println(nextTriangularNumber(100));
            numfactors=0;
        //}
        //return i;
    }
    public int nextTriangularNumber(int number)
    {
        return number *(number+1)/2;
    }
    public int getNumFactors(int num)
    {
        if(num<=1) return 0;
        for(int k=2; k<(int)(num/2); k++)
        {
            if(num%k == 0){
                numfactors++;
            }
        }
        numfactors +=2; //1 and the number itself
        return numfactors;
    }
}