# include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first;


    std::cout << second::x;

    // Namespace = provides a solution for preventing name conflicts
    //             in a large project. Each entity needs a unique name.
    //             A namespace allows for identically name entities
    //             as long as the namespaces are different

    return 0;
}