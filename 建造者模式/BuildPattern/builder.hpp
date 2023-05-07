#include <iostream>
using namespace std;

class Graphic{
public:
    Graphic(){}

    void SetShape(string strShape){
        m_strShape = strShape;
    }
    void SetColor(string strColor){
        m_strColor = strColor;
    }

    void Show(){
        cout<<m_strColor<<m_strShape<<endl;
    }
private:
    string m_strShape;
    string m_strColor;
};

class Builder{
public:
    Builder():m_pGraphic(NULL){}
    void CreateGraphic(){
        if(NULL == m_pGraphic){
            m_pGraphic = new Graphic();
        }
    }
    Graphic* GetGraphic(){
        return m_pGraphic;
    }

    virtual void DrawShape()=0;
    virtual void DrawColor()=0;

protected:
    Graphic* m_pGraphic;
};

class GreenCircleBuilder:public Builder{
public:
    void DrawShape(){
        if(NULL != m_pGraphic){
            m_pGraphic->SetShape("Circle");
        }
    }

    void DrawColor(){
        if(NULL != m_pGraphic){
            m_pGraphic->SetColor("Green");
        }
    }
};

class RedRectangleBuilder:public Builder{
public:
    void DrawShape(){
        if(NULL != m_pGraphic){
            m_pGraphic->SetShape("Rectangle");
        }
    }
    void DrawColor(){
        if(NULL != m_pGraphic){
            m_pGraphic->SetColor("Red");
        }
    }
};

class BlueTriangleBuilder:public Builder{
public:
    void DrawShape(){
        if(NULL != m_pGraphic){
            m_pGraphic->SetShape("Triangle");
        }
    }
    void DrawColor(){
        if(NULL != m_pGraphic){
            m_pGraphic->SetColor("Blue");
        }
    }
};

class Director{
public:
    Director():m_pBuilder(NULL){}
    void SetBuilder(Builder& pBuilder){
        m_pBuilder = &pBuilder;
    }

    Graphic* DrawGraphic(){
        if(NULL == m_pBuilder){
            return NULL;
        }
        m_pBuilder->CreateGraphic();
        m_pBuilder->DrawShape();
        m_pBuilder->DrawColor();
        return m_pBuilder->GetGraphic();
    }
private:
    Builder* m_pBuilder;
};