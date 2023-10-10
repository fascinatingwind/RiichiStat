# Programm logic 

The project main purpose is to implement **mahjong** game. Final version will contains functionality of the **standart game** and tile statistics (**probablility** of getting some title or getting the easiest combination).

**Input data example** 
* m1 ... m9 - **man** tiles
* p1 ... p9 - **pin** tiles
* s1 ... s9 - **sou** tiles
* {S N W E} - **winds East-West**
* d-{white, red, green} - **dragons**
* {1 - 3} - code names of **main operations**
* {East, South, West, North} - players **names**
* {1 - 9} - code names of palyer **activity operations**

**Exmple** of input and output:

  ```sh
  Welcome to mahjong game
  -----------------------
  1 - create players (all players will be numerate from 1 to 4 and S - E automaticly)
  2 - set an action
  3 - end the game
  -----------------------
  Your input:
  2
  East player turn:
  -----------------------
  Please choose the operation from 1 to 7:
  1 - take 14 random tiles
  2 - define hand by yourself
  3 - declare your hand
  4 - take one tile from wall
  5 - get tile statistics
  6 - fold tile
  7 - get winig probability
  8 - get tile-probabilty tablet
  9 - change palyer
  -----------------------
  Your input:
  1
  Your tiles: m1, s1, s3, s9, p5, p1, S, d-white, s2, p1, p9, m2, N, E
  South player turn:
  -----------------------
  ...
  ```

# Files 
* [player.h](https://github.com/EjenY-Poltavchiny/CPP-proj/blob/ejeny_branch/MahjongStatistic/include/player.h) - **player** class with declaration of structure and plaer functional
* [game.h](https://github.com/EjenY-Poltavchiny/CPP-proj/blob/ejeny_branch/MahjongStatistic/include/game.h) - class of **mahjong** game with declaration of players activity operation and main functions
* [player.cpp](https://github.com/EjenY-Poltavchiny/CPP-proj/blob/ejeny_branch/MahjongStatistic/src/player.cpp) - **player** class definition
* [game.cpp](https://github.com/EjenY-Poltavchiny/CPP-proj/blob/ejeny_branch/MahjongStatistic/src/game.cpp) - **mahjong** game class definition
* [main.cpp](https://github.com/EjenY-Poltavchiny/CPP-proj/blob/ejeny_branch/MahjongStatistic/src/main.cpp) - **main** file
* [test.cpp](https://github.com/EjenY-Poltavchiny/CPP-proj/blob/ejeny_branch/MahjongStatistic/src/test.cpp) - **test** of project functionality
