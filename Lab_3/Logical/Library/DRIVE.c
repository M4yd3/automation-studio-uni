
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif

void DRIVE(struct DRIVE* inst) {
	UINT mask = inst->STATE & 0x6f;
	if (!inst->ENABLE) {
		inst->COM = CMD_SHUTDOWN;
	} else {
		switch (mask) {
			case STATE_DISABLED:
				inst->COM = CMD_SHUTDOWN;
				break;
			
			case STATE_READY:
				inst->COM = CMD_ENABLE;
				break;
			
			case STATE_SWITCHED_ON:
				inst->COM = CMD_SWITCH_ON;
				break;
		}
	}
}
