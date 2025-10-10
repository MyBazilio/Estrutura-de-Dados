using System;
class operadores_decisao {
    static void Main() {
        int score = 78;
        string grade;
        if (score >= 90) grade = "A";
        else if (score >= 75) grade = "B";
        else if (score >= 60) grade = "C";
        else grade = "F";
        Console.WriteLine("grade -> " + grade);
    }
}