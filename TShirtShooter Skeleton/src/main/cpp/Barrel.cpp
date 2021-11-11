#include "Barrel.h"

#include <frc/smartdashboard/SmartDashboard.h>

Barrel::Barrel(){
    BarrelMotor = new WPI_TalonSRX(28);
}

Barrel::StateMachine(){
    switch (current_state){
        case States::Up:
        Up();
        break;
        case States::Down:
        Down();
        break;
        case States::Stop:
        Stop();
        break;
    }

}

Barrel::Up(){
    move barrel up 1 ppt
    up_button
}

Barrel::Down(){
    down_button
}
Barrel::Stop(){
    emergency_button
}