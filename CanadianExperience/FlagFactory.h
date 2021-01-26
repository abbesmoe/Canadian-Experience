/**
 * \file SpartyFactory.h
 *
 * \author Moez Abbes
 *
 * Factory that builds the Flag actor.
 */

#pragma once
#include "ActorFactory.h"

/**
 * Factory that builds the Flag actor.
 */
class CFlagFactory :
    public CActorFactory
{
public:
    CFlagFactory();
    virtual ~CFlagFactory();

    std::shared_ptr<CActor> Create();
};

