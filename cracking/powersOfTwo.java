import java.util.*;
import java.io.*;

public class powersOfTwo{

    public static int powersOf2(int n){
        if( n < 1)
            return 0;
        else if (n == 1){
            System.out.println(1);
            return 1;
        }else{
            int prev = powersOf2(n /2);
             int curr = prev * 2;
            System.out.println(curr);
            return curr;
        }
    }





    public static void main(String [] args){
        int n = 16;
        powersOf2(n);
    }
}