
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void) {
	
}

void _CYCLIC ProgramCyclic(void) {	
	LED[0] = 1;
	LED[1] = 1;
	LED[2] = 1;
	LED[3] = 0;
	
	if (BTN[0]) {
		LED[1] = !LED[1];
	}
	if (BTN[1]) {
		LED[0] = !LED[0];
		LED[1] = !LED[1];
		LED[3] = !LED[3];
	}
	if (BTN[2]) {
		LED[0] = !LED[0];
		LED[2] = !LED[2];
	}
	if (BTN[4]) {
		LED[0] = !LED[0];
		LED[2] = !LED[2];
		LED[3] = !LED[3];
	}
}

void _EXIT ProgramExit(void) {

}

