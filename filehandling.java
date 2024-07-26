import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class filehandling {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter File name: ");
        String s = input.nextLine();
        File f1 = new File(s);
        File f2 = new File("New.txt");
        f2.createNewFile();
        Scanner sc = new Scanner(f1);
        FileWriter fw2 = new FileWriter(f2);
        while(sc.hasNextLine()){
            String s1 = sc.nextLine();
            fw2.write(s1);
        }
        fw2.close();
        input.close();
        sc.close();
    }
}
