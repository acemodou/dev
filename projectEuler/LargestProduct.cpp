#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{

  /*Open the  Text file 
     Read it and store the data
     in a char of 1000 elements 
       then print it 
      */

   ifstream readFile;
    readFile.open("file.txt");

    if(!readFile.is_open())
    {
      printf("It can't open file");
          exit(1);
    }

    char data[1000];
     
     int k = 0;
    

    for(int i = 0; i < 1000; i++)
    {
      readFile >> data[i];
    }

     readFile.close();

     /* After storing all the elements in data we can read and display    */
   
    // for(int i = 0; i < 1000;)
    // {
    //   for(int j = 0; j < 50;j++,i++)
    //   {
    //     cout << data[i];
    //   }
    //   cout << endl;s
    // }

    long long  max = 0 ;
    long long  product ;

    for(long long  i = 0; i < 1000 -13; i++)
    {
      product = 1;
      
       for(long long  j = i; j <i + 13 ; j++)
       {
         product *= (data[j] - 48);
       }
       if(product > max)
        max = product ;
    }
      cout << max << endl;
}
