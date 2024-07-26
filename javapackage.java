import p1.*;
public class javapackage{
    public static void main(String[] args) {
        Square sq = new Square(5);
        Rectangle re = new Rectangle(4,5);
        sq.calcArea();
        sq.calcPeri();
        sq.display();
        re.calcArea();
        re.calcPeri();
        re.display();
    }
}