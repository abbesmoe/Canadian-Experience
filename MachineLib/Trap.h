/**
 * \file Trap.h
 *
 * \author Moez Abbes
 *
 * Class that represents a Trap.
 *
 */

#pragma once
#include "Component.h"
#include "Shape.h"
#include "Pin.h"
#include <vector>

class CTrap :
    public CComponent
{
public:
    /// constructor
    CTrap();

    /// Destructor
    virtual ~CTrap();

    /// updates the shape
    virtual void Update(double elapsed) override;

    /**
    * Draw the machine at the currently specified location
    * \param graphics GDI+ Graphics object
    */
    virtual void Draw(Gdiplus::Graphics* graphics) override;

private:
    /// basket speed of the trap
    double mBasketSpeed = 0;

    /// start point of the trap
    Point mStart = Point(0,0);
    
    /// end point of the trap
    Point mEnd = Point(0, 0);

    /// list of the parts of the trap
    std::vector<CShape*> mParts;

    /// list of the pins in this trap
    std::vector<CPin*> mPins;
};

