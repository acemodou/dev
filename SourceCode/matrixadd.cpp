#include<cstdio>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////
//! C = A * B 
// use int for simplicity 
//! @ param A matrix A 
//! @ Param B matrix B
//! @ Param C matrix result 
//! @ param Width 
///////////////////////////////////////////////////////

const int  row = 4;
const int  col = 4;

void matrixMult(int   A[row][col], int  B[row][col], int C[row][col], int width){
  for (unsigned int i = 0; i < width; i++)
      for(unsigned int j = 0; j < width; j++){
          int sum = 0;
      for(unsigned int k = 0; k < width; k++){
            int *a = A[i * width + k];
            int *b = B[k * width + j];
            sum += (*a) * (*b);

            
      }
      printf("%d\n",sum);

      printf("%d", C[i * width + j] =sum);

    }

  }





int main()
{
   
     int matrixA[4][4] = {{5,2,6,1},
                         {0,6,2,0},
                         {3,8,1,4},
                         {1,8,5,6}};

     int matrixB[4][4] = {{7,5,8,0},
                         {1,8,2,6},
                         {9,4,3,8},
                         {5,3,7,9}};
     int matrixC[4];

int width = 4;

matrixMult(matrixA,matrixB,matrixC,width);



   
   
}