
public class LazoARSmartFone {
	
	private String strOwner;
	private String strColor;
	private String strAppname;
	
	 LazoARSmartFone(String tstrOwner, String tstrColor) {
	        this.strOwner = tstrOwner;
	        this.strColor = tstrColor;
	 }
	 
	 public void setOwner(String tstrOwner) {
	        this.strOwner = tstrOwner;
	    } 
	 public void setColor(String tstrColor) {
	        this.strColor = tstrColor;
	    } 
	
	 public String getOwner() {
	        return this.strOwner;
	    } 
	 public String getColor(){
	    	return this.strColor;
	    }
	
}
