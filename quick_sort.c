#include <stdio.h>
void swap(int *a, int *b)       
{
  int t = *a;
     *a = *b;
     *b = t;
}
int partition(int array[], int low, int high)       
{
  int pivot = array[high]; 
  
  int i = (low - 1);  
   //a[0]=0 a[1]=6 a[2]=2 a[3]=1 a[4]=8 a[5]=9 a[6]=7 
  
  for (int j = low; j < high; j++)    
  {
    if (array[j] <= pivot)  
    {
        i++; 
        
        swap(&array[i], &array[j]);           // swap element at i with element at j
    }
  }

  swap(&array[i + 1], &array[high]);        // swap the pivot element with the greater element at i
  
   return (i + 1);        // return the partition point
}

void quickSort(int array[], int low, int high) 
{
  if (low < high) 
  {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high); 
    
    quickSort(array, low, pi - 1);       // recursive call on the left of pivot
    
    
    quickSort(array, pi + 1, high);        // recursive call on the right of pivot
  }
}


void printArray(int array[], int size)      // function to print array elements
{
  for (int i = 0; i < size; ++i) 
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() 
{
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  printf("n=%d\n",n);
  printf("Unsorted Array\n");
  printArray(data, n);
  
  quickSort(data, 0, n - 1);        // perform quicksort on data
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
