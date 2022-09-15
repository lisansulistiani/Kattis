import java.util.*;
public class findingAnA{

   public static void main(String []args){
      Scanner sc = new Scanner(System.in);
      String inputs = sc.nextLine();
      int idx = inputs.indexOf('a');
      System.out.println(inputs.substring(idx)+"");
   }
}