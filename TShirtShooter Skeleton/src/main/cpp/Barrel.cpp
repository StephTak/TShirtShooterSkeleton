#include "Barrel.h"

#include <frc/smartdashboard/SmartDashboard.h>

Barrel::Barrel(){
    BarrelMotor = new WPI_TalonSRX(28);
}

Barrel::StateMachine(){
    switch (current_state){
        case States::UP:
        UP();
            break;

        case States::DOWN:
        DOWN();
            break;
        
        case States::STOP:
        STOP();
            break;
    }

}

Barrel::UP(){
    BarrelMotor->Set(.3);
}

Barrel::DOWN(){
    BarrelMotor->Set(-.3);
}
Barrel::STOP(){
    BarrelMotor->Set(0);
}