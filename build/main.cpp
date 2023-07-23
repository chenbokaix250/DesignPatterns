#include "build.h"
#include <memory>
#include <iostream>
using namespace std;
int main(){
    
    shared_ptr<Director> director_ptr = make_shared<Director>();
    shared_ptr<ConcreteBuilder1> build_ptr = make_shared<ConcreteBuilder1>();
    director_ptr->set_builder(build_ptr);
    director_ptr->Construct();
    build_ptr->GetProduct()->ListParts();
    return 0;
}