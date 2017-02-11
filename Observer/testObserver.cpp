#include <iostream>
#include "Subject.h"
#include "Observer.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    Subject* pSubject = new Subject();
    ObserverA obA(pSubject);
    ObserverB obB(pSubject);
    pSubject->notify();
    obB.remove();
    pSubject->notify();
    obB.regist(pSubject);
    obB.regist(pSubject);
    pSubject->notify();
    return 0;
}