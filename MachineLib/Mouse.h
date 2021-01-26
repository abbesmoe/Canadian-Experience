/**
 * \file Mouse.h
 *
 * \author Moez Abbes
 *
 * Class that represents the mouse.
 *
 */

#pragma once
#include "Component.h"
#include "Motor.h"
#include <vector>

class CMouse :
    public CComponent
{
public:
    /// constructor
    CMouse();

    /// Destructor
    virtual ~CMouse();

    /// checks the position of the mouse
    bool CheckPosition();

    /// updates the mouse
    virtual void Update(double elapsed) override;

private:
    /// Mouse speed
    double mSpeed = 0;

    /// the start point of the Mouse
    Point mStart = Point(0, 0);

    /// the end point of the Mouse
    Point mEnd = Point(0, 0);

    /// list of motors
    std::vector<CMotor*> mMotors;
};

