import java.util.*;
import java.io.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int n = Integer.parseInt(sc.next());
        String tmp = sc.next(); // 1234
        int sum=0;
        for (int i=0; i<n; i++){
            sum+=tmp.charAt(i)-'0';
        }
        
        System.out.print(sum);
    }
}