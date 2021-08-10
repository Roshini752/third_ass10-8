#include<stdio.h>
int insertionSort(int arr[ ], int n)      //a[0]=5 a[1]=1 a[2]=6 a[3]=2 a[4]=4 a[5]=3
{
               int i, temp, j;
               for(i=1; i<n; i++)                //We will start iterating through index 1
               {   
                      temp=arr[ i ];         //Will store the value in a temporary variable
                      j= i-1; 
                      while(j>=0 && arr[ j ] > temp)         //check the which value is greater
                      {    
                                 arr[ j+1] = arr[ j ];  
                                 j--;   
                      }
                      arr[ j+1 ] = temp;              //Replace that value with the temporary variable
               }
}
int main()
{
    int i, arr[]={5,1,6,2,4,3};
    int n=sizeof(arr)/sizeof(int);
    printf("%d\n",n);
    insertionSort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}