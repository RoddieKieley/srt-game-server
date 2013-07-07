//
//  Messenger_Consumer.h
//  CMSTest
//
//  Created by Roddie Kieley on 13-05-19.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__Messenger_Consumer__
#define __CMSTest__Messenger_Consumer__

#include "Messenger.h"
#include "Poco/BasicEvent.h"
#include <decaf/util/StlQueue.h>
#include <cms/MessageListener.h>
#include <string>
#include <stdint.h>

namespace cms
{
    class Message;
    class BytesMessage;
}
namespace google
{
    namespace protobuf
    {
        class Message;
    }
}
class SimpleAsyncConsumer;
class AEntity;


class Messenger::_Consumer :
    public cms::MessageListener
{
    friend class Messenger;
    //friend class Messenger_ConsumerFactory;
    
protected:
    class _EventPublisher
    {
    public:
        // Event(s)
        Poco::BasicEvent<const AEntity&>        ReceivedCreateEntityRequest;
        Poco::BasicEvent<const AEntity&>        ReceivedDestroyEntityRequest;
    };
    
//    class _Dependencies
//    {
//    private:
//    protected:
////        const std::string&           m_strBrokerURI;
////        const str::string&           m_strDestinationURI;
//        SimpleAsyncConsumer*&             m_pSimpleAsyncConsumer;
//
//    public:    
//        SimpleAsyncConsumer*&       pSimpleAsyncConsumer = m_pSimpleAsyncConsumer;
//        
//        // Constructor
////        _Dependencies(const std::string& strBrokerURI, const str::string& strDestinationURI);
//        _Dependencies(SimpleAsyncConsumer*& pSimpleAsyncConsumer);
//        
//        // Destructor
//        ~_Dependencies() {};
//    };
    
private:
    
protected:
    SimpleAsyncConsumer*                                            m_pSimpleAsyncConsumer;
    decaf::util::StlQueue<std::pair<int, unsigned char*> >          m_aMessageQueue;
    
    // Helper(s)
    void Setup(std::string& strBrokerURI, std::string& strDestinationURI);
    void Teardown();
    
public:
    static _EventPublisher                          EventPublisher;
    
    // Constructor(s)
    _Consumer();
    //_Consumer(_Dependencies& theDependencies);
    
    // Destructor(s)
    ~_Consumer();
    
    // MessageListener implementation
    virtual void onMessage(const cms::Message* pMessage);
    
    void ProcessReceivedMessages();
};

#endif /* defined(__CMSTest__Messenger_Consumer__) */
