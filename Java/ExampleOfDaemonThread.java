class Thread1 extends Thread{
    
    Thread1(String name){
    super(name);
    }
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println(Thread.currentThread().getName());
            try{
                Thread.sleep(10000);
                }catch(InterruptedException e){
                    e.printStackTrace();
                }
        }
    }
}

public class ExampleOfDaemonThread {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1("Daemon");
        //here make thread1 daemon thread
        t1.setDaemon(true);
        t1.start();

        for(int i=1;i<=15;i++){
            System.err.println(Thread.currentThread().getName());
            try{
            Thread.sleep(1000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
