import java.lang.Thread;
import java.util.Scanner;

class T1 extends Thread{
    int n;
    T1(int n){
        this.n=n;
    }

    public synchronized void run(){
        for(int i=1; i<=n; i++){
            if(i%2==0){
                System.out.println(i+" By Thread 1.");
                try{
                    Thread.sleep(1);
                }
                catch(InterruptedException e){
                    e.printStackTrace();
                }
            }
        }
    }
}

class T2 extends Thread{
    int n;
    T2(int n){
        this.n=n;
    }

    public synchronized void run(){
        for(int i=1; i<=n; i++){
            if(i%2==1){
                System.out.println(i+" By Thread 2.");
                try{
                    Thread.sleep(100);
                }
                catch(InterruptedException e){
                    e.printStackTrace();
                }
            }
        }
    }
}

public class SPE22Q3a {
   public static void main(String[] args) {
    int n;
    Scanner sc = new Scanner(System.in);
    n=sc.nextInt();
    T1 t1 = new T1(n);
    T2 t2 = new T2(n);
    t1.start();
    t2.start();
    sc.close();
   }
}