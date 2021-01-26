/**
 * \file Component.h
 *
 * \author Moez Abbes
 *
 * Class that represents a component.
 *
 */

#pragma once
#include "Polygon.h"

class CActualMouseTrap;

using namespace Gdiplus;

class CComponent :
    public CPolygon
{
public:
    /// constructor
    CComponent();

    /// Destructor
    virtual ~CComponent();

    /**
    * Draw the machine at the currently specified location
    * \param graphics GDI+ Graphics object
    */
    virtual void Draw(Gdiplus::Graphics* graphics);

    /**
    * Set the position for the root of the machine
    * \param x X location (pixels)
    * \param y Y location (pixels)
    */
    void SetLocation(int x, int y);

    /// updates the component
    virtual void Update(double elapsed);

    /// add sink of the component
    void AddSink(CComponent sink);

    /// add source of the component
    void SetSource(CComponent source);

private:
    /// the origin of the component
    Point mOrigin = Point(0, 0);

    /// bool to indicate whether the component is currently running or not
    bool mRunning = false;

    /// pointer to the mousetrap this component is a part of
    CActualMouseTrap* mActualMouseTrap;
};

