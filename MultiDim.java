public class MultiDim {

    public static void main(String[] args) {
        //    R C
        float[][] arrProduct = {{1001f, 23001f, 2.87f}, {1002f, 23002f, 5.44f}, 
                                          {1004f, 23004f, 7.32f}, {1005f, 23005f, 1.23f}, 
                                          {1009f, 23009f, 22.45f}};
        
        for (int intRow = 0; intRow < arrProduct.length; intRow++) {
        
            for (int intCol = 0; intCol < 3; intCol++) {

                System.out.print(arrProduct[intRow][intCol] + " ");

            }  // for (int intCol = 0; intCol < 3; intCol++)
  
            System.out.println();

        }  // for (int intRow = 0; intRow < arrProduct.length; intRow++)
        
        
       

        }  // for (float[] arrData : arrProduct)

    }  // public static void main(String[] args)

 // public class MultiDim