#include <set>

class Observer;
class Subject
{
public:
    Subject(){}

    ~Subject(){}

    // regist a new observer if it does not in m_observer;
    void attach(Observer* observer);

    // remove one observer in m_observer;
    void detach(Observer* observer);

    // notify the observers to update messages;
    void notify();

private:
    std::set<Observer*> m_observer;
    typedef std::set<Observer*>::iterator ObserverIter;
};
