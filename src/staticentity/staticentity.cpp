#include "staticentity.hpp"

StaticEntity::StaticEntity(Position position)
    : position(position), type(EntityType::StaticEntity) {}

Position StaticEntity::get_position() {
    return position;
}

void StaticEntity::set_position(Position _position) {
    position = _position;
}

EntityType StaticEntity::get_entity_type() {
    return type;
}
