public class Person {

    private String strLast;
    private String strFirst;
    private String strMiddle;

   /* 
       Access Modifier or Scope
       -----------------------------
       public        - available anywhere
       <default> - available from within a package
       protected  - available from within a package, class, and it's subclass
       private      - available from within a class only

       Setters and Getters (Mutators and Accessors)
   */

    Person(String tstrFirst, String tstrMiddle, String tstrLast) {
        this.strFirst = tstrFirst;
        this.strMiddle = tstrMiddle;
        this.strLast = tstrLast;
    }  

    Person(String tstrFirst, String tstrLast) {
        this.strFirst = tstrFirst;
        this.strLast = tstrLast;
    }  

    public void showName() {
        System.out.println(this.strFirst + " " + this.strMiddle + " " + this.strLast);
    }  

    public void showName() {
        System.out.println(this.strFirst + " " + this.strLast);
    }  

    public String getFirst() {
        return this.strFirst;
    } 
    
    public String.getMiddle(){
	return this.strMiddle;
    }

    public String getLast() {
        return this.strLast;
    }  
	

}  