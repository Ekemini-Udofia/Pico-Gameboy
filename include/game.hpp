#ifndef INCLUDE_GAME_HPP
#define INCLUDE_GAME_HPP

#include <utils.hpp>

class cGame {
  public:
    cGame() = default;
    String sName;
    int id;
    std::function<void()> run;
};

#endif // INCLUDE_GAME_HPP
