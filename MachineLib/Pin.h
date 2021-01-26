/**
 * \file Pin.h
 *
 * \author Moez Abbes
 *
 * Class that represents a Pin.
 *
 */

#pragma once
#include "Component.h"

class CTrap;
class CWinch;

class CPin :
    public CComponent
{
public:
    /// constructor
    CPin();

    /// Destructor
    virtual ~CPin();

    /// updates the motor
    virtual void Update(double elapsed) override;

private:
    /// max distance the pin needs to travel
    double mMaxDistance = 0;

    /// bool to indicate whether the pin got pulled or not
    bool pulled = false;

    /// the trap this pin belongs to
    CTrap * mTrap;
    
    /// the winch this pin is depending on
    CWinch* mWinch;
};

