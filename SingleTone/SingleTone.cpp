#include <iostream>
#include "AutoLock.h"
using namespace std;

class SingleTone
{
public:
    static SingleTone* getInstance();
    void func();

private:
    static SingleTone* m_instancePtr;
    static pthread_mutex_t m_mutex;
};

SingleTone* SingleTone::m_instancePtr = NULL;
pthread_mutex_t SingleTone::m_mutex = PTHREAD_MUTEX_INITIALIZER;

SingleTone* SingleTone::getInstance()
{
    if (NULL == m_instancePtr)
    {
        AutoLock __lock(&m_mutex);
        if (NULL == m_instancePtr)
        {
            cout<<"create."<<endl;
            m_instancePtr = new SingleTone();
        }
    }
    return m_instancePtr;
}

void SingleTone::func()
{
    cout<<"succeed !"<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    SingleTone* stPtr = SingleTone::getInstance();
    if (NULL == stPtr)
    {
        cout<<"error"<<endl;
        return -1;
    }
    stPtr->func();
    return 0;
}