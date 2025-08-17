import java.io.*;
import java.util.*;

public class test2 {
    static int n;

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        HashMap<String, Integer> hashMap = new HashMap<>();

        hashMap.put("i", 1);

        hashMap.replace("i", 2);

        System.out.println(hashMap.get("i"));
    }


}
