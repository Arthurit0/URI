import java.io.IOException;
import java.util.Scanner;

public class Main1002 {
 
    public static void main(String[] args) throws IOException {
        Scanner scr = new Scanner(System.in);
        
        double r = scr.nextDouble();
        double A = (3.14159)*(Math.pow(r,2));

        System.out.printf("A=%.4f%n",A);
        scr.close();
    }
 
}