#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>

Barrel::Barrel(){
    BarrelMotor = new WPI_TalonSRX(28);
}

Barrel::StateMachine(){
    switch (current_state){
        case States::UP:
        Up();
            break;

        case States::DOWN:
        Down();
            break;
        
        case States::STOP:
        Stop();
            break;
    }

}

Barrel::Up(){
    BarrelMotor->Set(.3);
}

Barrel::Down(){
    BarrelMotor->Set(-.3);
}
Barrel::Stop(){
    BarrelMotor->Set(0);
}