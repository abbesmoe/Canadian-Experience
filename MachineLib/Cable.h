/**
 * \file Cable.h
 *
 * \author Moez Abbes
 *
 * Class that represents the cable.
 *
 */

#pragma once
#include "Component.h"

class CWinch;

using namespace Gdiplus;

class CCable :
    public CComponent
{
public:
    /// constructor
    CCable();

    /// Destructor
    virtual ~CCable();

    /// updates the motor
    virtual void Update(double elapsed) override;

    /**
    * Draw the machine at the currently specified location
    * \param graphics GDI+ Graphics object
    */
    virtual void Draw(Gdiplus::Graphics* graphics) override;
private:
	/// the start point of the cable
	Point mStart = Point(0, 0);

	/// the end point of the cable
	Point mEnd = Point(0, 0);

	/// the winch this cab;e is depending on
	CWinch* mWinch;
};

