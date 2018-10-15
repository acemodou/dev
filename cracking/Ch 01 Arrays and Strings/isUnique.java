import java.util.*;
import java.io.*;

public class isUnique{

    /* Check if a string has all unique characters  */

     //Assume we are using extended  ASCII 128 characters 
      public static boolean uniqueCharacters(String str)
      {
          // This condition is not valid for extended ASCII characters
          if(str.length() > 128)
          {
              return false;
          }
          // boolean characters of 128 
          boolean [] charSet = new boolean[128];

          for(int i = 0; i < str.length(); i++)
          {
              int val = str.charAt(i);
              // It will enter this loop only if a character is found
              if(charSet[val])  
              {
                  return false;
              }

              charSet[val] = true;
          }
          return true;
      }
  


    public static void main(String[] args){

     Scanner user_input = new Scanner(System.in);
     System.out.println("Enter a String to check if it is unique: ");
     String words = user_input.next();
        boolean  result = uniqueCharacters(words);
        System.out.println(result);
        
        
    }
}
