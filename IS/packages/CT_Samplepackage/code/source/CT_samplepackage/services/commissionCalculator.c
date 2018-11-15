/*
 * commissionCalculatorImpl.c:  Generated Service for "CT_samplepackage.services.Cservices:commissionCalculator".
 *
 */

#include "wmJNI.h"
#include "wmUtil.h"

/*
 * Document API for "CT_samplepackage.services.Cservices:commissionCalculator".
 *
 *  The following table lays out the names and types (named DOCUMENT or STRING)
 *  of each document and field used by this service's input and output. The
 *  table is followed by a series of name declarations that must be used to
 *  access (set or get) the field values.
 *
 *  Names are constructed from the DOCUMENT name and the VARIABLE name within
 *  the document.  E.g., 'Order_shipTo' for DOCUMENT 'Order' and VARIABLE
 *  'shipTo'.
 *
 *  Note that fields within arrays and tables are unnamed as they are
 *  accessed by index or indices (indicated by '[]' below).
 *

    Output:  DOCUMENT {
        String TotalAmount,
    }
    Input:  DOCUMENT {
        String TransferAmount,
        String commissionPerc,
    }
 *
 */

static WmName Output_TotalAmount=0;

static WmName Input_TransferAmount=0;

static WmName Input_commissionPerc=0;


/**************************** Generated Functions ****************************/

static int initialized=0;

int
init_commissionCalculator(
    WmContext  *con)
{
    if (initialized)
        return 1;

    if (!WmRecInit(con))
        return 0;

    /*
     * Setup generated document/field names:
     *  Add calls to initialize your custom fields (defined above) here.
     *
     */

    if ((Output_TotalAmount = makeWmName(con, "TotalAmount")) == 0) return 0;

    if ((Input_TransferAmount = makeWmName(con, "TransferAmount")) == 0) return 0;

    if ((Input_commissionPerc = makeWmName(con, "commissionPerc")) == 0) return 0;
    initialized = 1;
    return 1;
}

WmRecord *
prepToInvoke_commissionCalculator(
    JNIEnv    *env,
    jobject   oSession,
    jobject   oIn,
    WmContext *con,
    WmRecord  **session,
    WmRecord  **in,
    WmRecord  **out)
{

    initWmContext(con, env, WM_SVR_CONTEXT);

    if (!init_commissionCalculator(con))
        return throwWmServiceErrorMsg(con, "Unable to initialize commissionCalculator");

    *session = makeWmRec(con, oSession, WM_RECORD, 0, 0);
    if (*session == 0) {
        fprintf(stderr, "Unable to construct 'session' handle");
        return throwWmServiceErrorMsg(con, "Unable to construct 'session' handle");
    }
    if (oIn == 0) {
        *in = 0;
        *out = newWmRec(con);
        if (*out == 0) {
            fprintf(stderr, "Unable to construct 'out' handle");
            freeWmRec(session);
            return throwWmServiceErrorMsg(con, "Unable to construct 'out' handle");
        }
    } else {
        *in = makeWmRec(con, oIn, WM_RECORD, 0, 0);
        if (*in == 0) {
            fprintf(stderr, "Unable to construct 'in' handle");
            freeWmRec(out);
            freeWmRec(session);
            return throwWmServiceErrorMsg(con, "Unable to construct 'in' handle");
        }
        *out = *in;
    }

    return NULL;
}

jobject wrapupInvoke_commissionCalculator(
    WmContext   *con,
    WmRecord    **in,
    WmRecord    **out,
    WmRecord    **session)
{
    jobject oOut = (*out)->ref;

    freeWmRec(session);
    clearWmContext(con);

    return oOut;
}

JNIEXPORT jobject JNICALL
Java_CT_1samplepackage_services_Cservices_ccommissionCalculator (
    JNIEnv  *env,
    jclass  cServices,
    jobject oSession,
    jobject oIn)
{
    WmRecord *session, *in, *out;
    WmContext con;
    WmRecord *rec;

    WmRecord *Input;    WmRecord *Output;
    /***************************************************/
    /********** Declare your variables here ************/
    /***************************************************/

    /* [default implementation for demo purposes only] */

    char *i_TransferAmount=NULL;
    char *i_commissionPerc=NULL;



    /***************************************************/
    /********** End of custom declarations *************/
    /***************************************************/

    rec = prepToInvoke_commissionCalculator(env, oSession, oIn, &con, &session, &in, &out);
    if(rec != NULL )
        return wrapupInvoke_commissionCalculator(&con, &in, &rec, &session);

    Input = in;
    Output = out;

    /***************************************************/
    /****** Add your custom service logic here *********/
    /***************************************************/

    /* [default implementation for demo purposes only] */
    /* [access inputs] */

    i_TransferAmount = getWmString(Input, Input_TransferAmount);
    i_commissionPerc = getWmString(Input, Input_commissionPerc);

    /* [process inputs here...] */

    /* [set outputs] */
    setWmString(Output, Output_TotalAmount, "TotalAmount");

    /* [cleanup] */

    freeWmString(&i_TransferAmount);
    freeWmString(&i_commissionPerc);


    /***************************************************/
    /****** End of custom service logic ****************/
    /***************************************************/

    return wrapupInvoke_commissionCalculator(&con, &in, &out, &session);

}

