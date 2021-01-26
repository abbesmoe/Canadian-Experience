/**
 * \file SpartyFactory.cpp
 *
 * \author Moez Abbes
 */

#include "pch.h"
#include "FlagFactory.h"
#include "PolyDrawable.h"
#include "ImageDrawable.h"

using namespace Gdiplus;
using namespace std;

/**
 * Constructor
 */
CFlagFactory::CFlagFactory()
{
}


/**
 * Destructor
 */
CFlagFactory::~CFlagFactory()
{
}

/** This is a concrete factory method that creates our Harold actor.
* \returns Pointer to an actor object.
*/
std::shared_ptr<CActor> CFlagFactory::Create()
{
	shared_ptr<CActor> actor = make_shared<CActor>(L"Flag");

	auto flag = make_shared<CImageDrawable>(L"Flag", L"images/msu-flag.png");
	flag->SetCenter(Point(0, 300));
	flag->SetPosition(Point(0, 0));
	actor->SetRoot(flag);
	actor->AddDrawable(flag);
	return actor;
}