#include "Terrain.h"

Terrain::Terrain(int x, int y) : MapUnit(x, y) {}
Terrain::~Terrain() {}
UnitType Terrain::get_unit_type() const { return UnitType::TERRAIN; }
