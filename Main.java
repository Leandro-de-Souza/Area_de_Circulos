import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double r, area, pi;
		
		System.out.print("Digite o valor do raio do circulo: ");
		r = sc.nextDouble();
		
		pi = 3.14159;
        area = pi * r * r;
        
        System.out.println("AREA = " + String.format("%.3f", area));
        
        sc.close();
		

	}

}
