#ifndef _DRAGONTREASURE_H_
#define _DRAGONTREASURE_H_

#include "dragon.h"
#include "item.h"

class DragonTreasure : public item{
  int val;
  bool isDead;
  public:
  int getVal();
  bool isDragonDead();  
};

#endif
