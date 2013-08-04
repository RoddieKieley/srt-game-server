//
//  GameEventFactory.cpp
//  CMSTest
//
//  Created by Roddie Kieley on 13-07-07.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#include "EntityGameEventFactory.h"
#include <assert.h>


// Constructor
EntityGameEvent_Dependencies::
EntityGameEvent_Dependencies(const EntityGameEventBuffer_EntityGameEventBufferType& anEntityGameEventBufferType, AEntity*& pEntity) :
    m_anEntityGameEventBufferType(anEntityGameEventBufferType),
    m_pEntity(pEntity)
{
    assert(m_pEntity);
}

// Destructor
EntityGameEvent_Dependencies::
~EntityGameEvent_Dependencies()
{
    
}


//EntityGameEvent* EntityGameEventFactory::Create(EntityGameEvent_Dependencies& anEntityGameEvent_Dependencies)
//{
//    EntityGameEvent* pEntityGameEvent = NULL;
//    
//    CreatedEvent(this, pEntityGameEvent);
//    return pEntityGameEvent;
//}