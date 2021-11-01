#include <iostream>
#include <string>
#include <ncurses.h>
/*void desc() {

}

void getAction() {
    void loadActions(){
        printsActions();
    }
    void playerAction(){
        allows player to choose an action in the action pool;
        Then executes that action;
    }
    
    //Is the action pool
    std::vector<Action*> actions_;
}

class UserInput {
    implentation to take the correct user input and then return it to the asking function, used to check if correct user input was inputted
}
*/

class Action {
public:
    virtual void doAction() = 0;
    virtual void actionDesc() = 0;
};

class Input {
public:
    template<typename T>
    T getLetters() {
        T input;
        getline(std::cin, input);
        return input;
    }

    template <typename T>
    T getNum() {
        T input;
        while(1) {
            if(std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << "You have entered wrong input" << std::endl;
                std::cin >> input;
            }
            if(!std::cin.fail())
            break;
        }
        
        return input;
        
    }
};

int main () {

    initscr();                 /* Start curses mode     */
    printw("Hello World !!!"); /* Print Hello World    */
    refresh();                 /* Print it on to the real screen */
    getch();                   /* Wait for user input */
    endwin();                  /* End curses mode    */

    return 0;
}
