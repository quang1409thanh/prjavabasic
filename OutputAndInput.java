import java.util.Scanner;

// write print "hello world"
/**
 * OutputAndInput
 */
public class OutputAndInput {

    public static void main(String[] args) {
        
        Scanner inputReader=new Scanner(System.in); 

        System.out.println("Please write some text: ");

        String input=inputReader.nextLine();
        
        System.out.println("text is: ");
        System.out.println(input);

        // int a=Integer.parseInt(input);

        // System.out.println(2*a);

        float b=Float.parseFloat(input);

        System.out.println(b);

        System.out.printf("%.2f",b);

    }
}