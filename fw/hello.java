package fw;

public class hello {
    public static void main(String[] args) {
        
    
    String s1= new String("Hello?  Khana. Khake! Jaana");
    String[] words= s1.split("[\\s!?.]+");
    for(String s: words){
        System.out.println(s);
    }
}
}
