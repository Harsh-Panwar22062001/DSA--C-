// Selection Sort in C++
void selectionSort(int arr[], int size)
{
   int i, j, minIndex;
   // loop to iterate over the entire array
   for (i = 0; i < size - 1; i++)
   {
       // set minIndex equal to the first unsorted element
       minIndex = i;
 
       //iterate over unsorted sublist
       for (j = i+1; j < size; j++)
      
    // helps in finding the minimum element
         if (arr[j] < arr[minIndex])
           minIndex = j;
       
// swapping the minimum element with the element at minIndex to place it at its correct position 
// using std::swap() method for swapping
       swap(arr[minIndex], arr[i]);
   }
}
