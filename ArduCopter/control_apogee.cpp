#include "Copter.h"
#include <AP_Relay/AP_Relay.h>
//#include "DataFlash_ion.h"

bool trigger = false;

bool Copter::apogee_init(bool ignore_checks)
{
    //dataflashion.init();
    //static DataFlashIon ion_log;

    return true;

}

void Copter::apogee_run()
{

        hal.scheduler->delay(1000);
        relay.on(0);
        hal.scheduler->delay(1000);
        relay.off(0);
/*
    if (hal.util->safety_switch_state() == AP_HAL::Util::SAFETY_ARMED && !trigger) {
        hal.scheduler->delay(10000);
        relay.on(0);
        hal.scheduler->delay(10000);
        relay.off(0);
        trigger=true;
    }

    if (hal.util->safety_switch_state() == AP_HAL::Util::SAFETY_DISARMED){
        trigger=false;
    }
*/
//    Vector3f velocity = inertial_nav.get_velocity();
/*
    Vector3f velocity;
    ahrs.get_velocity_NED(velocity);
    float speed = inertial_nav.get_velocity_xy();
    Vector3f position = inertial_nav.get_position();
    Vector3f accel = ins.get_accel();
    Vector3f attitude = ahrs.get_gyro_latest();

    hal.scheduler->delay(1000);
    hal.console->printf("v: %f, %f, %f  ",velocity.x,velocity.y,velocity.z);
    hal.console->printf("p: %f, %f, %f  ",position.x,position.y,position.z);
    hal.console->printf("a: %f, %f, %f  ",accel.x,accel.y,accel.z);
    hal.console->printf("att: %f, %f, %f  ",attitude.x,attitude.y,attitude.z);
    hal.console->printf("speed: %f  ",velocity.length());
    hal.console->printf("\n");
*/
    //dataflashion.write();

}

