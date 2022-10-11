package Strings;

import java.util.ArrayList;

public class DiceRoll {
    public static void main(String[] args) {
      ArrayList<String> ans =  roll("",4);
        System.out.println(ans);
        rollface("",4,8);
    }
    static ArrayList<String> roll(String p, int target){
        if(target==0){
            ArrayList<String> list = new ArrayList<>();
            list.add(p);
            return list;
        }
        ArrayList<String> ans = new ArrayList<>();
        for (int i = 1; i <=6 && i<=target ; i++) {
            ans.addAll(roll(p+i,target-i));

        }
        return ans;
    }
    static void rollface(String p, int target,int face){
        if(target==0){
            System.out.println(p);
            return;
        }

        for (int i = 1; i <=face && i<=target ; i++) {
            rollface(p+i,target-i,face);

        }

    }
}
