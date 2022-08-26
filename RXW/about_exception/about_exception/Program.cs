using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace about_exception
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[] { 5, 4, 2, 10, 100, 60, 1, -10, 6 };
            int[] oArray = InsertSort(array);
            foreach(int i in oArray)
            {
                Console.WriteLine(i + "");
            }
            Console.ReadKey();
        }
        static int[] InsertSort(int[] array)
        {
            int[] oArray = new int[array.Length];
            bool[] s = new bool[array.Length];
            Array.Fill(s, false);
            for (int i = 1; i < array.Length; i++)
            {
                int minIdx = -1;
                int minValue = int.MaxValue;
                for (int j = 1; j < array.Length; j++)
                { 
                    if (!s[j] && array[j] < minValue)
                    {
                        minIdx = j;
                        minValue = array[j];
                    }
                }
                s[minIdx] = true;
                oArray[i] = minValue;
            }          
            return oArray;
        }   
    }
}
