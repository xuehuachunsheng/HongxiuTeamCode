package ThreadTest;

/**
 * 创建多线程的方法二： 实现Runnable接口
 * 1、 创建一个实现了Runnable接口的类
 * 2、 实现类趋势线Runnable重的抽象方法：run()
 * 3、 创建实现类的对象
 * 4、 将此对象作为参数传递到Thread类的构造器中，创建Thread类的对象
 * 5、 通过Thread类的对象调用start()方法
 */

public class Multithreading2 {
    public static void main(String[] args){
        //3、创建实现类对象
        MyThread mThread = new MyThread();
        //4、将此对象作为阐述传递到Thread类的构造器中，创建Thread类的对象
        Thread t1 = new Thread(mThread);
        //5、通过Thread类的对象调用start()： 启动线程，调用当前线程的run()
        t1.start();
    }
}

//1、创建一个实现了Runnable类的接口
class MThread implements Runnable {

    //2、实现类趋势线Runnable中的抽象方法：run()
    @Override
    public void run() {
        for(int i = 0; i < 100; i++){
            if(i % 2 == 0){
                System.out.println(i);
            }
        }
    }
}
