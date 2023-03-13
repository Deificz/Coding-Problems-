
import java.text.DecimalFormat;

public class Employee extends Person {

    private String strEmpCode;
    private String strDepartment;
    private String strPosition;
    private Float fltSalary;
    
    DecimalFormat comma = new DecimalFormat("#,###.00");

    Employee(String tstrFirst, String tstrMiddle, String tstrLast, 
    		Integer tintDOBMonth, Integer tintDOBDay, Integer tintDOBYear,
            String tstrEmpCode, String tstrDepartment, 
            String tstrPosition, Float tfltSalary) {
    
        super(tstrFirst, tstrMiddle, tstrLast, tintDOBMonth, tintDOBDay, tintDOBYear);
        
        this.strEmpCode = tstrEmpCode;
        this.strDepartment = tstrDepartment;
        this.strPosition = tstrPosition;
        this.fltSalary = tfltSalary;

    }  

    public void setEmpcode(String tstrEmpCode) {
        this.strEmpCode = tstrEmpCode;
    }  

    public void setDepartment(String tstrDepartment) {
        this.strDepartment = tstrDepartment;
    }  

    public void setPosition(String tstrPosition) {
        this.strPosition = tstrPosition;
    }  

    public void setSalary(Float tfltSalary) {
        this.fltSalary = tfltSalary;
    }  



    public String getEmpCode() {
        return this.strEmpCode;
    }  

    public String getDepartment() {
        return this.strDepartment;
    }  

    public String getPosition() {
        return this.strPosition;
    }  

    public Float getSalary() {
        return this.fltSalary;
    }  

    public void showEmployee() {
        System.out.println(this.strEmpCode + " | " + 
                                    getFirst() + " " + getMiddle() + " " + getLast() + " | " + getDOB() + " | " +
                                    this.strDepartment + " | " + this.strPosition + " | " +
                                    comma.format(this.fltSalary));
    } 

}  