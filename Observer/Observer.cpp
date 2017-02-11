#include <iostream>
#include "Observer.h"
#include "Subject.h"
using namespace std;

void Observer::regist(Subject* subject)
{
    if (NULL == subject)
    {
        cout<<"Observer::regist subject is NULL"<<endl;
        return;
    }
    if (m_subject != subject)
    {
        remove();
        m_subject = subject;
        m_subject->attach(this);
    }
    else
    {
        cout<<"Observer::regist no need attach operation"<<endl;
    }
}

void Observer::remove()
{
    if (NULL != m_subject)
    {
        m_subject->detach(this);
        m_subject = NULL;
    }
}

ObserverA::ObserverA(Subject* subject): Observer(subject)
{
    if (NULL != m_subject)
    {
        m_subject->attach(this);
    }
}

void ObserverA::update(int updateStr)
{
    cout<<"ObserverA::update:   "<<updateStr<<endl;
}

ObserverB::ObserverB(Subject* subject): Observer(subject)
{
    if (NULL != m_subject)
    {
        m_subject->attach(this);
    }
}

void ObserverB::update(int updateStr)
{
    cout<<"ObserverB::update:   "<<updateStr<<endl;
}