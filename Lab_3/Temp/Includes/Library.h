/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define STATE_DISABLED 64U
 #define STATE_READY 33U
 #define STATE_SWITCHED_ON 35U
 #define CMD_SHUTDOWN 6U
 #define CMD_ENABLE 15U
 #define CMD_SWITCH_ON 7U
 #define CMD_DISABLE_VOLTAGE 0U
#else
 _GLOBAL_CONST unsigned short STATE_DISABLED;
 _GLOBAL_CONST unsigned short STATE_READY;
 _GLOBAL_CONST unsigned short STATE_SWITCHED_ON;
 _GLOBAL_CONST unsigned short CMD_SHUTDOWN;
 _GLOBAL_CONST unsigned short CMD_ENABLE;
 _GLOBAL_CONST unsigned short CMD_SWITCH_ON;
 _GLOBAL_CONST unsigned short CMD_DISABLE_VOLTAGE;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct DRIVE
{
	/* VAR_INPUT (analog) */
	unsigned short STATE;
	/* VAR_OUTPUT (analog) */
	unsigned short COM;
	/* VAR_INPUT (digital) */
	plcbit ENABLE;
} DRIVE_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DRIVE(struct DRIVE* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

