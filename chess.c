#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

#define RESET "\033[0m" 
#define BLACK "\033[30m" /* Black */ 
#define RED "\033[31m" /* Red */ 
#define GREEN "\033[32m" /* Green */ 
#define YELLOW "\033[33m" /* Yellow */ 
#define BLUE "\033[34m" /* Blue */ 
#define MAGENTA "\033[35m" /* Magenta */
#define CYAN "\033[36m" /* Cyan */ 
#define WHITE "\033[37m" /* White */ 
#define BOLDBLACK "\033[1m\033[30m" /* Bold Black */ 
#define BOLDRED "\033[1m\033[31m" /* Bold Red */ 
#define BOLDGREEN "\033[1m\033[32m" /* Bold Green */ #define BOLDYELLOW "\033[1m\033[33m" /* Bold Yellow */ 
#define BOLDBLUE "\033[1m\033[34m" /* Bold Blue */ 
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */ 
#define BOLDCYAN "\033[1m\033[36m" /* Bold Cyan */ 
#define BOLDWHITE "\033[1m\033[37m" /* Bold White */


typedef struct {
	int x;
	int y;
} position_struct;

typedef struct {
	int field[8][8];
	position_struct hand;
} board_struct;

void signal_ctrl_c(int signum) {
	printf("TERMINATED\n");
	//setBufferedInput(true);
	//printf("\033[?25h\033[0m");
	exit(signum);
}

void drawBoard ( board_struct *board) {


}


int main (int argc, char *argv[]) {

	// register signal handler for when ctrl-c is pressed
	signal(SIGINT, signal_ctrl_c);
	printf( GREEN "Here is some text\n" RESET );

	
}






















