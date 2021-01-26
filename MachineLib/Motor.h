/**
 * \file Motor.h
 *
 * \author Moez Abbes
 *
 * Class that represents the motor.
 *
 */

#pragma once
#include "Component.h"
#include "RotationSource.h"

class CMouse;

class CMotor :
    public CComponent
{
public:
    /// constructor
    CMotor();

    /// Destructor
    virtual ~CMotor();

    /// updates the motor
    virtual void Update(double elapsed) override;

    /**
    * Draw the machine at the currently specified location
    * \param graphics GDI+ Graphics object
    */
    virtual void Draw(Gdiplus::Graphics* graphics) override;
private:
    /// number of rotations
    double mRotations = 0;

    /// rotation speed
    double mRotationSpeed = 0;

    /// mouse
    CMouse* mMouse;
    
    /// the rotation source this motor is depending on
    CRotationSource* mRotationSource;
};

