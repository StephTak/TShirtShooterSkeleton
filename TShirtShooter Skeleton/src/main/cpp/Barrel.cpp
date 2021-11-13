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

Barrel::Up(){
    BarrelMotor->Set(.3);
}

Barrel::Down(){
    BarrelMotor->Set(-.3);
}
Barrel::Stop(){
    BarrelMotor->Set(0);
}