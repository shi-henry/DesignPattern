#include <set>

class Observer;
class Subject
{
public:
    Subject(){}
    ~Subject(){}
    void attach(Observer* observer);
    void detach(Observer* observer);
    void notify();

private:
    std::set<Observer*> m_observer;
    typedef std::set<Observer*>::iterator ObserverIter;
};
