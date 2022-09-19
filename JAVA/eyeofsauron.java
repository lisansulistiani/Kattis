import java.util.*;
import java.util.stream.*;
public class eyeofsauron{

   public static void main(String []args){
      Scanner sc = new Scanner(System.in);
      String line1 = sc.nextLine();
      int tul = 1;
      while(line1.length()!=0){
         //System.out.println(line1.charAt(0)+" "+line1.charAt(line1.length()-1));
         if(line1.charAt(0)!=line1.charAt(line1.length()-1)){
            if(line1.charAt(0)!='(' || line1.charAt(line1.length()-1)!=')'){
               tul=0;
               System.out.println("fix");
               break;
            }
            break;
         }
         else{
            line1 = line1.substring(1,line1.length()-1);
         }
      }
      if(tul==1)
         System.out.println("correct");
   
   }
}