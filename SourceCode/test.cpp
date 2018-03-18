#include<cstdio>
using namespace std;




int main(int argc, char ** argv)
{
   int arr [2] = {10,3};
   int *p = arr;

   for(int i = 0; i < 2; i++){
       printf("%d \n", *(p +i));
   }

   return 0;
}