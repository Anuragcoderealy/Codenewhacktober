// Java program to Cyclically Rotate A One Dimensional Array
import java.util.*;
class Main 
{
	
	/* Function to print Array */
	void printArray(int arr[], int n)
	{
        for(int i = 0; i<n; i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
	}

	//This function rotates the array by once in the RightToLeft direction
    public void rotate(int arr[], int n)
    {
       int temp = arr[n-1]; //Save Last element temporarily
        for(int i = n-1; i >0; i--)
        {
            arr[i] = arr[i-1]; //Shift all elements one place to the right
        }
        arr[0] = temp; //place the last element in the first place
    }
	public static void main(String [] args)
	{
        Scanner sc = new Scanner(System.in);
        Main obj = new Main(); //Creating New Object to call methods
        System.out.print("Enter Size for Array : ");
        int n = sc.nextInt();
        //I am Generating a new random array but you can always choose to enter manually or as input
        int arr[] = new int[n];
        Random rand = new Random();
		for (int i=0; i<n; i++)
		{
			arr[i] = rand.nextInt(50);
		}
        //Now we have good randomly generated Array
        System.out.println("Your Generated Array : ");
        obj.printArray(arr,n);
        //Now let's ask the user to enter how many times they want to rotate the array
        System.out.print("Enter Number of Rotations\n(Positve for Right to left &\nNegative for Left to Right)  : ");
        int k = sc.nextInt();
        
        k=k%n; 
        /*if number of rotations is more than the size of array,
         Array will repeat itself at some point
         thus to prevent it we cut out those extra rotaions*/
         
         //Now k number of left to right rotations is = (n-k) number of Right to Left rotations
         if(k<0){
            //Checking if negative(Left to Right rotations)
            k=k+n; //Equivalent amount of Right to Left Rotations
         }

         for(int i = 0 ; i<k; i++)
         {
            obj.rotate(arr,n);
            obj.printArray(arr, n);
         }

         sc.close();
	}
}
// This code is contributed by Pranjal Raj
