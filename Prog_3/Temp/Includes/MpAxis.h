/* Automation Studio generated header file */
/* Do not edit ! */
/* MpAxis 5.02.0 */

#ifndef _MPAXIS_
#define _MPAXIS_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _MpAxis_VERSION
#define _MpAxis_VERSION 5.02.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG4
		#include "McAxis.h"
		#include "MpBase.h"
#endif

#ifdef _SG3
		#include "McAxis.h"
		#include "MpBase.h"
#endif

#ifdef _SGC
		#include "McAxis.h"
		#include "MpBase.h"
#endif

/* Datatypes and datatypes of function blocks */
typedef enum MpAxisExecutingCmdEnum
{	mcAXIS_CMD_IDLE = 0,
	mcAXIS_CMD_HOMING,
	mcAXIS_CMD_STOP,
	mcAXIS_CMD_HALT,
	mcAXIS_CMD_MOVE_VELOCITY,
	mcAXIS_CMD_MOVE_ABSOLUTE,
	mcAXIS_CMD_MOVE_ADDITIVE,
	mcAXIS_CMD_JOG_POSITIVE,
	mcAXIS_CMD_JOG_NEGATIVE,
	mcAXIS_CMD_REMOTE_CONTROL
} MpAxisExecutingCmdEnum;

typedef enum MpAxisErrorEnum
{	mcAXIS_NO_ERROR = 0,
	mcAXIS_ERR_PLC_OPEN = -1067278080,
	mcAXIS_WRN_PLC_OPEN = -2141019903,
	mcAXIS_WRN_MULTIPLE_COMMAND = -2141019902,
	mcAXIS_ERR_ACTIVATION = -1064239103,
	mcAXIS_ERR_MPLINK_NULL = -1064239102,
	mcAXIS_ERR_MPLINK_INVALID = -1064239101,
	mcAXIS_ERR_MPLINK_CHANGED = -1064239100,
	mcAXIS_ERR_MPLINK_CORRUPT = -1064239099,
	mcAXIS_ERR_MPLINK_IN_USE = -1064239098,
	mcAXIS_ERR_PAR_NULL = -1064239097
} MpAxisErrorEnum;

typedef struct MpAxisHomingType
{	McHomingModeEnum Mode;
	double Position;
} MpAxisHomingType;

typedef struct MpAxisJogLimitPositionType
{	double FirstPosition;
	double LastPosition;
} MpAxisJogLimitPositionType;

typedef struct MpAxisJogType
{	float Velocity;
	float Acceleration;
	float Deceleration;
	struct MpAxisJogLimitPositionType LimitPosition;
} MpAxisJogType;

typedef struct MpAxisStopType
{	float Deceleration;
} MpAxisStopType;

typedef struct MpAxisLimitLoadType
{	float Load;
	McDirectionEnum Direction;
} MpAxisLimitLoadType;

typedef struct MpAxisBasicParType
{	double Position;
	double Distance;
	float Velocity;
	float Acceleration;
	float Deceleration;
	McDirectionEnum Direction;
	struct MpAxisHomingType Homing;
	struct MpAxisJogType Jog;
	struct MpAxisStopType Stop;
	struct MpAxisLimitLoadType LimitLoad;
} MpAxisBasicParType;

typedef struct MpAxisStatusIDType
{	enum MpAxisErrorEnum ID;
	MpComSeveritiesEnum Severity;
	unsigned short Code;
} MpAxisStatusIDType;

typedef struct MpAxisInternalType
{	signed long ID;
	MpComSeveritiesEnum Severity;
	MpComFacilitiesEnum Facility;
	unsigned short Code;
} MpAxisInternalType;

typedef struct MpAxisDiagExtType
{	struct MpAxisStatusIDType StatusID;
	struct MpAxisInternalType Internal;
	enum MpAxisExecutingCmdEnum ExecutingCommand;
} MpAxisDiagExtType;

typedef struct MpAxisBasicInfoType
{	plcbit CommunicationReady;
	plcbit ReadyToPowerOn;
	plcbit Simulation;
	plcbit Jogging;
	plcbit JogLimitReached;
	plcbit LimitLoadActive;
	McAxisPLCopenStateEnum PLCopenState;
	struct McDigitalInputStatusType DigitalInputsStatus;
	struct MpAxisDiagExtType Diag;
	struct McLibraryInfoType LibraryInfo;
} MpAxisBasicInfoType;

typedef struct MpAxisBasic
{
	/* VAR_INPUT (analog) */
	struct McAxisType* MpLink;
	struct MpAxisBasicParType* Parameters;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	double Position;
	float Velocity;
	struct MpAxisBasicInfoType Info;
	/* VAR (analog) */
	struct MpComInternalDataType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Update;
	plcbit Power;
	plcbit Home;
	plcbit MoveVelocity;
	plcbit MoveAbsolute;
	plcbit MoveAdditive;
	plcbit Stop;
	plcbit JogPositive;
	plcbit JogNegative;
	plcbit LimitLoad;
	plcbit ReleaseBrake;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit CommandBusy;
	plcbit CommandAborted;
	plcbit PowerOn;
	plcbit IsHomed;
	plcbit InVelocity;
	plcbit InPosition;
	plcbit MoveActive;
	plcbit MoveDone;
	plcbit Stopped;
	plcbit LimitLoadReady;
	plcbit BrakeReleased;
} MpAxisBasic_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MpAxisBasic(struct MpAxisBasic* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MPAXIS_ */

