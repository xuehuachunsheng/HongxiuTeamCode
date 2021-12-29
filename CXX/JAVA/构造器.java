public class 构造器 {
    public static void main(String[] args){
        Person p1 = new Person("Tom");
        System.out.println("name = " + p1.get_name());
        System.out.println("age = " + p1.get_age());
        System.out.println("legs = " + p1.get_legs());

        Person p2 = new Person("Lily");
        System.out.println("name = " + p2.get_name());
        p2.set_age(20);
        System.out.println("age = " + p2.get_age());
        System.out.println("legs = " + p2.get_legs());
    }
}
class Person{
    private String name;
    private int age;
    private int legs;

    public Person(String n){
        name = n;
        age = 18;
        legs = 4;
    }

    public  int set_age(int a){
        return age = a;
    }

    public int get_age(){
        return age;
    }
    public String get_name(){
        return name;
    }
    public int get_legs(){
        return legs;
    }
}
