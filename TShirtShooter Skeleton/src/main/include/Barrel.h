#pragma once
#include <frc/smartdashboard/SmartDashboard.h>
#include <ctre/Phoenix.h>

class Barrel {
public: 

enum States {
    UP, DOWN, STOP
};
States current_state;

WPI_TalonSRX *BarrelMotor;


 Barrel();
 void Up();
 void Down();
 void Stop();
 void StateMachine();

private:


};
