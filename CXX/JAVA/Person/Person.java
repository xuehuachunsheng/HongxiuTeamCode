package Person;

public class Person {
    public static void main(String[] args){
        PersonTest p1 = new PersonTest();
        p1.name = "Tom";
        p1.age = 18;
        p1.sex = 1;

        p1.study();
        p1.showAge();
        p1.addAge(2);
        p1.showAge();
    }
}
