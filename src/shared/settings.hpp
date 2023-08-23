#ifndef _SETTINGS_HPP_
#define _SETTINGS_HPP_

#define GAME_WIDTH 130
#define GAME_HEIGHT 38

#define TICK_INTERVAL 0.075f

#define PLAYER_STARTING_HEALTH 50
#define PLAYER_MAX_HEALTH 100

#define ENEMY_STARTING_HEALTH 10

#define RIGIDBODY_STARTING_VEL_X 0
#define RIGIDBODY_STARTING_VEL_Y 0

#define MAX_ABS_X_VEL 7
#define MAX_JUMP_VEL 4
#define MAX_FALL_VEL -2

#define QUIT_KEY 'q'

#define PLAYER_JUMP_VEL 3
#define PLAYER_WALK_VEL 2
#define PLAYER_RUN_VEL 3

#define ENEMY_WALK_VEL 1

#define ENEMY_DAMAGE 10

#define HEART_HEALTH_INCREASE 10

#define PLAYER_RENDER_CHARACTER "@"
#define PLAYER_POWERUP_RENDER_CHARACTER "&"
#define ENEMY_RENDER_CHARACTER "E"
#define POWERUP_RENDER_DISABLED_CHARACTER "X"

enum class EntityType {
    StaticEntity,
    RigidEntity,
    Mushroom,
    Star,
    Heart,
    Coin,
};

#endif  // _SETTINGS_HPP_