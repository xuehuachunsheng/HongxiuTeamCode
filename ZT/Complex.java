package complex;
class imaginary_num{

    float real;//实数
    float image;//虚数


    imaginary_num(float real,float image){//重构
        this.real=real;
        this.image=image;
    }
    imaginary_num(){//重构

    }

    public imaginary_num add(imaginary_num x,imaginary_num y){
        imaginary_num result=new imaginary_num();
        result.real= x.real+ y.real;
        result.image= x.image+ y.image;
        return  result;
    }
    void diff(float x,float y){
        float z=x+y;
        System.out.println(z);
    }
}
public class Complex {
    public static void main(String[] args){
        imaginary_num C1,C2,sum;
        C1=new imaginary_num(1f,2f);//构造函数构造C1和C2
        C2=new imaginary_num(3f,4f);
        sum=new imaginary_num();//创建sum

        sum=sum.add(C1,C2);//把sum.add（c1,c2）的返回值赋值给sum

        System.out.println("C1："+C1.real+"+"+ C1.image+"i");
        System.out.println("C2："+C2.real+"+"+ C2.image+"i");
        System.out.println("sum："+sum.real+"+"+sum.image+"i");

        }
}
