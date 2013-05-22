//
//  getch.c
//  getch
//
//  I have no idea who created this snippet of code, I had it laying around somewhere.
//  If you created it, or know who did, please send a pull request with the appropriate copyright information.
//

#include <stdio.h>

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

int getch() {
    struct termios oldt,
    newt;
    int            ch;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    return ch;
}