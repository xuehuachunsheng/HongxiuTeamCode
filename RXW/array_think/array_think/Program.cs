using System;

namespace array_think
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[10];//声明一维数组
            int[][] array2 = new int[10][];//声明二维数组 
            array2[0] = new int[5];//对二维数组进行逐行分配空间
            array2[1] = new int[7];
            int[,] array3 = new int[3,3];
            int[,] nembers = new int[,]
            {
                {1,2,3 },
                {4,5,6 },
                {7,8,9 },
            };
            foreach(int i in nembers)
            {
                Console.WriteLine(i);
            }
            Console.WriteLine("\n");
            int[,] myInt2 = new int[,] { { 1, 2 }, { 3, 4 } };
            foreach(int x in myInt2)
            {
                Console.WriteLine(x);
            }
        }
    }
}
