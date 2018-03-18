import java.util.*;
import java.io.*;

public class permute{

    // public static void permutation(String str1, String str2)
    // {
    //     if(str1.length() != str2.length())
    //     {
    //         System.out.println("String lenths are not equal");
    //         return ;
    //     }
        
    //     char [] s1 = str1.toCharArray();
    //     char [] s2 = str2.toCharArray();

       

    //     Arrays.sort(s1);
    //     Arrays.sort(s2);

    //     str1 = Arrays.toString(s1);
    //     str2 = Arrays.toString(s2);
        
    //     if(str1.equals(str2))
    //     {
    //         System.out.println("Strings are equal");
    //         return;
    //     }
    //     else
    //     {
    //         System.out.println("Strings are not equal");
    //         return;
    //     }
           
    // }

    /* Two words with same character count , Increment one string and decrement the other string 
       If they are permutations they should have same character count
    */

     public static boolean permutation(String s1, String s2)
    {
        if (s1.length() != s2.length())
        {
            return false;
        }
        int [] letters = new int[128];
        for(int i = 0; i < s1.length();i++)
        {
            letters[s1.charAt(i)]++;
            System.out.println(s1.charAt(i));
        }

        for (int i = 0; i < s2.length();i++)
        {
            letters[s2.charAt(i)]--;
            if(letters[s2.charAt(i)] < 0)
            return false;
        }
        return true;
    }



    public static void main(String[] args)
    {
            String str1 = "test";
            String str2 = "estt";            

           boolean result =  permutation(str1,str2);
           System.out.println(result);

        
    }
}