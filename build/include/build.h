#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class product{
    public:
    vector<string> parts;
    void ListParts() const{
        for(int i =0;i<parts.size();i++)
            cout<<parts[i]<<" ";
        cout<<"\n";
    }
};

class Builder{
    public:
        virtual ~Builder(){}
        virtual void BuildPartA()const=0;
        virtual void BuildPartB()const=0;
};

class ConcreteBuilder1:public Builder{
private:
    shared_ptr<product> pro_ptr;
public:
    ConcreteBuilder1(){
        pro_ptr = make_shared<product>();
    }
    ~ConcreteBuilder1(){
        pro_ptr.reset();
    }
    void BuildPartA()const override{
        pro_ptr->parts.push_back("PartA");
    }

    void BuildPartB() const override{
        pro_ptr->parts.push_back("PartB");
    }

    shared_ptr<product> GetProduct()const{
        return pro_ptr;
    }
};


class Director{
    private:
    shared_ptr<Builder> builder_ptr;
    public:
    void set_builder(shared_ptr<Builder> builder_ptr){
        this->builder_ptr = builder_ptr;
    }
    
    void Construct(){
        builder_ptr->BuildPartA();
        builder_ptr->BuildPartB();
    }
};
