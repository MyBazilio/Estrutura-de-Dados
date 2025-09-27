package Exercicio03_ComandosdeDecisaoeRelacionais;
import java.util.Scanner;
 
public class cod_acesso {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        System.out.print("Digite o código de acesso: ");
        String codigo = sc.nextLine();
 
        if (codigo.equals("Admin123")) {
            System.out.println("✅ Bem-vindo, Administrador!");
        } else if (codigo.equals("User123")) {
            System.out.println("✅ Bem-vindo, Usuário!");
        } else {
            System.out.println("❌ Senha incorreta");
        }
 
        sc.close();
    }
}