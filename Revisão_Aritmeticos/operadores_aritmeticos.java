package Revisão_Aritmeticos;

public class operadores_aritmeticos {
    public static void main(String[] args) {
        
        int a = 15;
        int b = 4;
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + ((double)a / b));
        System.out.println("a / b (int) = " + (a / b));
        System.out.println("a % b = " + (a % b));
        System.out.println("a ^ b (pow) = " + (int)Math.pow(a, b));
    }
}