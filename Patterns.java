import org.w3c.dom.ls.LSOutput;

public class Patterns {
    public static void main(String[] args) {
    Pattern1(5);
        System.out.println();
    Pattern2(5);
        System.out.println();
        Pattern3(5,0);
        System.out.println();
        Pattern4(5);
        System.out.println();
        Pattern5(5);
        System.out.println();
        pattern6(5);
    }
    static void Pattern1(int n){
        for (int i = 1; i <=n ; i++) {
            for (int j = 1; j <=i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void Pattern2(int n){
        for (int i = 1; i <=n ; i++) {
            for (int j = 1; j <=n ; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    static void Pattern3(int r,int c){
        if (r==0){
            return;
        }
        if(c < r){
            System.out.print("* ");
            Pattern3(r,c+1);

        }else{
            System.out.println();
            Pattern3(r-1,0);

        }

    }
    static void Pattern4(int n){
        for (int i = 1; i <=n ; i++) {
            for (int j = 1; j <=i ; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }
    static void Pattern5(int n){
        for (int i = 0; i <=2*n; i++) {
            int totalcols = i > n ? 2*n-i:i;
            for (int j = 1; j <totalcols ; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    static void pattern6(int n){
        for (int i = 1; i <=n; i++) {
            for (int k = 0; k <n-i ; k++) {
                System.out.print("  ");
            }

            for (int j = i; j >=1 ; j--) {
                System.out.print(j+" ");
            }
            for (int j = 2; j <=i; j++) {
                System.out.print(j+" ");
            }

            System.out.println();
        }
    }

}
