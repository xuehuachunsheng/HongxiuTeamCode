using System;

namespace animal
{
    class Animal
    {
        protected string name;
        public Animal(string name)
        {
            this.name = name;
        }
        public virtual void walk()
        {
            Console.WriteLine("动物{0}在行走", name);
        }
        public void speak()
        {
            Console.WriteLine("{0}在叫",name);
        }
    }
    class Cat : Animal
    {
        //private string name;
        public Cat(string name):base(name)
        {
            
        }
        public void speak()
        {
            Console.WriteLine("喵喵喵");
        }
        public override void walk()
        {
            Console.WriteLine("猫{0}在行走", name);
        }
    }
    class Tiger : Cat
    {
        public Tiger(string name):base(name)
        {
           
        }
        public override void walk()
        {
            Console.WriteLine("老虎{0}在行走", name);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Animal a;
            a = new Cat("tom");
            a.walk();
            Animal b;
            b = new Tiger("rxw");
            b.walk();
            Console.ReadKey();
        }
    }
}
