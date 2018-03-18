import java.util.*;
import java.io.*;

public class fib{

    public static void allFib(int  n){
       
        for(int i = 0 ; i < n; i++){
            System.out.println(i + ":" + fibonacci(i));
        }
    }

        // Without Memoization is taking 9 seconds 

    // public static int fibonacci(int  n){
    //     if(n == 0){
    //         return 0 ;
    //     }
    //     else if(n == 1)
    //         return 1;
    //         return fibonacci(n-1) + fibonacci(n-2);
    //     }
        
        //using memoization to make it faster : It takes 0.036 seconds

        public static int [] fib_cache = new int [45]; 

        public static int fibonacci(int n)
        {
             int value = 0;
            if (fib_cache[n] != 0)
                 return fib_cache[n];
            else if (n == 1)
                 return 1;
            else if( n == 2)
                  return 2;
            else if( n > 2)

              value = fibonacci(n-2) + fibonacci(n-1);
              fib_cache[n] = value;
                 return value;
            
         }
        

    public static void main(String[] args){
        int  n = 45;
        final long startTime = System.nanoTime();
         allFib(n );
        final long elapsedTime = System.nanoTime() - startTime;
        System.out.println("Took " + elapsedTime + " in nano Seconds");
    }
}