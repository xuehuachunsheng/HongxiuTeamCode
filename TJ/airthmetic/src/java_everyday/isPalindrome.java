package java_everyday;

public class isPalindrome {
    public static void main(String[] args) {
        int x=123;
        StringBuffer str = new StringBuffer(String.valueOf(x));
        System.out.println(str.reverse());
    }
}
class Solution5 {
    public boolean isPalindrome(int x) {
        if(x < 0) return false;
        StringBuffer str = new StringBuffer(String.valueOf(x));
        return str.reverse().toString().equals(String.valueOf(x));
    }
}