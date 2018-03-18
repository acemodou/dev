#include<cstdio>
using namespace std;

struct A{
 int ia;
 int ib;
 int ic;
};

int main(int argc, char **argv)
{
    A a = {1,2,3};
    //printf("ia is %d, ib is %d, ic is %d",a.ia,a.ib,a.ic);
    //use a pointer 
    A *pa = &a;
    printf("ia is %d, ib is %d, ic is %d",pa->ia,pa->ib,pa->ic);

    return 0;
}
