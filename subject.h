#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>
class Observer;

class Subject {
public:
    void attach(Observer *o);
    void notifyObservers();
    virtual ~Subject() = 0;
};

#endif
