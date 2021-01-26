/**
 * \file shape.h
 *
 * \author Moez Abbes
 *
 * Class that represents a shape.
 *
 */

#pragma once
#include "Component.h"
#include "Sink.h"

class CTrap;

class CShape :
    public CComponent
{
public:
    /// constructor
    CShape();

    /// Destructor
    virtual ~CShape();

    /// updates the shape
    virtual void Update(double elapsed) override;
private:
    /// position of the shape
    Point mPosition = Point(0, 0);

    /// the trap this shape (part) belongs to
    CTrap* mTrap;

    /// the sink this shape is depending on
    CSink* mSink;
};

