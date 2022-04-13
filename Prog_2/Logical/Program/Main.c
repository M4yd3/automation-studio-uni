
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	
}

void _CYCLIC ProgramCyclic(void)
{
	if (VP_Start_Button) RUN = 1;
	if (!VP_Stop_Button) RUN = 0;
	
	if (RUN) {		
		VP_Buffer_Conveyor = 1;
		
		if (!VP_Item_Ready) ENTRY_RUN = 1;
		if (VP_Dose_Button) DOSE = 1;
		
		if (!VP_At_Entry) {
			if (DOSE) ENTRY_RUN = 1; 
			else ENTRY_RUN = 0;
		} else DOSE = 0;
		
		if (ENTRY_RUN) VP_Entry_Conveyor = 1;
		else VP_Entry_Conveyor = 0;
		
		if (!VP_Item_Ready || !VP_At_Entry) RUN_TIME = 0;
		if (RUN_TIME >= 350) {
			VP_Entry_Conveyor = 0;
			VP_Buffer_Conveyor = 0;
			RUN_TIME = 350;
		}
		
		RUN_TIME++;
	} else {
		VP_Entry_Conveyor = 0;
		VP_Buffer_Conveyor = 0;
	}
}

void _EXIT ProgramExit(void)
{

}

