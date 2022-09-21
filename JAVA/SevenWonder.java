/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sevenwonder;
import java.util.Scanner;
import java.lang.*;
import static java.lang.Math.pow;
/**
 *
 * @author lisansulistiani
 */
public class SevenWonder {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner a=new Scanner (System.in);
        String cases=a.next();
        int countT=0,countC=0,countG=0;
        for(int i=0;i<cases.length();i++)
        {
            if(cases.charAt(i)=='T')
            {
                countT+=1;
            }
            else if(cases.charAt(i)=='C')
            {
                countC+=1;
            }
            else if(cases.charAt(i)=='G')
            {
                countG+=1;
            }
        }
        int j;
        int k;
        int l;
        j=countT;
        k=countC;
        l=countG;
        int ac;
        ac=Math.min(j, k);
        int ad;
        ad=Math.min(ac,l);
        int seven;
        seven=ad*7;
        int sevenWonders;
        sevenWonders=(int)(Math.pow(j,2))+(int)(Math.pow(k, 2))+(int)(Math.pow(l, 2))+(int)seven;
        System.out.println(sevenWonders);
        
    
    
    }
    
}
