# 建造者模式

Builder 模式的关键是其中的 Director对象并不直接返回对象，而是通过一步步（BuildPartA，BuildPartB，BuildPartC）来一步步进行对象的创建。


Builder 模式和 AbstractFactory 模式在功能上很相似，因为都是用来创建大的复杂的对象，它们的区别是Builder 模式强调的是一步步创建对象，并通过相同的创建过程可以获得不同的结果对象，一般来说 Builder 模式中对象不是直接返回的。而在 AbstractFactory 模式中对象是直接返回的，AbstractFactory 模式强调的是为创建多个相互依赖的对象提供一个同一的接口。

build中的实现
```c++
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
```

director的实现
```c++
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
```
---


### chatgpt的回答

Build 设计模式是一种创建型模式，它可以通过将复杂对象的构建过程分解为多个简单的步骤，以便更好地控制对象的创建过程。Build 设计模式常用于需要创建复杂对象的场景，例如创建一个包含多个组件的对象，或者创建一个对象的过程中需要进行多个计算和处理的场景。

Build 设计模式包含以下几个角色：

1. Director（指导者）：负责指导 Builder 如何构建对象，通常包含一个 Builder 对象的引用。
2. Builder（构建器）：定义了创建对象所需的各个组件和步骤，通常包含多个具体的构建方法。
3. Concrete Builder（具体构建器）：实现 Builder 接口并实现其中的具体构建方法，用于构建特定类型的对象。
4. Product（产品）：表示最终构建的对象。

Build 设计模式的步骤如下：

1. 定义产品类，明确需要构建的复杂对象的结构和属性。
2. 定义 Builder 接口，并在接口中定义用于构建产品的各个组件和步骤的方法。
3. 定义 Concrete Builder 类，实现 Builder 接口，并实现其中的具体构建方法。
4. 在 Concrete Builder 类中定义一个返回构建好的产品的方法。
5. 定义 Director 类，负责指导 Builder 如何构建产品，并提供一个构建方法。
6. 在 Director 类中调用 Builder 的具体构建方法，按照一定顺序构建产品。
7. 最后，调用 Concrete Builder 的返回产品方法，返回构建好的产品。

以下是一个简单的示例代码：

```
// Product
class Car {
    private String engine;
    private String body;
    private String wheels;

    public void setEngine(String engine) {
        this.engine = engine;
    }

    public void setBody(String body) {
        this.body = body;
    }

    public void setWheels(String wheels) {
        this.wheels = wheels;
    }

    // getters
}

// Builder
interface CarBuilder {
    void buildEngine();
    void buildBody();
    void buildWheels();
    Car getCar();
}

// Concrete Builder
class SportsCarBuilder implements CarBuilder {
    private Car car;

    public SportsCarBuilder() {
        car = new Car();
    }

    public void buildEngine() {
        car.setEngine("V8");
    }

    public void buildBody() {
        car.setBody("Sleek");
    }

    public void buildWheels() {
        car.setWheels("Alloy");
    }

    public Car getCar() {
        return car;
    }
}

// Director
class CarBuildDirector {
    private CarBuilder builder;

    public CarBuildDirector(CarBuilder builder) {
        this.builder = builder;
    }

    public void constructCar() {
        builder.buildEngine();
        builder.buildBody();
        builder.buildWheels();
    }
}

// Client
public class Client {
    public static void main(String[] args) {
        CarBuilder builder = new SportsCarBuilder();
        CarBuildDirector director = new CarBuildDirector(builder);
        director.constructCar();
        Car car = builder.getCar();
        System.out.println(car);
    }
}
```

在上述示例代码中，Car 表示需要构建的复杂对象，CarBuilder 定义了构建 Car 所需的各个组件和步骤，SportsCarBuilder 是一个具体构建器，用于构建一辆运动车，CarBuildDirector 负责指导 SportsCarBuilder 如何构建 Car，Client 是客户端代码，用于使用 Build 模式构建一辆运动车。

