package LeetCode;

public class MaxWealth {

    public static void main(String[] args) {

    }

    public int maxwel(int[][] accounts) {
        // person = rol;
        // account = col
        int ans = Integer.MIN_VALUE;
        for (int person = 0; person < accounts.length; person++) {
            int sum = 0;
            for (int account = 0; account < accounts[person].length; account++) {

                sum += accounts[person][account];

            }

            if (sum > ans) {

                ans = sum;
            }

        }
        return ans;
    }
}
