import java.util.Scanner;
// import java.util.Vector;
import java.util.Arrays;

class B5{
    public static void main(String arg[])
    {
       
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a Paragraph: ");
        String s = sc.nextLine();
        String str[] = s.split("[.]");
        String Words[] = s.split(" ");
        System.out.println("\n\nSentences: " + str.length + "\nWords: " + Words.length + "\nCharacters: " + s.length());
        int arr[] = new int[95];
        Arrays.fill(arr, 0);
        for (int i=0;i<s.length();i++){
            arr[(int)s.charAt(i) - 32]++;
        }
        System.out.println("\n\nCharacter\tOccurence");
        for (int i=0;i<arr.length;i++){
            if (arr[i]!=0)
            System.out.println((char)(i+32) + "\t\t" + arr[i]);
        }
        // System.out.println(s);
        System.out.println("\n\nType the word you want to search: ");
        String word = sc.nextLine();
        if (!s.contains(word)) System.out.println("Match not found! ");
        else{
            int sent = 1, sabd=0;
            int index = s.indexOf(word);
            for (int i=0;i<index;i++){
                if ((int)s.charAt(i)==32) sabd++;
                if (s.charAt(i)=='.'){
                    sent++;
                    sabd=0;
                }
                // System.out.println(sent + " " + sabd);
            }
            System.out.println("\n The word you entered is at " + sent + " Sentence and " + (sabd+1) + " words!");
        }
        sc.close();
    }
}