#include "TeleopStateMachine.h"


TeleopStateMachine::TeleopStateMachine(frc::Joystick *joystick_)
{
    joystick = joystick_;
    
    current_state = States::STOP;
}

void TeleopStateMachine::UpdateButtons(){

    current_state = States::STOP_BARREL;

    if(joystick->GetRawButton(8)){
        current_state = States::SHOOT;
    }
    

    if(joystick->GetRawButton(5)){

        current_state = States::RUN;
    } 

    if(joystick->GetRawButton(6)){
        current_state = States::STOP;
    }

    if(joystick->GetRawButton(up_button)){
        current_state = States::UP;
    }

    if(joystick->GetRawButton(down_button)){
        current_state = States::DOWN;
    }

    if(joystick->GetRawButton(slow_button)){
        current_state = States::SLOW_BARREL;
    }

    frc::SmartDashboard::PutNumber("state" ,(int) current_state);
}

void TeleopStateMachine::StateMachine(){

    UpdateButtons();

    switch (current_state)
    {
        barrel-> StateMachine
    case States::INIT:
        barrel->current_state=Barrel::State::INIT;
        break;
    
    case States::RUN:
        barrel->current_state=Barrel::State::RUN;
        break;

    case States::STOP:
        barrel->current_state=Barrel::State::STOP;
        break;

    case States::SHOOT:
        barrel->current_state=Barrel::State::SHOOT;
        break;

    case States::UP:
        barrel->current_state=Barrel::State::UP;
        break;

    case States::DOWN:
        barrel->current_state=Barrel::State::DOWN;
        break;

    case States::STOP_BARREL:
        barrel->current_state=Barrel::State::STOP_BARREL;
        break;

    case States::EMERGENCY:
        barrel->current_state=Barrel::State::EMERGENCY;
        break;

    case States::SLOW_BARREL:
        barrel->current_state=Barrel::State::SLOW_BARREL;
        break;
        
    }

}