import java.util.Scanner;

public class LazoAeronBrylle1 {
	private static Scanner Scan = new Scanner(System.in);
	
	public static void AreaSquare() {
		int intSquare;
		System.out.println("Enter side:");
	    intSquare = Scan.nextInt();
		intSquare = intSquare*intSquare;
		System.out.println(intSquare);
	}
	public static void AreaRectangle() {	
		int intRectangle;
		int length, breadth;
		System.out.println("Enter length:");
		length = Scan.nextInt();
		System.out.println("Enter breadth:");
	    breadth = Scan.nextInt();
		intRectangle = length * breadth;
		System.out.println(intRectangle);
			
	}
	public static void DiameterCircle() {
		int intRadius;
		System.out.println("Enter radius:");
		intRadius = Scan.nextInt();
		intRadius = intRadius*2;
		System.out.println(intRadius);
	}
		
public static void main(String[] args) {
		
		int intMenu;
		
		System.out.println ("Computation : \n 1. Area of Square \n 2. Area of a rectangle \n "
							+ "3. Diameter \n");
		
		System.out.println ("Choose what to do ::");
		intMenu = Integer.parseInt(Scan.nextLine());

		
			if (intMenu > 0 && intMenu < 3) {
				switch(intMenu) {
				case 1:
					LazoAeronBrylle1.AreaSquare();
					break;
				case 2: 
					LazoAeronBrylle1.AreaRectangle();
					break;
				case 3: 
					LazoAeronBrylle1.DiameterCircle();
					break;
								}
			}
	}
}