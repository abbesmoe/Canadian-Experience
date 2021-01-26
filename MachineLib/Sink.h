/**
 * \file Sink.h
 *
 * \author Moez Abbes
 *
 * Class that represents a Sink.
 *
 */

#pragma once

class CShape;
class CGear;
class CWinch;
class CRotationSource;

class CSink
{
public:
    /// constructor
    CSink();

    /// Destructor
    virtual ~CSink();

private:
    /// the speed of the sink
    double mSpeed = 0;

    /// bool to indicate whether the sink is directly driven or not
    bool mDirectlyDriven = false;

    CShape* mShape;

    CGear* mGear;

    CWinch* mWinch;

    CRotationSource* mSource;
};

