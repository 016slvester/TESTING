#include <iostream>
#include <cstdlib>
#include <array>
#include <string>

using namespace std ;

class guss_num {
    int input ;
    int given ;
    int num_of_player;
    string player[5]= {"player_1" ,"player_2","player_3","player_4","player_5"} ;
    int ep_num[20] ;
public:
    guss_num(int x , int g ,int p ){
        input = x ;
        given = g ;
        num_of_player = p ;
        set_up_ep();

    }
    guss_num (int x ,int g){
        input = x ;
        given = g ;
        set_up_ep();
    }

    void set_up_ep() {
        for (int i ; i < 20 ; i++) {
            ep_num[i]= 1 + rand() % 99 ;
        }
    }

    int get_given() {
        int index = 0 + rand() % 19 ;
        given = num_of_player ;
        return given ;
    }

    bool test () {
        bool win_nor_loos ;
        if (input == given ){
            win_nor_loos = true ;
        }
        else{
            win_nor_loos =false ;
        }
        return  win_nor_loos;
    }
};
int main()
{

}
