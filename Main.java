/*
 *
 * @author  Giordan Zeina
 * @version 1.0
 * @since   2025-10-27
 */

import java.util.Scanner;

public final class Main {
    /**
     * Prevent instantiation.
     * Throw an exception IllegalStateException.
     * if this is ever called
     *
     * @throws IllegalStateException if this is ever called
     *
     */
    private Main() {
        throw new IllegalStateException("Cannot be instantiated");
    }

    /**
     * The starting main() function.
     *
     * @param args No args will be used
     */
    public static void main(final String[] args) {
        // variables
        GiordanStack stack = new GiordanStack();
        Scanner scanner = new Scanner(System.in);

        GiordanStack fruitStack = new GiordanStack();
        System.out.println("Fruit Items: " + fruitStack.getItem());
        System.out.println("The size of the stack is: " + fruitStack.getSize());
        System.out.println("Is the stack empty: " + fruitStack.isEmpty());
        fruitStack.pushItem("apple");
        fruitStack.pushItem("banana");
        fruitStack.pushItem("cherry");
        System.out.println("Fruit Items: " + fruitStack.getItem());
        System.out.println("Popped fruit items: " + fruitStack.popItem());
        System.out.println("Fruit Items: " + fruitStack.getItem());
        System.out.println("The size of the stack is: " + fruitStack.getSize());
        System.out.println("Is the stack empty: " + fruitStack.isEmpty());
        System.out.println("The top fruit is: " + fruitStack.peekItem());
        System.out.println("The size of the stack is: " + fruitStack.getSize());
        fruitStack.clearStack();
        System.out.println("The size of the stack is: " + fruitStack.getSize());
        System.out.println("Is the stack empty: " + fruitStack.isEmpty());

        GiordanStack colorStack = new GiordanStack();
        System.out.println("\nColor Items: " + colorStack.getItem());
        System.out.println("The size of the stack is: " + fruitStack.getSize());
        System.out.println("Is the stack empty: " + colorStack.isEmpty());
        colorStack.pushItem("red");
        colorStack.pushItem("green");
        colorStack.pushItem("blue");
        System.out.println("Color Items: " + colorStack.getItem());
        System.out.println("Popped color items: " + colorStack.popItem());
        System.out.println("Color Items: " + colorStack.getItem());
        System.out.println("The size of the stack is: " + colorStack.getSize());
        System.out.println("Is the stack empty: " + colorStack.isEmpty());
        System.out.println("The top color is: " + colorStack.peekItem());
        System.out.println("The size of the stack is: " + colorStack.getSize());
        colorStack.clearStack();
        System.out.println("The size of the stack is: " + colorStack.getSize());
        System.out.println("Is the stack empty: " + colorStack.isEmpty());

        GiordanStack dogStack = new GiordanStack();
        System.out.println("\nDog Items: " + dogStack.getItem());
        System.out.println("The size of the stack is: " + fruitStack.getSize());
        System.out.println("Is the stack empty: " + dogStack.isEmpty());
        dogStack.pushItem("poodle");
        dogStack.pushItem("retriever");
        dogStack.pushItem("beagle");
        System.out.println("Dog Items: " + dogStack.getItem());
        System.out.println("Popped dog items: " + dogStack.popItem());
        System.out.println("Dog Items: " + dogStack.getItem());
        System.out.println("The size of the stack is: " + dogStack.getSize());
        System.out.println("Is the stack empty: " + dogStack.isEmpty());
        System.out.println("The top dog is: " + dogStack.peekItem());
        System.out.println("The size of the stack is: " + dogStack.getSize());
        dogStack.clearStack();
        System.out.println("The size of the stack is: " + dogStack.getSize());
        System.out.println("Is the stack empty: " + dogStack.isEmpty());

        System.out.println("\nDone.");
        scanner.close();
    }
}
