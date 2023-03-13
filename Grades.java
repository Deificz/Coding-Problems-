import java.util.Scanner;
import java.util.ArrayList;

public class Grades {

    public static void main(String[] args) {

        float fltGrade, fltData, fltSum, fltAverage;

        fltGrade = fltData = fltSum= fltAverage = 0;

        Scanner objDataEntry = new Scanner(System.in);
        ArrayList<Float> objGrades = new ArrayList<Float>();
        
        System.out.println("Enter a grade, -1 to exit..");

        while (fltGrade >= 0) {

            fltGrade = objDataEntry.nextFloat();
        
            if (fltGrade > 0) {

                objGrades.add(fltGrade);

            }  // if (fltGrade > 0)
        
        }  // while (fltGrade >= 0)

        System.out.println("\nGrade Listing");
        System.out.println("--------------");

        for (int intIndex = 0; intIndex < objGrades.size(); intIndex++) {
            
            fltData = objGrades.get(intIndex);        
            System.out.println(fltData);
            fltSum += fltData;

        }  // for (int intIndex = 0; intIndex < objGrades.size(); intIndex++)

        /*
        objGrades.set(1, 89f);
        objGrades.remove(5);
        objGrades.clear();
        */

        fltAverage = fltSum / objGrades.size();

        System.out.println("\nAverage grade is " + fltAverage);

    }  // public static void main(String[] args)

}  // public class Grades