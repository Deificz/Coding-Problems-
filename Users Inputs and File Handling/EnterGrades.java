import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Scanner;
import java.io.IOException;

public class EnterGrades {

    public static void main(String[] args){
    	
    	Scanner scan = new Scanner(System.in);
        String strDocument = "grades.txt";
        
        int intGrade;
        int intAns = 0;
        
        PrintWriter objDocument;
        
		try {
			objDocument = new PrintWriter(new FileWriter(strDocument,true));
			System.out.println("Name of File: " + strDocument);
			 do {
				  System.out.println("Enter Grade: ");
				  intGrade = Integer.parseInt(scan.nextLine());
				  objDocument.println(intGrade);
				  System.out.println("Press 1 to continue otherwise Press 0 to exit");
				  intAns = Integer.parseInt(scan.nextLine());
	            } while (intAns == 1);
			
		     objDocument.close();
		      
		} catch (IOException objEx) {
	
			objEx.printStackTrace();
		}

        /* for appending data to a file without overwriting it
        PrintWriter objDocument = new PrintWriter(new FileWriter(strDocument), true);
        */

    }  // public static void main(String[] args) throws IOException

}  // public class FileProc1