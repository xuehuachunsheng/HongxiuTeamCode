package BANK;

import java.util.Scanner;

public class Bank {
    private Customer[] customers;//存放多个客户的数组
    private int numberOfCustomer = 0;//记录客户的个数
    private static double depositRate;
    private static int minBalance = 1000;



    Bank(){
        customers = new Customer[100];
        depositRate = 0.001;
    }


    public static int getMinBalance() {
        return minBalance;
    }
    //添加客户
    public void addCustomer(String f,String l,int balance){
        Customer cust = new Customer(f,l,balance);
        if(cust.getAccount() == null){
            return;
        }
        customers[numberOfCustomer++] = cust;
    }
    //获取客户的个数
    public int getNumberOfCustomer(){
        return numberOfCustomer;
    }
    //获取指定客户的信息
    public Customer getCustomer(){
        Scanner scan = new Scanner(System.in);
        System.out.println("请输入" + (numberOfCustomer - 1) + "以内的数字。 (输入-1退出）");
        int index = scan.nextInt();
        boolean isFlag = true;
        while(index != -1){
            if(index >= 0 && index < numberOfCustomer){
                return customers[index];
            }
            System.out.println("请重新输入。。。");
        }
        return null;
    }
}
