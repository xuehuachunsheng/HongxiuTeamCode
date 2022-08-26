using System;
namespace _3._3homework
{
    internal class Program
    {
        //static void main(string[] args)
        //{
        //    float k;
        //    console.writeline("请输入体重、运动时间、跑步速度");
        //    string kg = console.readline ();
        //    string time = console.readline ();
        //    string speed = console.readline ();
        //    if(float.parse(speed) > 10)
        //    {
        //        k = 0.1797f;
        //    }
        //    else
        //    {
        //        k = 0.1355f;
        //    }
        //    double kcal = float.parse(kg) * float.parse(time) * k;
        //    console.write("消耗的卡路里有");
        //    console.writeline(kcal);
        //}
        const double K1 = 0.1797;
        const double K2 = 0.1355;
        public static double computeKcal(double weight,double time, double speed)
        {
            return weight * time * (speed > 10 ? K1 : K2);
        }
        public static double computeDay(double objKcal,double weight, double speed)
        {
            double time = objKcal / (weight * (speed > 10 ? K1 : K2));
            double day = (time /( 60 * 24));
            //四舍五入
            int dayInt1 = (int)(day + 0.5);
            //Math.Round也可以实现
            //向上取整
            int dayInt2 = 0;
            //if (day != (int)day)
            //{
            //    dayInt2 = (int)(day + 1);
            //}
            dayInt2 = (int)Math.Ceiling(day);
            return dayInt2;
        }
        static void Main(string[] args)
        {
            double weight = 45.5;
            double time = 1.2;
            double speed = 11;
            double kcal = computeKcal(weight, time, speed);
            Console.WriteLine(kcal);
            double objKcal = 1000;//目标卡路里
            double day = computeDay(objKcal, weight, speed);
            Console.WriteLine(day);
        }
    }
}
