import java.util.Scanner;

public class LazoAeron1
{
	public static void main(String[]args)

	{
	
	//Declarations

	String student_code,firstname,middlename,lastname;
		int birth_month,birth_day,birth_year,age;
		
		
		Scanner Studin = new Scanner(System.in);

		
	//Inputs

		System.out.print("\nPlease enter your Student Code \n");
		System.out.print("Student Code: ");
		student_code = Studin.nextLine();
		System.out.print("\nPlease enter your Name\n");
		System.out.print("First name: ");
		firstname = Studin.nextLine();
		System.out.print("Middle name: ");
		middlename = Studin.nextLine();
		System.out.print("Last Name: ");
		lastname = Studin.nextLine();
		System.out.print("\nPlease enter your Birthday i.e 2001/05/08 \n");
		System.out.print("Year: ");
		birth_year = Studin.nextInt();
		System.out.print("Month: ");
		birth_month = Studin.nextInt();
		System.out.print("Day: ");
		birth_day = Studin.nextInt();

		
	//Outputs

		if(birth_month<10||(birth_month==10 && birth_day<=21)){
				age = 2020-birth_year;
				System.out.println("\n Hello!" + " " + firstname + " " + "with student ID" + " "  + student_code + ". You are already" + " " + age + " " + "years old.");
			    }
	
		else {
				age = 2019-birth_year;
				System.out.println("\n Hello!" + " " + firstname + " " + "with student ID" + " "  + student_code + ". You are already" + " " + age + " " + "years old.");
		     }

	}


}