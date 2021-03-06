/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _IDMANAGER_H_RPCGEN
#define _IDMANAGER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAX_ADDRESS_LENGTH 16

enum errorCodes {
	FILE_ACCESS_FAILURE = 0,
	INVIALID_ID = 1,
};
typedef enum errorCodes errorCodes;

struct registerResult {
	int cod_ret;
	union {
		long mtype;
		enum errorCodes error;
	} registerResult_u;
};
typedef struct registerResult registerResult;

struct queryResult {
	int cod_ret;
	union {
		struct {
			u_int mtype_len;
			long *mtype_val;
		} mtype;
		enum errorCodes error;
	} queryResult_u;
};
typedef struct queryResult queryResult;

struct getResult {
	int cod_ret;
	union {
		char address[MAX_ADDRESS_LENGTH];
		enum errorCodes error;
	} getResult_u;
};
typedef struct getResult getResult;

#define IDMANAGER 0x20000099
#define FIRST 1

#if defined(__STDC__) || defined(__cplusplus)
#define REGISTER 1
extern  registerResult * register_1(void *, CLIENT *);
extern  registerResult * register_1_svc(void *, struct svc_req *);
#define QUERY 2
extern  queryResult * query_1(void *, CLIENT *);
extern  queryResult * query_1_svc(void *, struct svc_req *);
#define GET 3
extern  getResult * get_1(long *, CLIENT *);
extern  getResult * get_1_svc(long *, struct svc_req *);
extern int idmanager_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define REGISTER 1
extern  registerResult * register_1();
extern  registerResult * register_1_svc();
#define QUERY 2
extern  queryResult * query_1();
extern  queryResult * query_1_svc();
#define GET 3
extern  getResult * get_1();
extern  getResult * get_1_svc();
extern int idmanager_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_errorCodes (XDR *, errorCodes*);
extern  bool_t xdr_registerResult (XDR *, registerResult*);
extern  bool_t xdr_queryResult (XDR *, queryResult*);
extern  bool_t xdr_getResult (XDR *, getResult*);

#else /* K&R C */
extern bool_t xdr_errorCodes ();
extern bool_t xdr_registerResult ();
extern bool_t xdr_queryResult ();
extern bool_t xdr_getResult ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_IDMANAGER_H_RPCGEN */
