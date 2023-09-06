#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#include <string>

int main(int argC, char **argV) {

	// Variable declarations
	int yMax, xMax;
	char input; 

	// Initialize and set options		
	initscr();
	noecho();
	curs_set(0);

	// Initialize variables
	getmaxyx(stdscr, yMax, xMax); 
	
	// Declare Menu window
	WINDOW *win = newwin(yMax*3/10, xMax*8/10, yMax*7/10, xMax/10);
	box(win, 0, 0);
	
	

	// Print Menu titles
	mvwprintw(win, 0, 2, "Menu");

	// Main loop
	while(true) {
		input = wgetch(win);
		
		switch(input) {
			
			case: 

		}	
	
	}
	
	endwin();

	return 0;
	

}
