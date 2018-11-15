package CT_samplepackage.services;

// -----( IS Java Code Template v1.2

import com.wm.data.*;
import com.wm.util.Values;
import com.wm.app.b2b.server.Service;
import com.wm.app.b2b.server.ServiceException;
// --- <<IS-START-IMPORTS>> ---
import com.wm.util.DebugMsg;
import com.wm.util.JournalLogger;
import com.wm.app.b2b.server.JournalLog;
import java.io.StringWriter;
import java.net.InetAddress;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;
// --- <<IS-END-IMPORTS>> ---

public final class java

{
	// ---( internal utility methods )---

	final static java _instance = new java();

	static java _newInstance() { return new java(); }

	static java _cast(Object o) { return (java)o; }

	// ---( server methods )---




	public static final void commissionCalculator (IData pipeline)
        throws ServiceException
	{
		// --- <<IS-START(commissionCalculator)>> ---
		// @sigtype java 3.5
		// [i] field:0:required TransferAmount
		// [i] field:0:required commissionPerc
		// [o] field:0:required Commission
		// [o] field:0:required TotalAmount
		// pipeline
		IDataCursor pipelineCursor = pipeline.getCursor();
			String	TransferAmount = IDataUtil.getString( pipelineCursor, "TransferAmount" );
			String	commissionPerc = IDataUtil.getString( pipelineCursor, "commissionPerc" );
		pipelineCursor.destroy();
		
		 float transAmt = Float.parseFloat(TransferAmount);
		 float commPerc = Float.parseFloat(commissionPerc);
		 float comm = ((transAmt*commPerc)/100);
		 float total = transAmt+comm;
		 
		 String commStr = String.valueOf(comm);
		 String totalStr = String.valueOf(total);
		
		
		// pipeline
		IDataCursor pipelineCursor_1 = pipeline.getCursor();
		IDataUtil.put( pipelineCursor_1, "Commission", commStr );
		IDataUtil.put( pipelineCursor_1, "TotalAmount", totalStr );
		pipelineCursor_1.destroy();
			
		// --- <<IS-END>> ---

                
	}



	public static final void getHostName (IData pipeline)
        throws ServiceException
	{
		// --- <<IS-START(getHostName)>> ---
		// @sigtype java 3.5
		try{
			String hostname = "N/A";
					
			InetAddress addr;
			addr = InetAddress.getLocalHost();
			hostname = addr.getHostName();
			
			Date date = new Date();
			DateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss.SSS");
			System.out.println(dateFormat.format(date)); //2016/11/16 12:08:43
			IDataCursor pipelineCursorD = pipeline.getCursor();
			IDataUtil.put( pipelineCursorD, "dateFormat", dateFormat.format(date) );
					
				IDataCursor pipelineCursor = pipeline.getCursor();
				IDataUtil.put( pipelineCursor, "hostName", hostname );
				System.out.println("hostname: " + hostname);
				pipelineCursor.destroy();
			}catch(Exception e){
				throw new ServiceException(e);
			}
		
			
		// --- <<IS-END>> ---

                
	}



	public static final void isWorkingDay (IData pipeline)
        throws ServiceException
	{
		// --- <<IS-START(isWorkingDay)>> ---
		// @sigtype java 3.5
		// [o] field:0:required isWorking
		boolean isWorking = false;
		Date date = new Date();
		int s = date.getDay();
		
		if (s > 0 && s <=6)
		{
		JournalLogger.log(DebugMsg.LOG_MSG, JournalLogger.FAC_PACKAGE, JournalLogger.INFO, 
				"Todays is working day");
		isWorking=true;
		}
		// pipeline
		IDataCursor pipelineCursor = pipeline.getCursor();
		IDataUtil.put( pipelineCursor, "isWorking",  isWorking);
		
		pipelineCursor.destroy();
		
		//return working;
		// --- <<IS-END>> ---

                
	}



	public static final void replacespaces (IData pipeline)
        throws ServiceException
	{
		// --- <<IS-START(replacespaces)>> ---
		// @sigtype java 3.5
		// [i] field:0:required CustomerNamewithspace
		// [o] field:0:required CustomerNamewithoutspace
		// pipeline
		
		IDataCursor pipelineCursor = pipeline.getCursor();
			String	CustomerNamewithspace = IDataUtil.getString( pipelineCursor, "CustomerNamewithspace" );
		pipelineCursor.destroy();
		
		CustomerNamewithspace.replaceAll("\\s+","");
		    String noSpaceStr = CustomerNamewithspace.toString();
		IDataCursor pipelineCursor_1 = pipeline.getCursor();
		IDataUtil.put( pipelineCursor_1, "CustomerNamewithoutspace", noSpaceStr );
		pipelineCursor_1.destroy();
		
			
		// --- <<IS-END>> ---

                
	}
}

