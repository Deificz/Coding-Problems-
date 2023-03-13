
public class EmployeeMain {

    public static void main(String[] args) {

        Employee objEmp = new Employee("Renato", "Culumeda", "Castrence", 5,8,2001,
                                                              "AX-023-N3325", "Maintenance", 
                                                              "Chief Mechanic", 44000f);
        System.out.println("Previous values");
        objEmp.showEmployee();

        objEmp.setDepartment("MIS");
        objEmp.setPosition("MIS Supervisor");
        objEmp.setSalary(60000f);

        System.out.println("New values");
        objEmp.showEmployee();
  
 
        /*
        objEmp.showName();
        objEmp.setFirst("Janice");
        objEmp.setMiddle("Contreras");
        objEmp.setLast("Benedicto");
        objEmp.showName();
        */

 
    }  //  public static void main(String[] args)

}  // public class EmployeeMain