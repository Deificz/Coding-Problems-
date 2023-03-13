
import java.text.DecimalFormat;
public class LazoAeron1 
{
	public static void main(String[] args)
		{
		
		//Declarations
		int table,row,col ;
		float amount = 0;
		int i;
		DecimalFormat df = new DecimalFormat("0.00");

		float[][][]arrProduct = {{{1001f,23001f,2.87f},{1002f,23002f,5.44f},
					 {1004f,23004f,7.32f},{1005f,23005f,1.23f},
				         {1009f,23009f,22.45f}
					 },
	
					 {{23009f,10f},{23004f,3f},
			                 {23004f,6f},{23002f,2f},
					 {23002f,3f},{23005f,22f},
					 {23007f,12f}
					 },
								 
					 {{0f,0.0f,0.00f},{0f,0.0f,0.00f},
					  {0f,0.0f,0.00f},{0f,0.0f,0.00f},
					  {0f,0.0f,0.00f},{0f,0.0f,0.00f},
					  {0f,0.0f,0.00f}
				         }
					 };
	
		
		//Computation for table 3
		  for(row = 0; row < 7; row++)
		   {
			  for(i = 0; i < 5; i++)
			  		if(arrProduct[1][row][0] == arrProduct[0][i][1])
			  				{
			  					arrProduct[2][row][0] = arrProduct[0][i][0];
			  					arrProduct[2][row][1] = arrProduct[1][row][1];
			  					arrProduct[2][row][2] = arrProduct[0][i][2] * arrProduct[1][row][1];
			  					arrProduct[2][row][2] = Float.valueOf(df.format(arrProduct[2][row][2]));
			  					amount = amount + arrProduct[2][row][2];
			  				}
		    }
		  
		  //Outputs
		  System.out.print( "\n\tProduct Code     Quantity        Price");
		  System.out.print( "\n\t");
		  
		  for(row = 0; row < 7; row++)
		   {
			  System.out.print( "\n\t");
		    for (col = 0; col < 3; col++ )
		      {
		    	
		    	System.out.print( arrProduct[2][row][col] + "\t\t ");
		      }
		    	System.out.println();
		    	
		   }
		  
		  System.out.println("\n\n\t\t\t\t\t"+"Total Amount: "+amount);
	
	     }	
}

	
          
















