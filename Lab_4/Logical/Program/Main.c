#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void) {
}

void _CYCLIC ProgramCyclic(void) {	
	DRIVE(&servo);
	
	if (blink) {
		if (Counter % 2) LED[0] = !LED[0];
		if (Counter % 5) LED[1] = !LED[1];
		if (Counter % 10) LED[2] = !LED[2];
		if (Counter % 20) LED[3] = !LED[3];
		Counter++;
	} else {
		int i;
		for (i = 0; i < 4; i++) LED[i] = BTN[i];
	}
}

void _EXIT ProgramExit(void) {

}

