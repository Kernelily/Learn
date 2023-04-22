// A class should always start with an uppercase first letter.
// Also, the class name must be matched with file name.
public class Learning {
    public static void main(String[] args) {
        printHW();

    }

    public static void printHW() {
        System.out.println("Hello World!");
    }

    private int tVariables() {
        // With final keyword, this will be a constant, read-only
        final int myNum = 7;
        float myFloat = 3.14f;
        char myLetter = 'A';
        boolean myBool = true;
        String myName = "Kernel";

        System.out.print(myNum + " " + myFloat + " " + myLetter + " " + myBool);
        System.out.println(myBool + " " + myName);

        return 0;
    }

    private int tPrint() {
        String tStr = "Kernelily";
        String tSrt = "is me.";
        String tSStr = tStr + " " + tSrt;

        System.out.println(tSStr + " " + tSStr.length());

        return 0;
    }
}
