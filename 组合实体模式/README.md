# 组合模式

组合模式是一种结构型设计模式，它允许将对象组合成树形结构，以表示“部分-整体”的层次结构。组合模式让客户端可以统一地对待单个对象和组合对象，从而简化了客户端的代码。

在组合模式中，有两种类型的对象：叶子对象和组合对象。叶子对象表示树的末端对象，它没有子节点；组合对象表示树的中间节点，它包含一个或多个子节点，子节点可以是叶子对象或组合对象。组合对象对外提供与叶子对象相同的接口，这样客户端就可以统一地对待单个对象和组合对象。