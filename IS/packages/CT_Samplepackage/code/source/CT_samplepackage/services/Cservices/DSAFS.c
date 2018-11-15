/*
 * DSAFSImpl.c:  Generated Service for "CT_samplepackage.services.Cservices.new_folder:DSAFS".
 *
 */

#include "wmJNI.h"
#include "wmUtil.h"

/*
 * Document API for "CT_samplepackage.services.Cservices.new_folder:DSAFS".
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

    Input:  DOCUMENT {
        String fdsf,
    }
 *
 */

static WmName Input_fdsf=0;


/**************************** Generated Functions ****************************/

static int initialized=0;

int
init_DSAFS(
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

    if ((Input_fdsf = makeWmName(con, "fdsf")) == 0) return 0;
    initialized = 1;
    return 1;
}

WmRecord *
prepToInvoke_DSAFS(
    JNIEnv    *env,
    jobject   oSession,
    jobject   oIn,
    WmContext *con,
    WmRecord  **session,
    WmRecord  **in,
    WmRecord  **out)
{

    initWmContext(con, env, WM_SVR_CONTEXT);

    if (!init_DSAFS(con))
        return throwWmServiceErrorMsg(con, "Unable to initialize DSAFS");

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

jobject wrapupInvoke_DSAFS(
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
Java_CT_1samplepackage_services_Cservices_new_1folder_cDSAFS (
    JNIEnv  *env,
    jclass  cServices,
    jobject oSession,
    jobject oIn)
{
    WmRecord *session, *in, *out;
    WmContext con;
    WmRecord *rec;

    WmRecord *Input;
    /***************************************************/
    /********** Declare your variables here ************/
    /***************************************************/

    /* [default implementation for demo purposes only] */

    char *i_fdsf=NULL;


    /***************************************************/
    /********** End of custom declarations *************/
    /***************************************************/

    rec = prepToInvoke_DSAFS(env, oSession, oIn, &con, &session, &in, &out);
    if(rec != NULL )
        return wrapupInvoke_DSAFS(&con, &in, &rec, &session);

    Input = in;


    /***************************************************/
    /****** Add your custom service logic here *********/
    /***************************************************/

    /* [default implementation for demo purposes only] */
    /* [access inputs] */

    i_fdsf = getWmString(Input, Input_fdsf);

    /* [process inputs here...] */

    /* [set outputs] */

    /* [cleanup] */

    freeWmString(&i_fdsf);

    /***************************************************/
    /****** End of custom service logic ****************/
    /***************************************************/

    return wrapupInvoke_DSAFS(&con, &in, &out, &session);

}

