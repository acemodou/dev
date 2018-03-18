#include<stdio.h>
#include<vector>
using namespace std;

// use int for simplicity 
void  vectoradd( int  *A,  int  *B, int *C,  int size){
    
    for(  int i = 0; i < size; i++){
       // if(i < size)
        C[i] = A[i] + B[i];
         
         printf("C[i] %d = ", C[i]);
       
}

}

int main(int argc, char ** argv){

    // vector<int>a ,b,c ;
    // a.push_back(5);
    // a.push_back(-3);
    // b.push_back(-1);
    // b.push_back(4);

    int a[2] = {5,5};
    int b[2] = {-1,4};
    int c[2] ;

    vectoradd(a,b,c,2);


       float vector_size = 64;
       float vector_bytes = vector_size * sizeof(float);

       printf("vector size %f \n, vector bytes %f ", vector_size,vector_bytes);

}
