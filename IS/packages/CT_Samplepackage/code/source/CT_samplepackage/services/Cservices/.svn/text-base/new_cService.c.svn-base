/*
 * new_cServiceImpl.c:  Generated Service for "CT_samplepackage.services.Cservices.new_folder:new_cService".
 *
 */

#include "wmJNI.h"
#include "wmUtil.h"

/*
 * Document API for "CT_samplepackage.services.Cservices.new_folder:new_cService".
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
        String sdwdsd,
    }
    Input:  DOCUMENT {
        String Untitled,
    }
 *
 */

static WmName Output_sdwdsd=0;

static WmName Input_Untitled=0;


/**************************** Generated Functions ****************************/

static int initialized=0;

int
init_new_cService(
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

    if ((Output_sdwdsd = makeWmName(con, "sdwdsd")) == 0) return 0;

    if ((Input_Untitled = makeWmName(con, "Untitled")) == 0) return 0;
    initialized = 1;
    return 1;
}

WmRecord *
prepToInvoke_new_cService(
    JNIEnv    *env,
    jobject   oSession,
    jobject   oIn,
    WmContext *con,
    WmRecord  **session,
    WmRecord  **in,
    WmRecord  **out)
{

    initWmContext(con, env, WM_SVR_CONTEXT);

    if (!init_new_cService(con))
        return throwWmServiceErrorMsg(con, "Unable to initialize new_cService");

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

jobject wrapupInvoke_new_cService(
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
Java_CT_1samplepackage_services_Cservices_new_1folder_cnew_1cService (
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

    char *i_Untitled=NULL;



    /***************************************************/
    /********** End of custom declarations *************/
    /***************************************************/

    rec = prepToInvoke_new_cService(env, oSession, oIn, &con, &session, &in, &out);
    if(rec != NULL )
        return wrapupInvoke_new_cService(&con, &in, &rec, &session);

    Input = in;
    Output = out;

    /***************************************************/
    /****** Add your custom service logic here *********/
    /***************************************************/

    /* [default implementation for demo purposes only] */
    /* [access inputs] */

    i_Untitled = getWmString(Input, Input_Untitled);

    /* [process inputs here...] */

    /* [set outputs] */
    setWmString(Output, Output_sdwdsd, "sdwdsd");

    /* [cleanup] */

    freeWmString(&i_Untitled);


    /***************************************************/
    /****** End of custom service logic ****************/
    /***************************************************/

    return wrapupInvoke_new_cService(&con, &in, &out, &session);

}

