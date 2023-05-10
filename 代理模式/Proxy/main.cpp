#include <iostream>
using namespace std;

class AbstractCommonInterface {
    public:
    virtual void run() = 0;
};

class MySystem:public AbstractCommonInterface{
    public:
    virtual void run(){
        cout<<"系统启动"<<endl;
    }
};

class MySystemProxy:public AbstractCommonInterface{
    public:
    MySystemProxy(string userName,string password){
        this->mUserName = userName;
        this->mPassword = password;
        pMySystem = new MySystem;
    }

    bool checkUserNameAndPassword(){
        if(mUserName == "admin" && mPassword == "admin"){
            return true;
        }
        return false;
    }

    virtual void run(){
        if(checkUserNameAndPassword() == true){
            cout<<"启动成功"<<endl;
            this->pMySystem->run();
        }else{
            cout << "用户名或者密码错误,权限不足" << endl;
        }
    }
    ~MySystemProxy(){
        if(pMySystem!=NULL){
            delete pMySystem;
        }
    }
    private:
    string mUserName;
    string mPassword;
    MySystem* pMySystem;
};

void test(){
    MySystemProxy* proxy = new MySystemProxy("admin","admin");
    proxy->run();
}

int main(){
    test();
    return 0;
}