package CT_samplepackage.services.Cservices;

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

public final class new_folder

{
	// ---( internal utility methods )---

	final static new_folder _instance = new new_folder();

	static new_folder _newInstance() { return new new_folder(); }

	static new_folder _cast(Object o) { return (new_folder)o; }

	// ---( server methods )---



    public static final Values DSAFS (Values in)
    {
        Values out = in;
		// --- <<IS-START(DSAFS)>> ---
		// @specification CT_samplepackage.services.Cservices.new_folder:dfsd
		// @subtype c
    out = cDSAFS(Service.getSession(), in);
		// --- <<IS-END>> ---
        return out;
                
	}

	// --- <<IS-START-SHARED>> ---
	
	static {
	    try {
	        System.loadLibrary("CT_samplepackage_services_Cservices_new_folder");
	        JournalLogger.log(DebugMsg.LOG_MSG, JournalLogger.FAC_PACKAGE, JournalLogger.INFO, 
				"Loading native library: CT_samplepackage_services_Cservices_new_folder");
	    } catch (UnsatisfiedLinkError e) {
	        JournalLogger.logError(DebugMsg.LOG_MSG, JournalLogger.FAC_PACKAGE, 
				e.getMessage());
	    }
	}
	
	native static Values cDSAFS(Session session, Values in);
		
	// --- <<IS-END-SHARED>> ---
}

