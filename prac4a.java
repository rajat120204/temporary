import java.util.*;
class Employee{
int sal,nohrs;
Scanner sc = new Scanner(System.in);
void getInfo(int a, int b)
{
    sal=a;
    nohrs=b;
/*System.out.println("Input the Salary of the Employee: ");
sal = sc.nextInt();
System.out.println("Input the No of hours of the Employee per day: ");
nohrs = sc.nextInt();*/
}
void AddSal()
{
if(sal<500) sal+=10;
}
void AddWork()
{
if (nohrs>6) sal+=5;
}
void Display()
{
System.out.println("The updated Salary of the Employee is");
System.out.print(sal);
System.out.println();
}
}
public class prac4a {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
Employee e1= new Employee();
e1.getInfo(400,10);
e1.AddSal();
e1.AddWork();
e1.Display();
}
}