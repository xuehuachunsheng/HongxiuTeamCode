package Person;

public class PersonTest {
    String name;
    /**
     * sex : 1 男性
     * sex : 0 女性
     */
    int sex;
    int age;

    public void study(){
        System.out.println("Study!!!");
    }
    public void showAge(){
        System.out.println("Age is " + age);
    }
    public int addAge(int i){
        age += i;
        return age;
    }
}
