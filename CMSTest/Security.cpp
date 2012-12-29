//
//  Security.cpp
//  CMSTest
//
//  Created by Roddie Kieley on 12-12-09.
//  Copyright (c) 2012 Roddie Kieley. All rights reserved.
//

#include "Security.h"
#include "DualStick.pb.h"
#include "box2d.pb.h"
#include "Command.pb.h"
#include "SimpleAsyncConsumer.h"
#include "SimpleAsyncProducer.h"
#include <cms/CMSException.h>
//#include <cms/Message.h>
#include <cms/TextMessage.h>
#include <cms/BytesMessage.h>
#include <cms/Destination.h>
#include <cms/TemporaryQueue.h>
#include <decaf/util/UUID.h>
#include <stdio.h>
#include <assert.h>
#include <string>
#include <iostream>

using namespace DualStick;
using namespace box2d;
using namespace cms;
using namespace command;

Security::_Publisher                 Security::Publisher;

// Constructor(s)
/*
 B2DWorld.h::_Publisher::_Publisher()
 {
 
 }
 */

// Destructor
/*
 B2DWorld.h::_Publisher::~_Publisher()
 {
 
 }
 */

// Method(s)
void Security::_Publisher::OnSecurityJoin(std::string& strUUID)
{
    ICallbacks* pObjToCallback = NULL;
    
    //m_listSubscribersSwap = m_listSubscribers;
    Clone(m_listSubscribersSwap);
    while(!m_listSubscribersSwap.empty())
    {
        pObjToCallback = m_listSubscribersSwap.front();
        m_listSubscribersSwap.pop_front();
        assert(pObjToCallback);
        pObjToCallback->OnSecurityJoin(strUUID);
    }
}

void Security::_Publisher::OnSecurityLeave(std::string& strUUID)
{
    ICallbacks* pObjToCallback = NULL;
    
    //m_listSubscribersSwap = m_listSubscribers;
    Clone(m_listSubscribersSwap);
    while(!m_listSubscribersSwap.empty())
    {
        pObjToCallback = m_listSubscribersSwap.front();
        m_listSubscribersSwap.pop_front();
        assert(pObjToCallback);
        pObjToCallback->OnSecurityLeave(strUUID);
    }
}

// Constructor(s)
Security::Security() :
    m_pSimpleAsyncConsumer(NULL),
    m_pSimpleAsyncProducer(NULL)
{
    bool            useTopics = false;
    bool            clientAck = false;
    std::string     strSecurityURI = "AAS.IN";
    std::string     strBrokerURI = "tcp://127.0.0.1:61613?wireFormat=stomp";

    std::cout << "Security::Security()..." << std::endl;
    
    m_pSimpleAsyncConsumer = new SimpleAsyncConsumer(strBrokerURI, strSecurityURI, useTopics, clientAck);
    m_pSimpleAsyncConsumer->runConsumer();
    m_pSimpleAsyncConsumer->SetMessageListener(this);
    
    Player::Publisher.Attach(this);
}

// Destructor
Security::~Security()
{
    Player::Publisher.Detach(this);
    
    m_pSimpleAsyncConsumer->close();
    delete m_pSimpleAsyncConsumer;
    m_pSimpleAsyncConsumer = NULL;
}

// MessageListener implementation
void Security::onMessage(const Message* pMessage)
{
    assert(pMessage);
    
    static int              count = 0;
    bool                    clientAck = false;
    Command                 aCommand;
    std::string             strUUID = "";
    std::string             strBrokerURI = "tcp://127.0.0.1:61613?wireFormat=stomp";
    
    try
    {
        count++;
        const BytesMessage* pBytesMessage = dynamic_cast<const BytesMessage*>(pMessage);
        assert(pBytesMessage);

        unsigned char* pucBodyBytes = pBytesMessage->getBodyBytes();
        int iBodyBytes = pBytesMessage->getBodyLength();
        assert(pucBodyBytes);
        assert(iBodyBytes > 0);
        
        if(clientAck)
        {
            pMessage->acknowledge();
        }
        
        aCommand.ParseFromArray(pucBodyBytes, iBodyBytes);

        assert(Command_CommandType_SECURITY == aCommand.type());
        const SecurityCommand& aSecurityCommand = aCommand.securitycommand();
        if (SecurityCommand_SecurityCommandType_JOIN == aSecurityCommand.type())
        {
            // Join stuff
            const cms::Destination* pDestination = pBytesMessage->getCMSReplyTo();
            assert(pDestination);
            decaf::util::UUID aNewUUID = decaf::util::UUID::randomUUID();
            strUUID = aNewUUID.toString();
            // TODO: Make not super inefficient
            SimpleProducer* pSimpleAsyncProducer = new SimpleProducer(strBrokerURI, pDestination);
            pSimpleAsyncProducer->Send(strUUID);
            delete pSimpleAsyncProducer;
            
            Publisher.OnSecurityJoin(strUUID);
        }

        if (SecurityCommand_SecurityCommandType_LEAVE == aSecurityCommand.type())
        {
            assert(aSecurityCommand.has_uuid());
            strUUID = aSecurityCommand.uuid();
            
            Publisher.OnSecurityLeave(strUUID);
        }

    }
    catch (CMSException& e)
    {
        e.printStackTrace();
    }
}

// Player::ICallbacks implementation
void Security::OnPlayerCreated(std::string& strUUID)
{
    assert(strUUID.length() > 0);
    
    //std::string     strBrokerURI = "tcp://127.0.0.1:61613?wireFormat=stomp";
    //SimpleProducer* pSimpleProducer = m_mapUUIDToSimpleAsyncProducers[strUUID];
    //assert(pSimpleProducer);
    
    //delete pSimpleProducer;
    //pSimpleProducer = NULL;
}


// cms::AsyncCallback implementation
void Security::onSuccess()
{
    //delete m_pSimpleAsyncProducer;
    //m_pSimpleAsyncProducer = NULL;
}

void Security::onException(const cms::CMSException& aCMSException)
{
    //delete m_pSimpleAsyncProducer;
    //m_pSimpleAsyncProducer = NULL;
}