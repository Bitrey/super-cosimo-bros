#ifndef _STAR_HPP_
#define _STAR_HPP_

#include "../powerup/powerup.hpp"
#include "../shared/position.hpp"

class Star : public Powerup {
   private:
    const char* render_char = "S";

   public:
    Star(Position position);
    const char* get_render_char() override;
    EntityType get_entity_type() override;
};

#endif  // _STAR_HPP_
