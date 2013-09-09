/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class ProjectEuler {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       
       /**PROBLEM 1**/
       
       Problem001 p1 = new Problem001();
       p1.euler001();
        
       /**PROBLEM 2**/
        
        Problem002 p2 = new Problem002();
        p2.euler002();
       
       /**PROBLEM 3**/
       
        Problem003 p3 = new Problem003();
        long num = 600851475143L;
        p3.euler003(num);
        
        //Problem 4 is incomplete
        
        /**PROBLEM 5**/
        
        Problem005 p5 = new Problem005();
        p5.euler005();        
        
        /**PROBLEM 6**/
        
        Problem006 p6 = new Problem006();
        p6.euler006();

        /**PROBLEM 7**/

        Problem007 p7 = new Problem007();
        p7.euler007();
    }
}
