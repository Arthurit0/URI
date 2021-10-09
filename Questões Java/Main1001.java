import java.io.IOException;
import java.util.Scanner;

public class Main1001 {
 
    public static void main(String[] args) throws IOException {
        Scanner scr = new Scanner(System.in);
        
        int A, B, X;

        A = scr.nextInt();
        B = scr.nextInt();

        X = A + B;

        System.out.println("X = "+X);
        scr.close();
 
    }
 
}