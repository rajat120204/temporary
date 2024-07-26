import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.channels.FileLock;
import java.util.Scanner;

public class tmc {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        FileWriter f = new FileWriter("Student.txt");
        int t;
        System.out.println("Enter the number of students: ");
        t=sc.nextInt();

        while (t!=0)
        {
        String name,rollNo;
        int s1,s2,s3;
        System.out.println("Enter new entry");

        name=sc.nextLine();
        sc.nextLine();
        s1=sc.nextInt();
        s2=sc.nextInt();
        s3=sc.nextInt();
        

        f.append(name + "|" +s1 + "|" +s2+"|"+s3 +"\n");
        t--;
}
f.close();
    }
}
