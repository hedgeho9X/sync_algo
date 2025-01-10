#include<iostream>
using namespace std;
const int N = 5000010;

int arr[N];

void quick_sort(int arr[] , int left , int right)
{
         if(left >= right) return;

         int i = left - 1 , j = right + 1 , x = arr[right + left >> 1];
         while(i < j)
         {
                 do i ++; while(arr[i] < x); 
                 do j --; while(arr[j] > x);
                 if(i < j) swap(arr[i],arr[j]);
         }

        quick_sort(arr,left,i);quick_sort(arr,j+1,right);
}
int main()
{
    int n , k ; 
    cin>>n>>k;
    for(int i = 0 ; i < n  ; i ++) scanf("%d",&arr[i]);
    quick_sort(arr, 0 , n-1);
    cout<<arr[k];
    return 0;
}



