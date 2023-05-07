//
// Created by 博凯 Chen on 2023/5/7.
//

#ifndef PROTOTYPE_PATTERN_PROTOTYPE_H
#define PROTOTYPE_PATTERN_PROTOTYPE_H


class Prototype {
public:
    virtual ~Prototype();
    virtual Prototype* Clone() const = 0;

protected:
    Prototype();

private:
};

class ConcretePrototype:public Prototype{
public:
    ConcretePrototype();
    ConcretePrototype(const ConcretePrototype& cp);
    ~ConcretePrototype();

    Prototype* Clone() const;

protected:
private:
};



#endif //PROTOTYPE_PATTERN_PROTOTYPE_H
