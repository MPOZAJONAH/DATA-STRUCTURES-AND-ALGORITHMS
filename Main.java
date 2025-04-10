import java.util.Scanner;


class MyStack {
     private String[] stackArray;
    private int top;
    private int capacity;


    public MyStack(int size) {
        stackArray = new String[size];
        capacity = size;
        top = -1;
    }


    public void push(String value) {
        if (isFull()) {
            System.out.println("Stack Overflow! Cannot push " + value);
            return;
        }
        stackArray[++top] = value;
        System.out.println(value + " pushed to stack");
    }


    public String pop() {
        if (isEmpty()) {
            System.out.println("Stack Underflow! Cannot pop.");
            return null;
        }
        return stackArray[top--];
    }


    public String peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty! No top element.");
            return null;
        }
        return stackArray[top];
    }


    public boolean isEmpty() {
        return top == -1;
    }


    public boolean isFull() {
        return top == capacity - 1;
    }

    // Override toString method to print stack contents
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder("Stack: ");
        for (int i = 0; i <= top; i++) {
            sb.append(stackArray[i]).append(" ");
        }
        return sb.toString();
    }
}


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("PROGRAM TO IMPLEMENT A STACK USING FRIENDS");

        System.out.print("Enter the number of friends you have: ");

        try {
            int numberOfFriends = scanner.nextInt();
            scanner.nextLine();

            if (numberOfFriends > 0) {
                MyStack stack = new MyStack(numberOfFriends);

                for (int i = 0; i < numberOfFriends; i++) {
                    System.out.print("Enter the name of friend " + (i + 1) + ": ");
                    String friendName = scanner.nextLine();
                    stack.push(friendName);
                }

                System.out.println("\nYour friendship as a stack: " + stack);

                System.out.println("Enter 1 to view the friend at the top / 0 to exit: ");
                int topChoice = scanner.nextInt();

                if (topChoice == 1) {
                    System.out.println("Top of the stack: " + stack.peek());

                    System.out.println("Do you wish to pop the friend at the top? Enter 1 to pop / 0 to retain: ");
                    int popChoice = scanner.nextInt();
                    if (popChoice == 1) {
                        System.out.println("Removed: " + stack.pop());
                        System.out.println("Stack after popping: " + stack);
                    } else {
                        System.out.println("You chose to keep all friends in the stack.");
                        System.out.println("Final friendship stack: " + stack);
                    }
                } else {
                    System.out.println("You exited!");
                }
            } else {
                System.out.println("YOU REALLY DON'T HAVE FRIENDS!!!");
            }

        } catch (Exception e) {
            System.out.println("Invalid input! Program exiting.");
        }

        scanner.close();
    }
}
