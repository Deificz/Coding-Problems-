/*
     This program demonstrates common methods in
      the String class
*/

public class CommonStr {

    public static void main(String[] args) {
  
        String strAutobot = new String("Optimus Prime");
        String strDecepticon = new String("  Megatron  ");

        int intValue = 1;
        
        System.out.println(strAutobot.toUpperCase());

        System.out.println(strAutobot.toLowerCase());

        System.out.println(strDecepticon.trim());

        System.out.println(strAutobot.startsWith("Op"));
        System.out.println(strAutobot.endsWith("e"));

        System.out.println(strAutobot.charAt(0));
        System.out.println(strAutobot.charAt(4));
        System.out.println(strDecepticon.charAt(6));

        System.out.println(strAutobot.length());
        
        String strValue = String.valueOf(intValue);
        System.out.println(strValue + 25);

    }  // public static void main(String[] args)

}  // public class CommonStr