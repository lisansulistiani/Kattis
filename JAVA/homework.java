import java.util.Scanner;
public class homework{
   public static void main(String args[]) throws Exception {
      Scanner sc = new Scanner(System.in);
      String s = sc.nextLine();
      String[] tampung = s.split(";");
      int total = 0;
      for(int i=0;i<tampung.length;i++)
      {
         //System.out.println(tampung[i]);
         if(tampung[i].contains("-"))
         {
            String[] tampung2 = tampung[i].split("-");
            int awal =  Integer. parseInt(tampung2[0]);
            int akhir =  Integer. parseInt(tampung2[1]);
            //System.out.println(akhir-awal);
            total += (akhir-awal);
         }
         
      }
      total+=tampung.length;
      System.out.println(total);
   }
}