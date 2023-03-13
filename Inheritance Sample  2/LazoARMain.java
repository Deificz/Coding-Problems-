import java.util.Scanner;

public class LazoARMain {
	
	private static Scanner Scan = new Scanner(System.in);
    public static void main(String[] args) {
    	 
    	 int intMenu;
    	 int intMenu2;
    	 int intPhone;

    	LazoARTelephone Telephone = new LazoARTelephone("Graham Bell Manufacture", "PLDT", 63, 1772, 921544334);
    	LazoARSmartFone Smartphone = new LazoARSmartFone("Aeron Lazo", "Black");
    	
    	System.out.println ("1. Telephone \n2. SmartPhone");
    	intPhone = Scan.nextInt();
    	if (intPhone == 1) {
    	System.out.println ("Options :\n 1. Call \n 2. Receive \n 3. Reject");
 		intMenu = Scan.nextInt();
 		if (intMenu > 0 && intMenu < 4) {
			switch(intMenu) {
			case 1: 
				System.out.println("Calling : \n" + Telephone.getManufacturer()+ " " + Telephone.getNetwork() + " " + Telephone.getAreaCode()+ " " +  Telephone.getCountryCode() + Telephone.getNumber());
				
				break;
			case 2:
				System.out.println("\nAccepting call from: \n" + Telephone.getManufacturer() + " " + Telephone.getNetwork()+ " " + Telephone.getAreaCode() + " "+ Telephone.getCountryCode() + Telephone.getNumber());
				
				break;
			case 3:
				System.out.println("\nIncoming call from : \n" + Telephone.getManufacturer() + " " + Telephone.getNetwork()+ " " + Telephone.getAreaCode()+ " " + Telephone.getCountryCode() + Telephone.getNumber() + " rejected");
				break;
      
							} 

 							}
 				}
    	else if (intPhone == 2) {
    		System.out.println ("Options :\n 1. Install application \n 2. Uninstall Application ");
     		intMenu2 = Scan.nextInt();
     		if (intMenu2 >= 0 && intMenu2 < 3) {
    			switch(intMenu2) {
    			case 1: 
    				System.out.println("Installing : " + Smartphone.getOwner() + Smartphone.getColor());
    				break;
    			case 2:
    				System.out.println("\nRemoving: \n" + Smartphone.getOwner() + Smartphone.getColor());
    				break;
          
    							} 

     							}
    	}
    }
}
