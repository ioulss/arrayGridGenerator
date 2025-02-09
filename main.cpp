#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::cout << "Running..." << '\n';

    std::vector<std::pair<int,int>> v = {{0,0}};

    int gridX, gridY;
    std::cout << "x:"; std::cin >> gridX;
    std::cout << '\n' << "y:"; std::cin >> gridY;

    int vx = 0, vy = 0;

    while (vy < gridY) {        // stops once vy reaches gridY
        while (vx < gridX) {    // stops once vx reaches gridX
            vx++;
            v.push_back({vx,vy});
        }

        vy++;
        vx = 0;                 // resets vx
    }

    int currVY;
    int prevVY = currVY;        // stores current value of p.first
    for (const auto& p : v) {
        currVY = p.second;

        if (prevVY != currVY) { // checks value change
            std::cout << '\n';
            prevVY = currVY;    // stores new current value
        }
        std::cout << "(" << p.first << ", " << p.second << ")";
    }

    return 0;
}