import java.util.Scanner;

public class 回形数组 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("需要打印几行的回型矩阵？");
        int len = scan.nextInt();
        int[][] arr = new int[len][len];
        int s = len * len;
        int i,q;
        int k = 1;
        int p = (int)(1.0 * len / 2 + 0.5);
        for(q = 0;q < p && k <= s;q++){
            int m;
            for(m = q;m < len - q;m++){
                arr[q][m] = k++;
            }
            for(m = q + 1;m < len - q;m++){
                arr[m][len - q - 1] = k++;
            }
            for(m = len - q - 2;m >= q;m--){
                arr[len - q - 1][m] = k++;
            }
            for(m = len - q - 2;m > q;m--){
                arr[m][q] = k++;
            }
        }
        for(int h = 0;h < len;h++){
            for(int b = 0;b < len;b++){
                System.out.print(arr[h][b] + "\t");
            }
            System.out.println();
        }
    }
}
