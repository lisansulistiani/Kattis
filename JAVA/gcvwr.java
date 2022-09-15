import java.util.*;
import java.util.stream.*;
public class gcvwr{

   public static void main(String []args){
      Scanner sc = new Scanner(System.in);
      String line1 = sc.nextLine();
      String[] gcvwr = line1.split(" ");
      double selisih = Double.parseDouble(gcvwr[0])-Double.parseDouble(gcvwr[1]);
      Integer weight = (int)(selisih*0.9);
      String line2 = sc.nextLine();
      String[] berat = line2.split(" ");
      Integer weight2 = 0;
      for (String s : berat){
         weight2+=Integer.parseInt(s);
      }
      System.out.println(weight-weight2+"");
   }
}