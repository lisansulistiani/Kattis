import java.util.Scanner;
public class quickbrownfox{
   public static void main(String args[]) throws Exception {
      Scanner sc = new Scanner(System.in);   
      String a = sc.nextLine();
      int tc = Integer.parseInt(a);
      String text[] = new String[tc];
      String abc = "abcdefghijklmnopqrstuvwxyz";
      String temp="";
      for (int aa = 0;aa<tc;aa++){
         text[aa] = sc.nextLine();
         text[aa] = text[aa].toLowerCase();
         temp="";
         for(int i=0;i<abc.length();i++){
            if(!text[aa].contains(abc.charAt(i)+"")){
               temp+=abc.charAt(i);
            }
         }
         if(temp==""){
            System.out.println("pangram");
         }
         else{
            System.out.println("missing "+temp);
         }
      }
   }
}