#ifndef AUTOLOCK
#define AUTOLOCK

#include <iostream>
#include <pthread.h>
using namespace std;

class AutoLock
{
public:
    AutoLock(pthread_mutex_t* mutex): m_mutex(mutex)
    {
        cout<<"lock"<<endl;
        pthread_mutex_lock(m_mutex);
    }
    ~AutoLock()
    {
        cout<<"unlock"<<endl;
        pthread_mutex_unlock(m_mutex);
    }

private:
    pthread_mutex_t* m_mutex;

};
aaa
#endif
