#pragma once

#include "TeleopStateMachine.h"
#include <ctre/Phoenix.h>

class Barrel {
public: 

enum States {
    Up, Down, Stop
}
States current_state;

WPI_TalonSRX *BarrelMotor;


 Barrel();
 void Up();
 void Down();
 void Stop();
 void StateMachine();

private:





}
