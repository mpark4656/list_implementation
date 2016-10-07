#include <iostream>

#include "List.h"

// Test Driver
int main()
{
    my::List<int> list;

    list.push_back( 1 );
    list.push_back( 2 );
    list.push_back( 3 );
    list.push_back( 4 );

    my::List<int>::iterator itr = list.begin();

    for( itr ; itr != list.end() ; itr ++ ) {
        std::cout << *itr << std::endl;
    }

    list.pop_front();

    for( itr = list.begin() ; itr != list.end() ; itr ++ ) {
        std::cout << *itr << std::endl;
    }

    return 0;
}
