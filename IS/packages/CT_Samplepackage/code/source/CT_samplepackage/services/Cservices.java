package CT_samplepackage.services;

// -----( IS Java Code Template v1.2

import com.wm.data.*;
import com.wm.util.Values;
import com.wm.app.b2b.server.Service;
import com.wm.app.b2b.server.ServiceException;
// --- <<IS-START-IMPORTS>> ---
import com.wm.app.b2b.server.Session;
import com.wm.util.JournalLogger;
import com.wm.util.DebugMsg;
// --- <<IS-END-IMPORTS>> ---

public final class Cservices

{
	// ---( internal utility methods )---

	final static Cservices _instance = new Cservices();

	static Cservices _newInstance() { return new Cservices(); }

	static Cservices _cast(Object o) { return (Cservices)o; }

	// ---( server methods )---



    public static final Values commissionCalculator (Values in)
    {
        Values out = in;
		// --- <<IS-START(commissionCalculator)>> ---
		// @specification CT_samplepackage.services.Cservices:commCalcSpecification
		// @subtype c
		// @sigtype java 3.0
    out = ccommissionCalculator(Service.getSession(), in);
    

 // pipeline
 IDataCursor pipelineCursor = in.getCursor();
 	String	TransferAmount = IDataUtil.getString( pipelineCursor, "TransferAmount" );
 	String	commissionPerc = IDataUtil.getString( pipelineCursor, "commissionPerc" );
 pipelineCursor.destroy();


  
 int transAmt = Integer.parseInt(TransferAmount);
 float commPerc = Float.parseFloat(commissionPerc);
 float comm = ((transAmt*commPerc)/100);
 float total = transAmt+comm;
 
 
 // pipeline
 IDataCursor pipelineCursor_1 = in.getCursor();
 IDataUtil.put( pipelineCursor_1, "Commission", comm );
 IDataUtil.put( pipelineCursor_1, "TotalAmount", total );
 pipelineCursor_1.destroy();
 
		// --- <<IS-END>> ---
        return out;
                
	}

	// --- <<IS-START-SHARED>> ---
	
		static {
		    try {
		        System.loadLibrary("CT_samplepackage_services_Cservices");
		        JournalLogger.log(DebugMsg.LOG_MSG, JournalLogger.FAC_PACKAGE, JournalLogger.INFO, 
					"Loading native library: CT_samplepackage_services_Cservices");
		       	        
		        
		        
		    } catch (UnsatisfiedLinkError e) {
		        JournalLogger.logError(DebugMsg.LOG_MSG, JournalLogger.FAC_PACKAGE, 
					e.getMessage());
		    }
		}
		
	native static Values ccommissionCalculator(Session session, Values in);
		
	// --- <<IS-END-SHARED>> ---
}

