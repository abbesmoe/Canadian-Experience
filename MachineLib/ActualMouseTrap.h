/**
 * \file ActualMouseTrap.h
 *
 * \author Moez Abbes
 *
 * Class that represents the actual mouse trap.
 *
 */

#pragma once
#include "Component.h"

class CMouseTrap;

using namespace Gdiplus;

class CActualMouseTrap
{
public:
	CActualMouseTrap();
	virtual ~CActualMouseTrap();

	/**
	* Draw the machine at the currently specified location
	* \param graphics GDI+ Graphics object
	*/
	void DrawMachine(Gdiplus::Graphics* graphics);

	/**
	* Set the position for the root of the machine
	* \param x X location (pixels)
	* \param y Y location (pixels)
	*/
	void SetLocation(int x, int y);

private:
	/// location of the Actual Mouse Trap
	Point mLocation;

	/// Pointer to mouse trap
	CMouseTrap* mMouseTrap;

	/// list of pointers to the components of the trap
	std::vector<CComponent*> mComponents;
};

