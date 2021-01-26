/**
 * \file Winch.h
 *
 * \author Moez Abbes
 *
 * Class that represents a Winch.
 *
 */

#pragma once
#include "Component.h"
#include "Pin.h"
#include "Cable.h"
#include "RotationSource.h"
#include "Sink.h"

class CWinch :
    public CComponent
{
public:
    /// constructor
    CWinch();

    /// Destructor
    virtual ~CWinch();

    /// updates the motor
    virtual void Update(double elapsed) override;

    /**
    * Draw the machine at the currently specified location
    * \param graphics GDI+ Graphics object
    */
    virtual void Draw(Gdiplus::Graphics* graphics) override;
private:
    /// length of the cable
    double mCableLength = 0;

    /// the pin this winch is depending on
    CPin* mPin;

    /// the cable this winch is depending on
    CCable* mCable;

    /// the rotation source this winch is depending on
    CRotationSource* mRotationSource;

    /// the sink this winch is depending on
    CSink* mSink;
};

