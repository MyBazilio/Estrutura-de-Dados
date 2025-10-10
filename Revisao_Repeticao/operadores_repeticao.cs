using System;
class operadores_repeticao {
    static void Main() {
        int n = 10;
        int total = 0;
        for (int i = 1; i <= n; i++) total += i;
        Console.WriteLine("sum of 1..10 = " + total);
        int a = 0, b = 1;
        Console.Write("fibs: ");
        for (int i = 0; i < 10; i++) {
            Console.Write(a + (i<9 ? ", " : "\n"));
            int next = a + b; a = b; b = next;
        }
    }
}