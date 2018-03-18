#include<cstdio>
#include<iostream>
#include<thread>
using namespace std;

// To compile 
//g++ -o thread1 thread1.cpp -std=c++11  


  void  printThread(){
    printf("First thread\n");
}

int main()
{

     printThread();
    return 0;
}