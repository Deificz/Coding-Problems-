import javax.swing.JOptionPane;

public class LazoAeron2
{
	public static void main(String[]args)
	{
	// Declarations

		String student_code,firstname,middlename,lastname,birth_month,birth_day,birth_year;
		int month,day,year,age;
	// Inputs

		JOptionPane.showMessageDialog(null,"Please enter your Student Code");
		student_code = JOptionPane.showInputDialog("Student Code: ");
		JOptionPane.showMessageDialog(null,"Please enter your Name");
		firstname = JOptionPane.showInputDialog("First Name: ");
		middlename = JOptionPane.showInputDialog("Middle Name: ");
		lastname = JOptionPane.showInputDialog("Last Name: ");
		JOptionPane.showMessageDialog(null,"Please enter your Birthday i.e 2001/05/08");
		birth_year = JOptionPane.showInputDialog("Year: ");
		birth_month = JOptionPane.showInputDialog("Month: ");
		birth_day = JOptionPane.showInputDialog("Day: ");
			
	//Parsing

		year = Integer.parseInt(birth_year);
		month = Integer.parseInt(birth_month);
		day = Integer.parseInt(birth_day);
		
	//Outputs

		if(month<10||(month==10 && day<=21)){
				age = 2020-year;
				JOptionPane.showMessageDialog(null,"Hello!" + " " + firstname + " " + "with student ID" + " "  + student_code + ". You are already" + " " + age + " " + "years old.");
			    }
	
		else {
				age = 2019-year;
				JOptionPane.showMessageDialog(null,"Hello!" + " " + firstname + " " + "with student ID" + " "  + student_code + ". You are already" + " " + age + " " + "years old.");
		     }

	}
}