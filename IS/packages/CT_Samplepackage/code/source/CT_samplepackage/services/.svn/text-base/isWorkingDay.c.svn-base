/*
 * isWorkingDayImpl.c:  Generated Service for "CT_samplepackage.services.Cservices:isWorkingDay".
 *
 */

#include "wmJNI.h"
#include "wmUtil.h"

/*
 * Document API for "CT_samplepackage.services.Cservices:isWorkingDay".
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
        String isWorkingDayOutput,
    }
    Input:  DOCUMENT {
        String Today,
    }
 *
 */

static WmName Output_isWorkingDayOutput=0;

static WmName Input_Today=0;


/**************************** Generated Functions ****************************/

static int initialized=0;

int
init_isWorkingDay(
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

    if ((Output_isWorkingDayOutput = makeWmName(con, "isWorkingDayOutput")) == 0) return 0;

    if ((Input_Today = makeWmName(con, "Today")) == 0) return 0;
    initialized = 1;
    return 1;
}

WmRecord *
prepToInvoke_isWorkingDay(
    JNIEnv    *env,
    jobject   oSession,
    jobject   oIn,
    WmContext *con,
    WmRecord  **session,
    WmRecord  **in,
    WmRecord  **out)
{

    initWmContext(con, env, WM_SVR_CONTEXT);

    if (!init_isWorkingDay(con))
        return throwWmServiceErrorMsg(con, "Unable to initialize isWorkingDay");

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

jobject wrapupInvoke_isWorkingDay(
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
Java_CT_1samplepackage_services_Cservices_cisWorkingDay (
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

    char *i_Today=NULL;



    /***************************************************/
    /********** End of custom declarations *************/
    /***************************************************/

    rec = prepToInvoke_isWorkingDay(env, oSession, oIn, &con, &session, &in, &out);
    if(rec != NULL )
        return wrapupInvoke_isWorkingDay(&con, &in, &rec, &session);

    Input = in;
    Output = out;

    /***************************************************/
    /****** Add your custom service logic here *********/
    /***************************************************/

    /* [default implementation for demo purposes only] */
    /* [access inputs] */

    i_Today = getWmString(Input, Input_Today);

    /* [process inputs here...] */

    /* [set outputs] */
    setWmString(Output, Output_isWorkingDayOutput, "isWorkingDayOutput");

    /* [cleanup] */

    freeWmString(&i_Today);


    /***************************************************/
    /****** End of custom service logic ****************/
    /***************************************************/

    return wrapupInvoke_isWorkingDay(&con, &in, &out, &session);

}

