#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

/*
 *  ------------------------
 *      Class Declarations  
 *  ------------------------
 */

  class GameScreen {
    private:

      int rows;
      int columns;
    
    public:

      GameScreen() {
        // Initializes curses, sets up memory and clears the screen
        initscr();
        getmaxyx(stdscr, rows, columns);
        noecho();
        curs_set(0);
      }

      ~GameScreen() {
        // Deallocates memory and ends curses
        endwin();
      }

      int getRows() {
        return this->rows;
      }

      int getColumns() {
        return this->columns;
      }

  };

/*
 *  ------------------------
 *      Main Function  
 *  ------------------------
 */

int main(int argC, char **argV) {
  
  // Creates a GameScreen object and calls the Constructor
  GameScreen gameScreen;

  // Refreshes the screen to match what is stored in memory.
  refresh();

  printw("%i", gameScreen.getRows());
  printw("%i", gameScreen.getColumns());

  // Waits for user input, returns int value of key pressed.
  getch();
  
  return 0;

}


