public class StaticMethod {

    public static void main(String[] args) {
    
        String strMessage = "Hello from inside a method..";
        float fltValue1, fltValue2, fltSum;

        fltValue1 = 5.4f;
        fltValue2 = 3.6f;

        dispMessage(strMessage);
        
        fltSum = compSum(fltValue1, fltValue2);
      
        System.out.println("The average of " +  fltValue1 + " and " + 
                                    fltValue2 + " is " + fltSum);
        
    }  // public static void main(String[] args)

    private static void dispMessage(String tstrValue) {
        System.out.println(tstrValue);
    }  // private static void dispMessage(String tstrValue)

    public static float compSum(float tfltVal1, float tfltVal2) {
        return tfltVal1 + tfltVal2;    
    }  // public static float compSum(float tfltVal1, float tfltVal2)

}  // public class StaticMethod