#include <algorithm>
#include <memory>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class strategy{
public:
    virtual ~strategy(){}
    virtual string doAlgorithm(const vector<string>& v) = 0;
};

class context{
    
    private:
    shared_ptr<strategy> mStrategy;

    public:
    context(shared_ptr<strategy> strategy):mStrategy(strategy){}
    ~context(){}

    void setStrategy(shared_ptr<strategy> strategy){
        mStrategy.reset();
        this->mStrategy = strategy;
    }

    void doSomeBusinessLogic() const{
        cout<<mStrategy.get()->doAlgorithm({"a","b","c"})<<endl;
    }
};

class concreteStrategyA:public strategy{
    public:
    string doAlgorithm(const vector<string>& v) override{
        string res = "";
        for_each(v.begin(),v.end(),[&res](const string& s){res += s;});
        sort(res.begin(),res.end(),std::greater<int>());
        return res;
    }
};

class concreteStrategyB:public strategy{
    public:
    string doAlgorithm(const vector<string>& v) override{
        string res = "";
        for_each(v.begin(),v.end(),[&res](const string& s){res += s;});
        sort(res.begin(),res.end());
        return res;
    }
};

void clientCode();