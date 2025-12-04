/*
 *
 * @author  Giordan Zeina
 * @version 1.0
 * @since   2025-10-27
 */

import java.util.ArrayList;

public final class GiordanStack {
    /**
     * Create the Stack as a List of Integers.
     */
    private ArrayList<String> stringList = new ArrayList<>();

    /**
     * A brief description of what the method does (first sentence is key).
     *
     * @param pushItem adds to the top of the stack.
     */
    public void pushItem(final String pushItem) {
        stringList.add(pushItem);
    }

    /**
     * @return Pops String at the top of the Stack.
     */
    public String popItem() {
        return stringList.remove(stringList.size() - 1);
    }

    /**
     * @return Prints String at the top of the Stack.
     */
    public ArrayList<String> peekItem() {
        return stringList[0];
    }

    /**
     * @return Prints our Stack of Strings.
     */
    public ArrayList getItem() {
        return stringList;
    }

    /**
     * @return Prints our Stack of Integers.
     */
    public int getSize() {
        return stringList.size();
    }

    public void clearStack() {
        System.out.println("Empting the stack ...");
        stringList.clear();
    }

    /**
     * @return true or false.
     */
    public boolean isEmpty() {
        if (stringList.size() == 0) {
            return true;
        }
        return false;
    }
}
