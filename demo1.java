import java.util.*;
public class demo1{
    public static void main(String [] args){
         Scanner input= new Scanner(System.in);
         String s1=input.next();
         String s2="";
         for(int i=s1.length()-1;i>=0;i--)
        {
            s2+=s1.charAt(i);
            
        }
        if(s2.equals(s1)){
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not");
        }
    }
}