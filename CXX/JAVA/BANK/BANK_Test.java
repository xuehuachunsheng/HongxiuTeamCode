package BANK;

public class BANK_Test {
    public static void main(String[] args){
        Bank bank = new Bank();
        bank.addCustomer("Jane","Smith");
        bank.getCustomer(0).setAccount(new Account(2000));
        bank.getCustomer(0).getAccount().withdraw(200);
        System.out.println("客户" + bank.getCustomer(0).getFirstName() + "的账户余额为：" + bank.getCustomer(0).getAccount().getBalance());
    }
}
