#include "Engine.h"

int main(void)
{
    Engine engine;

    engine.Initialize();

    engine.GameLoop();

    return 0;
}
