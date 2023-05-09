#include <iostream>
using namespace std;

class Television{
public:
    void on(){
        cout<<"TV OPEN"<<endl;
    }
    void off(){
        cout<<"TV CLOSE"<<endl;
    }
};

class Light{
public:
    void on(){
        cout<<"light OPEN"<<endl;
    }
    void off(){
        cout<<"light CLOSE"<<endl;
    }
};

class Audio{
public:
    void on(){
        cout<<"Audio OPEN"<<endl;
    }
    void off(){
        cout<<"Audio CLOSE"<<endl;
    }
};

class DVDplayer{
public:
    void on(){
        cout<<"DVD OPEN"<<endl;
    }
    void off(){
        cout<<"DVD CLOSE"<<endl;
    }
};

class KTVMode{
public:
    KTVMode(){
        pTV = new Television;
        pLight = new Light;
        pAudio = new Audio;
        pDvd = new DVDplayer;
    }

    void onKTV(){
        pTV->on();
        pLight->off();
        pAudio->on();
        pDvd->on();
    }
    void offKTV(){
        pTV->off();
        pLight->off();
        pAudio->off();
        pDvd->off();
    }
    ~KTVMode() {
        delete pTV;
        delete pLight;
        delete pAudio;
        delete pDvd;
    }
private:
    Television* pTV;
    Light* pLight;
    Audio* pAudio;
    DVDplayer* pDvd;
};

void test(){
    KTVMode* ktv = new KTVMode;
    ktv->onKTV();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
