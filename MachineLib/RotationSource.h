/**
 * \file RotationSource.h
 *
 * \author Moez Abbes
 *
 * Class that represents the rotation source.
 *
 */

#pragma once

#include "Sink.h"

class CWinch;
class CGear;
class CMotor;

class CRotationSource
{
public:
    /// constructor
    CRotationSource();

    /// Destructor
    virtual ~CRotationSource();

private:
    /// the angle of the rotation source
	double mAngle = 0;

    /// the rotation source winch
    CWinch* mWinch;

    /// the rotation source gear
    CGear* mGear;

    /// the rotation source motor
    CMotor* mMotor;

    /// the sink this rotation source is depending on
    CSink* mSink;
};

