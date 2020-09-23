#include <SFML/Graphics.hpp>
#include <vector>
#include <list>
#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;
enum class State {snake, fruit, wall, empty, head, final};
enum class Command {pass, finish,left, right, up, down};
