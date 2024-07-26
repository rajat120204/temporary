package p1;

interface Polygon{
    abstract void calcArea();
    abstract void calcPeri();
    void display();
}

class Square implements Polygon{
    float side, area, peri;
    Square(float s){
        side=s;
    }
    @Override
    public void calcArea() {
         area = side*side;
    }

    @Override
    public void calcPeri() {
         peri = 4*side;
    }

    @Override
    public void display() {
        System.out.println("Area is: "+area);
        System.out.println("Perimeter is: "+peri);
    }
    
}

class Rectangle implements Polygon{
    float length;
    float breadth;
    float area, peri;
    Rectangle(int len, int bre){
        length=len;
        breadth=bre;
    }
    @Override
    public void calcArea() {
        area = length*breadth;
    }

    @Override
    public void calcPeri() {
        peri = 2*(length+breadth);
    }

    @Override
    public void display() {
        System.out.println("Area is: "+area);
        System.out.println("Perimeter is: "+peri);
    }
    
}

