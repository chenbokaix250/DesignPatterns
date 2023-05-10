#include "flyweight.h" 
int main() 
{ 
 FlyweightFactory flyweightfactory; 
 flyweightfactory.GetFlyweight("hello"); 
 flyweightfactory.GetFlyweight("world"); 
 flyweightfactory.GetFlyweight("hello"); 
//  system("pause"); 
 return 0; 
}