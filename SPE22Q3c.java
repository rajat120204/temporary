public class SPE22Q3c {
    public static void main(String[] args) {
        String name = new String("Nirma University");
        String s = name.replace("Ni", "Ab");
        System.out.println(s);

        StringBuffer str = new StringBuffer(name);
        for(int i=0; i<name.length(); i++){
            if(name.charAt(i)=='N' && name.charAt(i+1)=='i'){
                str.setCharAt(i, 'A');
                str.setCharAt(i+1, 'b');
            }
        }
        System.out.println(str);
    }
}
