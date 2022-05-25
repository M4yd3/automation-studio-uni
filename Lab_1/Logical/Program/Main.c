
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void) {

}

void _CYCLIC ProgramCyclic(void) {
	if (Counter % 2) {
		Led1 = !Led1;
	}
	if (Counter % 5) {
		Led2 = !Led2;
	}
	if (Counter % 10) {
		Led3 = !Led3;
	}
	if (Counter % 20) {
		Led4 = !Led4;
	}
	Counter++;
}

void _EXIT ProgramExit(void) {

}

