/**
 * \file Gear.h
 *
 * \author Moez Abbes
 *
 * Class that represents a Gear.
 *
 */

#pragma once
#include "Component.h"
#include "RotationSource.h"
#include "Sink.h"

class CGear :
    public CComponent
{
public:
    /// constructor
    CGear();

    /// Destructor
    virtual ~CGear();

    /// updates the motor
    virtual void Update(double elapsed) override;

    /**
    * Draw the machine at the currently specified location
    * \param graphics GDI+ Graphics object
    */
    virtual void Draw(Gdiplus::Graphics* graphics) override;
private:
    /// number of teeth
    int mTeeth = 0;

    /// radius of the gear
    double mRadius = 0;

    /// the rotation source this gear is depending on
    CRotationSource* mRotationSource;

    /// the sink this gear is depending on
    CSink* mSink;
};

