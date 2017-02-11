#include <iostream>
#include "Subject.h"
#include "Observer.h"
using namespace std;

void Subject::attach(Observer* observer)
{
    if (NULL != observer)
    {
        pair<ObserverIter, bool> result = m_observer.insert(observer);
        if (true == result.second)
        {
            cout<<"Subject::attach successfully registed"<<endl;
        }
        else
        {
            cout<<"Subject::attach already registed"<<endl;
        }
    }
}

void Subject::detach(Observer* observer)
{
    if (NULL != observer)
    {
        int num = m_observer.erase(observer);
        if (0 < num)
        {
            cout<<"Subject::detach successfully removed"<<endl;
        }
        else
        {
            cout<<"Subject::detach do not need remove"<<endl;
        }
    }
}

void Subject::notify()
{
    for (ObserverIter i = m_observer.begin(); i != m_observer.end(); ++i)
    {
        (*i)->update(8);
    }
}
