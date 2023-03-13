public class OneDim {

    public static void main(String[] args) {

        int[] arrData = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        /*
        for (int intCounter = 0; intCounter < arrData.length; intCounter++) {

            System.out.print(arrData[intCounter] + " ");

        }  // for (int intCounter = 0; intCounter < arrData.length; intCounter++)
        */

        for (int intValue : arrData) {

            System.out.println(intValue);

        }  //  for (int intValue : arrData)

    }  // public static void main(String[] args)

}  //public class OneDim