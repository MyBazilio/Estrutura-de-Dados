public class operadores_repeticao {
    public static void main(String[] args) {
        int n = 10;
        int total = 0;
        for (int i = 1; i <= n; i++) total += i;
        System.out.println("sum of 1..10 = " + total);
        int a = 0, b = 1;
        System.out.print("fibs: ");
        for (int i = 0; i < 10; i++) {
            System.out.print(a + (i<9 ? ", " : "\n"));
            int next = a + b;
            a = b;
            b = next;
        }
    }
}