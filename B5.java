import java.util.Scanner;
// import java.util.Vector;
import java.util.Arrays;

class B5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String si;
        do {
            System.out.print("Enter a string: ");
            si = sc.nextLine();
            if (si.endsWith(".") && si.length() <= 80)
                break;
            else System.out.println("Please try again (Try keeping the string length under 80 and terminate it with a '.')\n");
        } while (true);
        // System.out.println("Thai gyu");\
        String words[] = si.split(" ");
        // int size = words.length;
        // String newWord[] = new String[size];
        for (int i = 0; i < words.length; i++) {
            String str = words[i].toLowerCase();
            for (int j = 0; j < words.length; j++) {
                String str2 = words[i].toLowerCase();
                if (words[j].length() < words[i].length()) {
                    String temp = words[i];
                    words[i] = words[j];
                    words[j] = temp;
                } else if (words[j].length() == words[i].length()) {
                    words[j].toLowerCase();
                    // StringBuffer s1 = new StringBuffer(words[i]);
                    // StringBuffer s2 = new StringBuffer(words[j]);
                    if (str.compareTo(str2) > 0) {
                        String temp = words[i];
                        words[i] = words[j];
                        words[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < words.length; i++) {
            String str = words[i].toUpperCase();
            for (int j = 0; j < words[i].length(); j++) {
                if (j == 0) {
                    System.out.print(str.charAt(j));
                } else if (words[i].charAt(j) == '.')
                    continue;
                else
                    System.out.print(words[i].charAt(j));
            }
            System.out.print(" ");
        }
        sc.close();
    }
}