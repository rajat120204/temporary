import java.util.Random;
import java.util.Scanner;

abstract class Medicine{
    abstract void displayLabel();
}

class Tablet extends Medicine{
    String name, address;
    Tablet(String name, String address){
        this.name=name;
        this.address=address;
    }
    @Override
    void displayLabel() {
        System.out.println("Name is: "+name);
        System.out.println("Address is: "+address);
        System.out.println("Store in a cool and dry place.");
    }
    
}

class Syrup extends Medicine{
    String name, address;
    Syrup(String name, String address){
        this.name=name;
        this.address=address;
    }
    @Override
    void displayLabel() {
        System.out.println("Name is: "+name);
        System.out.println("Address is: "+address);
        System.out.println("With Doctor's Advice.");
    }
    
}

class Ointment extends Medicine{
    String name, address;
    Ointment(String name, String address){
        this.name=name;
        this.address=address;
    }
    @Override
    void displayLabel() {
        System.out.println("Name is: "+name);
        System.out.println("Address is: "+address);
        System.out.println("For External Use Only.");
    }
    
}

public class SPE22Q3b {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Medicine arr[] = new Medicine[10];
        int x;
        Random r = new Random();
        for(int i=0; i<10; i++){
            x = r.nextInt(1,4);
            if(x==1){ 
                Tablet tablet = new Tablet("TMC", "TMC1");
                arr[i] = tablet;
            }
            else if(x==2){
                Syrup syrup = new Syrup("TMC 2", "TMC3");
                arr[i] = syrup;
            }
            else if(x==3){
                Ointment ointment = new Ointment("TMC4", "TMC5");
                arr[i] = ointment;
            }
            arr[i].displayLabel();
        }
        sc.close();
    }
}
