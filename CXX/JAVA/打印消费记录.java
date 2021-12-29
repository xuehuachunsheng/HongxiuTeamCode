import java.util.Scanner;

public class 打印消费记录 {
    public static void main(String[] arg){
        Scanner scan = new Scanner(System.in);
        String[] t = new String[5];
        int [] money = new int[5];
        int i;
        for(i = 0;i < t.length;i++){
            System.out.print("请输入商品：");
            t[i] = scan.next();
            System.out.print("请输入价格：");
            money[i] = scan.nextInt();
        }
        System.out.println("序号   商品         价格");
        for(i = 0;i < t.length;i++){
            System.out.println(i+1 + "    " + t[i] + "          " + money[i]);
        }
    }
}
