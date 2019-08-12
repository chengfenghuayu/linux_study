#include <iostream>
#include "source/AStar.hpp"

int main()
{
    AStar::Generator generator;
    generator.setWorldSize({800, 800});
    
    generator.addCollision({200,100});
    generator.addCollision({300,200});
    generator.addCollision({400,300});
    generator.addCollision({500,400});
    generator.addCollision({100,500});

    generator.setHeuristic(AStar::Heuristic::euclidean);
    generator.setDiagonalMovement(true);

    std::cout << "Generate path ... \n";
    auto path = generator.findPath({0, 0}, {100, 200});

    for(auto& coordinate : path) {
        std::cout << coordinate.x << " " << coordinate.y << "\n";
    }

    generator.display();
}
