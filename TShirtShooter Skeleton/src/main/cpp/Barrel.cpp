#include "Robot.h"
#include <frc/smartdashboard/SmartDashboard.h>

Barrel::Barrel(){
    BarrelMotor = new WPI_TalonSRX(28);
}

void Barrel::StateMachine(){
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
    frc::SmartDashboard::PutNumber("barrel_state" ,(int) current_state);

}

void Barrel::Up(){
    BarrelMotor->Set(.1);
}

void Barrel::Down(){
    BarrelMotor->Set(-.1);
}
void Barrel::Stop(){
    BarrelMotor->Set(0);
}