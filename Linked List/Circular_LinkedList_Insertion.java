import java.util.Scanner;

public class Circular_LL_Insertion {
    Node head = null;
    Node tail = null;

    public Circular_LL_Insertion() {
    }

    public void insertion() {
        Scanner sc = new Scanner(System.in);

        int n;
        do {
            System.out.println("Enter data: ");
            int data = sc.nextInt();
            Node new_node = new Node(data);
            if (this.head == null) {
                this.head = new_node;
                this.tail = new_node;
                new_node.next = this.head;
            } else {
                System.out.println("Enter 1 to insert the item at the beginning, 2 to insert the item at the end, 3 to insert the item at any specific location");
                int w = sc.nextInt();
                switch (w) {
                    case 1:
                        new_node.next = this.head;
                        this.head = new_node;
                        this.tail.next = this.head;
                        break;
                    case 2:
                        this.tail.next = new_node;
                        new_node.next = this.head;
                        this.tail = new_node;
                        break;
                    case 3:
                        Node tempins = this.head;
                        System.out.println("Enter the data of the location after which you want to insert new node:");

                        for(int insdat = sc.nextInt(); tempins.data != insdat; tempins = tempins.next) {
                        }

                        new_node.next = tempins.next;
                        tempins.next = new_node;
                }
            }

            System.out.println("Do you want to add more data?If 'Yes' press 0: ");
            n = sc.nextInt();
        } while(n == 0);

    }

    public void traverse() {
        Node temp = this.head;
        if (this.head == null) {
            System.out.println("Linked List doesn't exist.");
        } else {
            do {
                System.out.println(temp.data);
                temp = temp.next;
            } while(temp != this.head);
        }

    }

    public static void main(String[] args) {
        Circular_LL_Insertion s2 = new Circular_LL_Insertion();
        s2.insertion();
        s2.traverse();
    }

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }
}
