import java.util.Scanner;

public class Practical_3a {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the Operator : ");
        char operator = input.next().charAt(0);
        int a,b;
        System.out.println("Enter a : ");
        a = input.nextInt();
        System.out.println("Enter b : ");
        b = input.nextInt();
        switch(operator)
        {
            case '+':
            System.out.println("Sum of a and b is : "+(a+b));
            break;

            case '-':
            System.out.println("Subtraction of a and b is : "+(a-b));
            break;

            case '*':
            System.out.println("Product of a and b is : "+(a*b));
            break;a

            case '/':
            if(b==0) System.out.println("Not Define");
            else 
            {
                System.out.println("a divide by b is : "+(float)a/b);
            }
            break;

            case '&':
            System.out.println("Bitwise AND of a and b is : "+(a&b));
            break;

            case '|':
            System.out.println("Bitwise AND of a and b is : "+(a|b));
            break;   
            
            case '^':
            System.out.println("Bitwise AND of a and b is : "+(a^b));
            break;

            case '~':
            System.out.println("Bitwise AND of a is : "+(~a));
            System.out.println("Bitwise AND of b is : "+(~b));
            break;   

            default:
            System.out.println("Not Define.");
        }
        input.close();
    }
}