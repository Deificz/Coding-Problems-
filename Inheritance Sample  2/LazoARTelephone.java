
public class LazoARTelephone {
	

	private String strManufacturer;
	private String strNetwork;
	private int intCountryCode;
	private int intAreaCode;
	private int intNumber;
	
	 LazoARTelephone(String tstrManufacturer, String tstrNetwork, int tintCountryCode, int tintAreaCode, int tintNumber) {
	        this.strManufacturer = tstrManufacturer;
	        this.strNetwork = tstrNetwork;
	        this.intCountryCode = tintCountryCode;
	        this.intAreaCode = tintAreaCode;
	        this.intNumber= tintNumber;
	    } 
	  public void setManufacturer(String tstrManufacturer) {
	        this.strManufacturer = tstrManufacturer;
	    } 
	  public void setNetwork(String tstrNetwork) {
	        this.strNetwork = tstrNetwork;
	    } 
	  public void setCountryCode(int tintCountryCode) {
	        this.intCountryCode = tintCountryCode;
	    } 
	  public void setAreaCode(int tintAreaCode) {
	        this.intAreaCode = tintAreaCode;
	    } 
	  public void setNumber(int tintNumber) {
	        this.intNumber = tintNumber;
	    } 
	   public String getManufacturer() {
	        return this.strManufacturer;
	    } 
	   public String getNetwork(){
	    	return this.strNetwork;
	    }
	   public int getCountryCode() {
	        return this.intCountryCode;
	    }  
	   public int getAreaCode() {
		   return this.intAreaCode;
	   }
	   public int getNumber() {
		   return this.intNumber;
	   }
		
	
}
