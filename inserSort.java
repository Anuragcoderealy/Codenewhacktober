// Insertion sort in Java
import java.util.Arrays;
import java.util.Scanner;

class InsertionSort {

  void insertionSort(int array[]) {
    int size = array.length;

    for (int step = 1; step < size; step++) {
      int key = array[step];
      int j = step - 1;

      // Compare key with each element on the left of it until an element smaller than
      // it is found.
      // For descending order, change key<array[j] to key>array[j].
      while (j >= 0 && key < array[j]) {
        array[j + 1] = array[j];
        --j;
      }

      // Place key at after the element just smaller than it.
      array[j + 1] = key;
    }
  }

  // Driver code
  public static void main(String args[]) {
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number of elements you want to store: ");  
    //reading the number of elements from the that we want to enter  
    int n=sc.nextInt();  
   //creates an array in the memory of length 10  
   int[] arr = new int[n];  
  System.out.println("Enter the elements of the array: ");  
  for(int i=0; i<n; i++)  
    {  
      //reading array elements from the user   
      arr[i]=sc.nextInt();  
     }  
    InsertionSort is = new InsertionSort();
    is.insertionSort(arr);
    System.out.println("Sorted Array in Ascending Order: ");
    System.out.println(Arrays.toString(arr));
  }
}
