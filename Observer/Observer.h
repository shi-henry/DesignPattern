class Subject;
class Observer
{
public:
    Observer(Subject* subject): m_subject(subject){}
    virtual ~Observer(){}
    virtual void update(int updateStr) = 0;
    void regist(Subject* subject);
    void remove();

protected:
    Subject* m_subject;
};

class ObserverA: public Observer
{
public:
    ObserverA(Subject* subject);
    virtual ~ObserverA(){}
    virtual void update(int updateStr);

};

class ObserverB: public Observer
{
public:
    ObserverB(Subject* subject);
    virtual ~ObserverB(){}
    virtual void update(int updateStr);

};
