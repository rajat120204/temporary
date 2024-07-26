import java.util.Scanner;
import java.io.*;
/*class thread extends Thread{
    
    int n;
    public thread()
    {
        n=10;
    }
    public thread(int n){
        this.n=n;   
    }
    public void run()
    {
        for(int a=0;a<=n;a++)
        {
            if(a%2==0)
            {
                System.out.println("Even: "+ a);
            }
        }
    }
}
*/
class th{
    synchronized public void odd(int N)
    {
        try {
            for(int a=0;a<N;a++)
        {
            if(a%2==1)
            {
                Thread.sleep(1000);
                System.out.println("Odd: " + a);
            }
        }
        } catch (Exception e) {
            System.out.println("Error!!");
        } 
    }
    synchronized public void even(int N)
    {
        try {
            for(int a=0;a<N;a++)
            {
                if(a%2==0)
                {
                    Thread.sleep(1000);
                    System.out.println("Even: " + a);
                }
            }

        } catch (Exception e) {
            System.out.println("errore!!!");
        }
    }
}
public class p10 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter n: ");
        int n=sc.nextInt();
        th t=new th();
        Thread t1=new Thread(new Runnable() {
            public void run()
            {
                t.even(n);
            }
        }
        );
        Thread t2=new Thread(new Runnable() {
            public void run()
            {
                t.odd(n);
            }
        }
        );
        t1.start();
        t2.start();
    }
}
 
