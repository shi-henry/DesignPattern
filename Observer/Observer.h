class Subject;
class Observer
{
public:
    // regist to subject when construct
    Observer(Subject* subject): m_subject(subject){}

    virtual ~Observer(){}

    // update message
    virtual void update(int updateStr) = 0;

    // remove from the old subject and regist to a new subject;
    void regist(Subject* subject);

    // remove from the old subject;
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
