/**
 * \file MouseTrapTrap.cpp
 *
 * \author Moez Abbes
 *
 */

#include "pch.h"
#include "MouseTrap.h"
#include "Machine.h"

using namespace Gdiplus;

CMouseTrap::CMouseTrap()
{
}

CMouseTrap::~CMouseTrap()
{
}

void CMouseTrap::SetLocation(int x, int y)
{
    CMachine::SetLocation(x, y);
}

void CMouseTrap::DrawMachine(Gdiplus::Graphics* graphics)
{
    CMachine::DrawMachine(graphics);
}


void CMouseTrap::SetMachineFrame(int frame)
{
    CMachine::SetMachineFrame(frame);
}


void CMouseTrap::SetMachineNumber(int seed)
{
    CMachine::SetMachineNumber(seed);
}

int CMouseTrap::GetMachineNumber()
{
    return CMachine::GetMachineNumber();
}

void CMouseTrap::Update(double elapsed)
{
}

