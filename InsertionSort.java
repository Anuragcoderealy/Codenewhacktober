public class insertionsort {
    public static void main(String args[]) {
        int arr[] = { 9, 5, 23, 8, 10, 2 };
        for (int i = 1; i < 6; i++) {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        for (int i = 0; i < 6; i++) {
            System.out.print(arr[i] + " ");
        }
    }

}
