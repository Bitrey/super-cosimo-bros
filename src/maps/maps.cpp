#include "maps.hpp"

#include "../powerup/powerup.hpp"
#include "../staticbox/staticbox.hpp"

Room Maps::layout1() {
    // LAYOUT 1 È LO STESSO DELLA PROVA DEL MAIN

    // Define floor heights for layout 1
    List<int> floor;
    for (int i = 0; i < GAME_WIDTH - 50; i++) {
        floor.push(2);
    }
    for (int i = GAME_WIDTH - 50; i < GAME_WIDTH - 20; i++) {
        floor.push(5);
    }
    for (int i = GAME_WIDTH - 20; i < GAME_WIDTH; i++) {
        floor.push(3);
    }

    // Define ceiling heights for layout 1
    List<int> ceiling;
    for (int i = 0; i < GAME_WIDTH; i++) {
        ceiling.push(GAME_HEIGHT - 1);
    }

    // Create platform instances for layout 1
    List<Platform> platforms;

    Platform _platform1((Position){.x = 111, .y = 9}, (Position){.x = 120, .y = 12});
    Platform _platform2((Position){.x = 60, .y = 10}, (Position){.x = 78, .y = 12});
    Platform _platform3((Position){.x = 65, .y = 15}, (Position){.x = 69, .y = 19});
    Platform _platform4((Position){.x = 40, .y = 20}, (Position){.x = 57, .y = 23});

    platforms.push(_platform1);
    platforms.push(_platform2);
    platforms.push(_platform3);
    platforms.push(_platform4);

    StaticBox start_region = StaticBox((Position){.x = 1, .y = 3}, (Position){.x = 7, .y = 6});
    StaticBox end_region = StaticBox((Position){.x = 44, .y = 27}, (Position){.x = 54, .y = 30});

    Room layout1(List<Powerup*>(), floor, ceiling, platforms, GAME_WIDTH, GAME_HEIGHT, start_region, end_region);

    return layout1;
}

Room Maps::layout2() {
    List<int> floor;
    for (int i = 0; i < GAME_WIDTH - 100; i++) {
        floor.push(2);
    }
    for (int i = GAME_WIDTH - 100; i < GAME_WIDTH - 85; i++) {
        floor.push(4);
    }
    for (int i = GAME_WIDTH - 85; i < GAME_WIDTH - 70; i++) {
        floor.push(6);
    }
    for (int i = GAME_WIDTH - 70; i < GAME_WIDTH - 55; i++) {
        floor.push(8);
    }
    for (int i = GAME_WIDTH - 55; i < GAME_WIDTH - 40; i++) {
        floor.push(10);
    }
    for (int i = GAME_WIDTH - 40; i < GAME_WIDTH; i++) {
        floor.push(25);
    }

    List<int> ceiling;
    for (int i = 0; i < GAME_WIDTH; i++) {
        ceiling.push(GAME_HEIGHT - 1);
    }

    List<Platform> platforms;
    Platform _platform1((Position){.x = 5, .y = 15}, (Position){.x = 75, .y = 17});
    Platform _platform2((Position){.x = 25, .y = 23}, (Position){.x = 35, .y = 24});
    Platform _platform3((Position){.x = 36, .y = 26}, (Position){.x = 55, .y = 27});
    Platform _platform4((Position){.x = 56, .y = 29}, (Position){.x = 87, .y = 30});

    platforms.push(_platform1);
    platforms.push(_platform2);
    platforms.push(_platform3);
    platforms.push(_platform4);

    StaticBox start_region = StaticBox((Position){.x = 1, .y = 1}, (Position){.x = 7, .y = 6});
    // StaticBox end_region = StaticBox((Position){.x = 123, .y = 25}, (Position){.x = 129, .y = 29});
    // TODO debug
    StaticBox end_region = StaticBox((Position){.x = 20, .y = 5}, (Position){.x = 26, .y = 8});

    Room layout2(List<Powerup*>(), floor, ceiling, platforms, GAME_WIDTH, GAME_HEIGHT, start_region, end_region);

    return layout2;
}

Room Maps::layout3() {
    List<int> floor;
    for (int i = 0; i < GAME_WIDTH; i++) {
        floor.push(1);
    }

    List<int> ceiling;
    for (int i = 0; i < GAME_WIDTH; i++) {
        ceiling.push(GAME_HEIGHT - 1);
    }

    List<Platform> platforms;

    // DIVIDERS
    Platform _divider1((Position){.x = 30, .y = 0}, (Position){.x = 31, .y = 31});
    Platform _divider2((Position){.x = 60, .y = 3}, (Position){.x = 61, .y = 32});
    Platform _divider3((Position){.x = 90, .y = 0}, (Position){.x = 91, .y = 33});

    // PLATFORMS FIRST PIECE
    Platform _platform1((Position){.x = 0, .y = 5}, (Position){.x = 20, .y = 6});
    Platform _platform2((Position){.x = 0, .y = 15}, (Position){.x = 20, .y = 16});
    Platform _platform3((Position){.x = 0, .y = 25}, (Position){.x = 20, .y = 26});
    Platform _platform4((Position){.x = 10, .y = 10}, (Position){.x = 30, .y = 11});
    Platform _platform5((Position){.x = 10, .y = 20}, (Position){.x = 30, .y = 21});
    Platform _platform6((Position){.x = 10, .y = 30}, (Position){.x = 30, .y = 31});

    // PLATFORMS THIRD PIECE
    Platform _platform7((Position){.x = 60, .y = 7}, (Position){.x = 80, .y = 8});
    Platform _platform8((Position){.x = 60, .y = 17}, (Position){.x = 80, .y = 18});
    Platform _platform9((Position){.x = 60, .y = 27}, (Position){.x = 80, .y = 28});
    Platform _platform10((Position){.x = 70, .y = 12}, (Position){.x = 90, .y = 13});
    Platform _platform11((Position){.x = 70, .y = 22}, (Position){.x = 90, .y = 23});
    Platform _platform12((Position){.x = 70, .y = 32}, (Position){.x = 90, .y = 33});

    // PLATFORMS SECOND PIECE
    Platform _platform13((Position){.x = 31, .y = 26}, (Position){.x = 35, .y = 28});
    Platform _platform14((Position){.x = 31, .y = 24}, (Position){.x = 40, .y = 26});
    Platform _platform15((Position){.x = 31, .y = 22}, (Position){.x = 45, .y = 24});
    Platform _platform16((Position){.x = 31, .y = 20}, (Position){.x = 50, .y = 22});
    Platform _platform17((Position){.x = 31, .y = 18}, (Position){.x = 55, .y = 20});

    platforms.push(_platform1);
    platforms.push(_platform2);
    platforms.push(_platform3);
    platforms.push(_platform4);
    platforms.push(_platform5);
    platforms.push(_platform6);
    platforms.push(_platform7);
    platforms.push(_platform8);
    platforms.push(_platform9);
    platforms.push(_platform10);
    platforms.push(_platform11);
    platforms.push(_platform12);
    platforms.push(_platform13);
    platforms.push(_platform14);
    platforms.push(_platform15);
    platforms.push(_platform16);
    platforms.push(_platform17);

    platforms.push(_divider1);
    platforms.push(_divider2);
    platforms.push(_divider3);

    StaticBox start_region = StaticBox((Position){.x = 0, .y = 0}, (Position){.x = 10, .y = 5});
    StaticBox end_region = StaticBox((Position){.x = 105, .y = 7}, (Position){.x = 115, .y = 10});

    Room layout3(List<Powerup*>(), floor, ceiling, platforms, GAME_WIDTH, GAME_HEIGHT, start_region, end_region);

    return layout3;
}

// Implement setup functions for other layouts...