#pragma once

#include "TeleopStateMachine.h"
#include <ctre/Phoenix.h>

class Barrel {
public: 

enum States {
    UP, DOWN, STOP_BARREL
};
States current_state;

WPI_TalonSRX *BarrelMotor;


 Barrel();
 void Up();
 void Down();
 void Stop();
 void StateMachine();

private:





}
