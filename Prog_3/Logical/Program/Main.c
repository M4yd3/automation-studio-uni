
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void) {

}

void _CYCLIC ProgramCyclic(void) {	
	if (!error) {
		if (increase_speed_btn && speed < 1000) {
			speed += 1;
		}
		if (decrease_speed_btn && speed > -1000) {
			speed -= 1;
		}
		if (reset_btn) {
			speed = 0;
		}
	}
	
	if (torque > 6) error = 1;
	
	if (error && !on_switch) {
		error = 0;
		speed = 0;
	}
	
	if (!error) {
		servo.ENABLE = on_switch;
	} else {
		servo.ENABLE = 0;
	}
	
	DRIVE(&servo);
}

void _EXIT ProgramExit(void) {

}

