#include <ncurses.h>

using namespace std;


int main(){    
    clear();
    initscr();

    int yMax,xMax;

	getmaxyx(stdscr,yMax,xMax);

	start_color();

    init_pair(1,COLOR_WHITE,COLOR_WHITE);
    init_pair(2,COLOR_GREEN,COLOR_GREEN);
    init_pair(3,COLOR_BLUE,COLOR_GREEN);

    
    //printw(" ");
    attrset(COLOR_PAIR(1));
    int espacios = 3;
    int cuadritos = 1;
    int contador = 0;
    for (size_t i = 0; i < 7; i++)
    {
        contador=0;
        for (size_t j = 0; j < 7; j++)
        {   
            move(i,j);         
            if(espacios <= j && contador < cuadritos){
                printw(" ");
                contador++;
            }
        }
        espacios--;
        cuadritos+=2;        
    }
    
    //move(1,1);
    getch();
    endwin();
}