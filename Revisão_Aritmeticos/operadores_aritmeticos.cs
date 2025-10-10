using System;
class Arithmetic {
    static void Main() {
        int a = 15, b = 4;
        Console.WriteLine("a + b = " + (a + b));
        Console.WriteLine("a - b = " + (a - b));
        Console.WriteLine("a * b = " + (a * b));
        Console.WriteLine("a / b = " + ((double)a / b));
        Console.WriteLine("a / b (int) = " + (a / b));
        Console.WriteLine("a % b = " + (a % b));
        Console.WriteLine("a ^ b (pow) = " + Math.Pow(a, b));
    }
}