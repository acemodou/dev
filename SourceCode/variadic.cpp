#include "headers.h"


//first argument is int count of remaining args
//... remaining args are doubles for average 

double average(const int count, ...)
{
    va_list ap;
    int i ;
    double total = 0.0;

    va_start(ap,count);
    for(i = 0; i < count; i++)
    {
        total += va_arg(ap,double);
    }
     va_end(ap);
     return total /count;
}

 // implements my own printf 

 

 int main(int argc, char ** argv)
 {
     message("This is a message");
     message("Average: %lf",average(5,25.0, 35.7, 50.1,127.6, 75.0));
     return 0;
 }
