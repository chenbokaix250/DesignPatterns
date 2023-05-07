#include <iostream>
#include "builder.hpp"

using namespace std;
int main() {
//    std::cout << "Hello, World!" << std::endl;
    Director MyDirector;

    GreenCircleBuilder BuilderGC;
    MyDirector.SetBuilder(BuilderGC);
    Graphic* pGraphicGC = MyDirector.DrawGraphic();
    pGraphicGC->Show();

    RedRectangleBuilder BuilderRB; // 红色矩形的建造者
    MyDirector.SetBuilder(BuilderRB);
    Graphic* pGraphicRB = MyDirector.DrawGraphic(); // 导演使用建造者画图
    pGraphicRB->Show();

    BlueTriangleBuilder BuilderBT; // 蓝色三角的建造者
    MyDirector.SetBuilder(BuilderBT);
    Graphic* pGraphicBT = MyDirector.DrawGraphic(); // 导演使用建造者画图
    pGraphicBT->Show();

    // 资源回收
    if (NULL == pGraphicGC) {
        delete pGraphicGC;
        pGraphicGC = NULL;
    }
    if (NULL == pGraphicRB) {
        delete pGraphicRB;
        pGraphicRB = NULL;
    }
    if (NULL == pGraphicBT) {
        delete pGraphicBT;
        pGraphicBT = NULL;
    }
    return 0;
}
