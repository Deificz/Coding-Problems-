import java.io.FileReader;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class ReadGrades {

    static String strDocument;
    static Scanner objDocument;

    public static void main(String[] args){

        try {

            strDocument = "grades.txt";
            objDocument = new Scanner(new FileReader(strDocument));

            int intGrade;
            int intTotal = 0;
            int intAverage = 0;
            int intSize = 0;
        
            /*
            intGrade = Integer.parseInt(objDocument.nextLine());
            System.out.println(intGrade);
            intGrade = Integer.parseInt(objDocument.nextLine());
            System.out.println(intGrade);
            */
            System.out.println("Name of File: " + strDocument);
            while (objDocument.hasNextLine()) {
            	
            	intSize += 1;
                intGrade = Integer.parseInt(objDocument.nextLine());
                intTotal += intGrade;
                System.out.println(intGrade);
            }  // while (objDocument.hasNextLine())
            objDocument.close();
            
            intAverage = intTotal/intSize;
            
            System.out.println("Average Grade is " + intAverage);

        } catch (FileNotFoundException objFE) {

            System.out.println("The file given does not exist!");
            System.out.println("Please contact the developer.");

        } catch (Exception objEx) {

            System.out.println("This is a generic error catch block.");
            System.out.println(objEx);

        }  // try

    }  // public static void main(String[] args) throws IOException

}  // public class FileProc2