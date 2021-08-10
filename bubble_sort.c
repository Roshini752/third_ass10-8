#include <stdio.h>
int main()          //a[0]=1 a[1]=2 a[2]=4 a[3]=6 a[4]=5 a[5]=3 a[6]=7 a[7]=8
{

    int arr[]={2,4,1,6,5,3,7,8};
    int i,j,n,temp,flag;
    n=sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++) // 0 1                 //we will start iterating from this line
    {
        flag=0;
        for(j=i+1;j<n;j++) //1 2..7 2 3
        {
        if(arr[i]>arr[j]) //2>4 2>1 1>2.....1>8 4>2 2>6..2>8                             //condition to check swapping		    
        {
            temp=arr[i];  	//2 4	
            arr[i]=arr[j]; 	//1 2
            arr[j]=temp;  	//2 4
            flag=1;             //flag is to break the loop
        }
        }
        if(flag==0)
        {
            break;
        }

    }
    for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
    printf("\nsecond largest is %d",arr[n-2]);

}
