#include<cstdio>
#include<algorithm>
using namespace std;

// int maxSubArray(int a[], int size){
//     int max_so_far, max_ending_here = 0;
//     for(int i = 0; i < size; i++)
//     {
//         max_ending_here +=a[i];

//         if(max_ending_here < 0)
//         {
//             max_ending_here = 0;
//         }

//         else if(max_ending_here > max_so_far)
//         {
//             max_so_far = max_ending_here;
//         }
//     }

//     return max_so_far;
// }

int maxSubArray(int a[], int size){
    int max_so_far =a[0];
    int max_ending_here = a[0];
    for(int i = 1; i < size; i++)
    {
        max_ending_here = max(a[i],max_ending_here +a[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};

     int result =  maxSubArray(arr, 7);
     printf("%d", result);
}
