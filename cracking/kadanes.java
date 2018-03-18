import java.util.*;
import java.io.*;
import java.lang.Math;


public class kadanes{


    public static int maximumSubarray(int array[])
    {
        int current_so_far = array[0];
        int  ending_max = array[0];
        for(int i = 1; i < array.length; i++)
        {
            current_so_far = Math.max(current_so_far +=array[i], array[i]);
            ending_max = Math.max(current_so_far, ending_max);
        }
        return ending_max;
    }



    public static void main(String[] args)
    {
        int arr[] = {1,-3,2,1,-1};
        int result = maximumSubarray(arr);
        System.out.println(result);


    }
}