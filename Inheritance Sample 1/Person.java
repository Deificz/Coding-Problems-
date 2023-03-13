
public class Person {

    private String strLast;
    private String strFirst;
    private String strMiddle;
    private Integer intDOBMonth;
    private Integer intDOBDay;
    private Integer intDOBYear;

    Person(String tstrFirst, String tstrMiddle, String tstrLast,Integer tintDOBMonth, Integer tintDOBDay, Integer tintDOBYear) {
        this.strFirst = tstrFirst;
        this.strMiddle = tstrMiddle;
        this.strLast = tstrLast;
        this.intDOBMonth = tintDOBMonth;
    	this.intDOBDay = tintDOBDay;
    	this.intDOBYear = tintDOBYear;
    }  

    Person(String tstrFirst, String tstrLast) {
        this.strFirst = tstrFirst;
        this.strLast = tstrLast;
    }  

    public void showName() {
        System.out.print(this.strFirst + " " + this.strMiddle + " " + this.strLast);
    }  

    public String getFirst() {
        return this.strFirst;
    }  

    public String getDOB() {
        return this.intDOBMonth.toString() + "-" + 
                  this.intDOBDay.toString() + "-" + 
                  this.intDOBYear.toString();    
    }  

    public String getMiddle() {
        return this.strMiddle;
    }  

    public String getLast() {
        return this.strLast;
    }  

    public void setFirst(String tstrFirst) {
        this.strFirst = tstrFirst;
    }  
    public void setMiddle(String tstrMiddle) {
        this.strMiddle = tstrMiddle;
    }  

    public void setLast(String tstrLast) {
        this.strLast = tstrLast;
    }  

    public void setDOB(int tintMonth, int tintDay, int tintYear) {
        this.intDOBMonth = tintMonth;
        this.intDOBDay = tintDay;
        this.intDOBYear = tintYear;
    }  

}  