
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	srand(time(0));
}

void _CYCLIC ProgramCyclic(void)
{
	int i;
	if (blink) {
		for (i = 0; i < 4; i++) {
			if (blink_time[i] == 0) {
				LED[i] = !LED[i];
				int r = rand() % 21 + 2;
				blink_time[i] += r;
			}
			blink_time[i]--;
		}
	} else {
		for (i = 0; i < 4; i++) LED[i] = BTN[i];
	}
}

void _EXIT ProgramExit(void)
{

}

