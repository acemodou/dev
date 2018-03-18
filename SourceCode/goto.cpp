#include<cstdio>
using namespace std;


int main()
{
    int a = 10;

    Loop:do{

        if (a == 15){

        a++;
        goto Loop;
    }
      printf("%d \n", a);
      a++;
}while(a < 20);

return 0;
}