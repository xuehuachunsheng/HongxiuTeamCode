package ThreadTest;

/**
 * 例子 ： 创建三个窗口卖票，总票数为100张，使用继承Thread类的方式
 */
public class WindowTest1 {
    public static void main(String[] args){
        Window window1 = new Window();
        Window window2 = new Window();
        Window window3 = new Window();

        window1.setName("窗口1");
        window2.setName("窗口2");
        window3.setName("窗口3");

        window1.start();
        window2.start();
        window3.start();
    }
}

class Window extends Thread{

    private static int ticket = 100;

    @Override
    public void run() {
        while (ticket > 0) {
            System.out.println(getName() + "卖票，票号为：" + ticket--);
        }
    }
}