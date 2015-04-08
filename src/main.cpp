#include "story.hpp"
int main()
{
    srand((unsigned int) time(NULL));
    Story story;
    story.startOfGame();
    story.quest1();
    return 0;
}
