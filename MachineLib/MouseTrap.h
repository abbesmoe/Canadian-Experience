/**
 * \file MouseTrap.h
 *
 * \author Moez Abbes
 *
 * Class that represents a mouse trap.
 *
 */

#pragma once
#include "Machine.h"
#include "ActualMouseTrap.h"

using namespace Gdiplus;

class CMouseTrap :
    public CMachine
{
public:
    CMouseTrap();
    virtual ~CMouseTrap();

    /**
    * Set the position for the root of the machine
    * \param x X location (pixels)
    * \param y Y location (pixels)
    */
    virtual void SetLocation(int x, int y) override;

    /**
    * Draw the machine at the currently specified location
    * \param graphics GDI+ Graphics object
    */
    virtual void DrawMachine(Gdiplus::Graphics* graphics) override;

    /**
    * Set the current machine animation frame
    * \param frame Frame number
    */
    virtual void SetMachineFrame(int frame) override;

    /**
    * Set the machine number
    * \param machine An integer number. Each number makes a different machine
    */
    virtual void SetMachineNumber(int machine) override;

    /**
     * Get the current machine number
     * \return Machine number integer
     */
    virtual int GetMachineNumber() override;

    void Update(double elapsed);

private:
    /// machine number
    int mMachine = 0;

    /// location (x,y) initialized to (0,0)
    Point mLocation;

    /// Pointer to the actual mouse trap
    CActualMouseTrap* mActualMouseTrap;
};

