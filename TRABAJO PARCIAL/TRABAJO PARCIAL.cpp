#include "pch.h"
#include <iostream>
#include <conio.h>
#include <time.h>

#define WIDTH Console::WindowWidth
#define HEIGHT Console::WindowHeight

using namespace System;
using namespace std;

void gotoXY(int x, int y) {
    Console::SetCursorPosition(x, y);
}

void DibujarLinea(int x, int y, int tam) {
    for (int i = 1; i <= tam * 2; i += 2) {
        gotoXY(x + i, y);
        cout << "* ";
    }
}

void DibujarLineaIncompleta(int x, int y, int tam) {
    for (int i = 1; i <= tam * 2; i += 2) {
        gotoXY(x + i, y);
        if (i == 1 || i == ((tam * 2) - 1)) {
            cout << "*";
        }
        else {
            cout << " ";
        }
    }
}

void DibujarLineaV(int x, int y, int tam) {
    for (int i = 1; i <= tam * 2; i += 2) {
        gotoXY(x, y + i);
        cout << "* ";
    }
}

void DibujarRectanguloHueco(int x, int y, int largo, int ancho) {
    for (int i = 1; i < ancho; i++) {
        if (i == 1) {
            DibujarLinea(x, y + i, largo);
        }
        else {
            DibujarLineaIncompleta(x, y + i, largo);
        }
    }
    DibujarLinea(x, y + ancho, largo);
}

void window_size() {
    Console::SetWindowSize(WIDTH, HEIGHT);
    Console::Clear();
    Console::CursorVisible = false;
}

void setColor(int numero) {
    switch (numero) {
    case 0: system("color 00"); break;
    case 1: system("color 01"); break;
    case 2: system("color 02"); break;
    case 3: system("color 03"); break;
    case 4: system("color 04"); break;
    case 5: system("color 05"); break;
    case 6: system("color 06"); break;
    case 7: system("color 07"); break;
    case 8: system("color 08"); break;
    case 9: system("color 09"); break;
    case 10: system("color 0A"); break;
    case 11: system("color 0B"); break;
    case 12: system("color 0C"); break;
    case 13: system("color 0D"); break;
    case 14: system("color 0E"); break;
    case 15: system("color 0F"); break;
    }

}

//Dibujar Simbolo
void dibujarDiamante(int x, int y) {
    // Diamante tiene de ancho: 18
    gotoXY(x, y + 1);  cout << "             ##             ";
    gotoXY(x, y + 2);  cout << "            ####            ";
    gotoXY(x, y + 3);  cout << "          ########          ";
    gotoXY(x, y + 4);  cout << "         ##########         ";
    gotoXY(x, y + 5);  cout << "        ############        ";
    gotoXY(x, y + 6);  cout << "       ##############       ";
    gotoXY(x, y + 7);  cout << "      ################      ";
    gotoXY(x, y + 8);  cout << "       ##############       ";
    gotoXY(x, y + 9);  cout << "        ############        ";
    gotoXY(x, y + 10); cout << "         ##########         ";
    gotoXY(x, y + 11); cout << "          ########          ";
    gotoXY(x, y + 12); cout << "            ####            ";
    gotoXY(x, y + 13); cout << "             ##             ";
}

void dibujarCorazon(int x, int y) {
    // Corazon tiene de ancho: 20
    gotoXY(x, y + 1);  cout << "       .++.      .++.       ";
    gotoXY(x, y + 2);  cout << "      ######    ######      ";
    gotoXY(x, y + 3);  cout << "     ##################     ";
    gotoXY(x, y + 4);  cout << "     ##################     ";
    gotoXY(x, y + 5);  cout << "     ##################     ";
    gotoXY(x, y + 6);  cout << "      ################      ";
    gotoXY(x, y + 7);  cout << "       ##############       ";
    gotoXY(x, y + 8);  cout << "        ############        ";
    gotoXY(x, y + 9);  cout << "         ##########         ";
    gotoXY(x, y + 10); cout << "          ########          ";
    gotoXY(x, y + 11); cout << "           ######           ";
    gotoXY(x, y + 12); cout << "            ####            ";
    gotoXY(x, y + 13); cout << "             ##             ";
}

void dibujarEspada(int x, int y) {

    // Espada tiene un ancho de 22
    gotoXY(x, y + 1);  cout << "              @             ";
    gotoXY(x, y + 2);  cout << "            @@@@@           ";
    gotoXY(x, y + 3);  cout << "          @@@@@@@@          ";
    gotoXY(x, y + 4);  cout << "       @@@@@@@@@@@@@@       ";
    gotoXY(x, y + 5);  cout << "      @@@@@@@@@@@@@@@@      ";
    gotoXY(x, y + 6);  cout << "    @@@@@@@@@@@@@@@@@@@@    ";
    gotoXY(x, y + 7);  cout << "    @@@@@@@@@@@@@@@@@@@@    ";
    gotoXY(x, y + 8);  cout << "    @@@@@@@@@@@@@@@@@@@@    ";
    gotoXY(x, y + 9);  cout << "    @@@@@@@@@@@@@@@@@@@@    ";
    gotoXY(x, y + 10); cout << "     @@@@@@@@@@@@@@@@@@     ";
    gotoXY(x, y + 11); cout << "            @@@@            ";
    gotoXY(x, y + 12); cout << "            @@@@            ";
    gotoXY(x, y + 13); cout << "         @@@@@@@@@@         ";
}

void dibujarTrebol(int x, int y) {
    // Trebol tiene un acho de 29
    gotoXY(x, y + 1);  cout << "         %%%%%%%            ";
    gotoXY(x, y + 2);  cout << "        %%%%%%%%%%          ";
    gotoXY(x, y + 3);  cout << "       %%%%%%%%%%%          ";
    gotoXY(x, y + 4);  cout << "       %%%%%%%%%%%          ";
    gotoXY(x, y + 5);  cout << "        %%%%%%%%%           ";
    gotoXY(x, y + 6);  cout << "  %%%%%%%%%%%%%%%%%%%%%%    ";
    gotoXY(x, y + 7);  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%  ";
    gotoXY(x, y + 8);  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%  ";
    gotoXY(x, y + 9);  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%  ";
    gotoXY(x, y + 10); cout << " %%%%%%%%%  %%  %%%%%%%%%   ";
    gotoXY(x, y + 11); cout << "  %%%%%     %%     %%%%     ";
    gotoXY(x, y + 12); cout << "           %%%%             ";
    gotoXY(x, y + 13); cout << "          %%%%%%            ";
}

//Dibujo De La Carta
void dibujarletraA(int x, int y) {
    // A tiene un ancho de 29
    gotoXY(x, y + 1);  cout << "               @@             ";
    gotoXY(x, y + 2);  cout << "              @@@@            ";
    gotoXY(x, y + 3);  cout << "             @@  @@           ";
    gotoXY(x, y + 4);  cout << "            @@    @@          ";
    gotoXY(x, y + 5);  cout << "           @@      @@         ";
    gotoXY(x, y + 6);  cout << "          @@        @@        ";
    gotoXY(x, y + 7);  cout << "         @@          @@       ";
    gotoXY(x, y + 8);  cout << "        @@            @@      ";
    gotoXY(x, y + 9);  cout << "       @@@@@@@@@@@@@@@@@@     ";
    gotoXY(x, y + 10); cout << "      @@                @@    ";
    gotoXY(x, y + 11); cout << "     @@                  @@   ";
    gotoXY(x, y + 12); cout << "    @@@                  @@@  ";
    gotoXY(x, y + 13); cout << "   @@@@@                @@@@@ ";
}

void dibujarnumero1(int x, int y) {
    gotoXY(x, y + 1);  cout << "                ###           ";
    gotoXY(x, y + 2);  cout << "               ####           ";
    gotoXY(x, y + 3);  cout << "              ## ##           ";
    gotoXY(x, y + 4);  cout << "             ##  ##           ";
    gotoXY(x, y + 5);  cout << "            ##   ##           ";
    gotoXY(x, y + 6);  cout << "                 ##           ";
    gotoXY(x, y + 7);  cout << "                 ##           ";
    gotoXY(x, y + 8);  cout << "                 ##           ";
    gotoXY(x, y + 9);  cout << "                 ##           ";
    gotoXY(x, y + 10); cout << "                 ##           ";
    gotoXY(x, y + 11); cout << "                 ##           ";
    gotoXY(x, y + 12); cout << "                 ##           ";
    gotoXY(x, y + 13); cout << "              ########        ";
}

void dibujarnumero2(int x, int y) {
    // El 2 tiene ancho de 19
    gotoXY(x, y + 1);  cout << "           @@@@@@@@@@         ";
    gotoXY(x, y + 2);  cout << "         @@@       @@@@       ";
    gotoXY(x, y + 3);  cout << "        @@@         @@@@      ";
    gotoXY(x, y + 4);  cout << "         @@@         @@@      ";
    gotoXY(x, y + 5);  cout << "                    @@@       ";
    gotoXY(x, y + 6);  cout << "                   @@@        ";
    gotoXY(x, y + 7);  cout << "                 @@@          ";
    gotoXY(x, y + 8);  cout << "               @@@@           ";
    gotoXY(x, y + 9);  cout << "             @@@@             ";
    gotoXY(x, y + 10); cout << "            @@@@              ";
    gotoXY(x, y + 11); cout << "          @@@@                ";
    gotoXY(x, y + 12); cout << "         @@@@@@@@@@@@@@       ";
    gotoXY(x, y + 13); cout << "         @@@@@@@@@@@@@@       ";
}

void dibujarnumero3(int x, int y) {
    // El 3 tiene 17
    gotoXY(x, y + 1);  cout << "         @@@@@@@@@            ";
    gotoXY(x, y + 2);  cout << "        @@@@@@@@@@@           ";
    gotoXY(x, y + 3);  cout << "       @@@@@@@@@@@@@          ";
    gotoXY(x, y + 4);  cout << "         @@@   @@@@@@         ";
    gotoXY(x, y + 5);  cout << "              @@@@@@          ";
    gotoXY(x, y + 6);  cout << "            @@@@@@@           ";
    gotoXY(x, y + 7);  cout << "            @@@@@@@           ";
    gotoXY(x, y + 8);  cout << "            @@@@@@@           ";
    gotoXY(x, y + 9);  cout << "               @@@@@@         ";
    gotoXY(x, y + 10); cout << "         @@@   @@@@@@         ";
    gotoXY(x, y + 11); cout << "       @@@@@@@@@@@@@          ";
    gotoXY(x, y + 12); cout << "        @@@@@@@@@@@           ";
    gotoXY(x, y + 13); cout << "         @@@@@@@@@            ";
}

void dibujarnumero4(int x, int y) {
    // El 4 tiene 18
    gotoXY(x, y + 1);  cout << "                @@@@          ";
    gotoXY(x, y + 2);  cout << "               @@ @@	        ";
    gotoXY(x, y + 3);  cout << "              @@  @@          ";
    gotoXY(x, y + 4);  cout << "             @@   @@          ";
    gotoXY(x, y + 5);  cout << "            @@    @@          ";
    gotoXY(x, y + 6);  cout << "           @@     @@          ";
    gotoXY(x, y + 7);  cout << "          @@      @@          ";
    gotoXY(x, y + 8);  cout << "         @@       @@          ";
    gotoXY(x, y + 9);  cout << "        @@@@@@@@@@@@@@@       ";
    gotoXY(x, y + 10); cout << "                  @@          ";
    gotoXY(x, y + 11); cout << "                  @@          ";
    gotoXY(x, y + 12); cout << "                  @@          ";
    gotoXY(x, y + 13); cout << "                  @@          ";
}

void dibujarnumero5(int x, int y) {
    // El 5 tiene 19 de ancho
    gotoXY(x, y + 1);  cout << "        @@@@@@@@@@@@@@@       ";
    gotoXY(x, y + 2);  cout << "        @@@                   ";
    gotoXY(x, y + 3);  cout << "        @@@                   ";
    gotoXY(x, y + 4);  cout << "         @@@@@@@@@@           ";
    gotoXY(x, y + 5);  cout << "           @@@@@@@@@@         ";
    gotoXY(x, y + 6);  cout << "                   @@@        ";
    gotoXY(x, y + 7);  cout << "                    @@@       ";
    gotoXY(x, y + 8);  cout << "                     @@@      ";
    gotoXY(x, y + 9);  cout << "                     @@@      ";
    gotoXY(x, y + 10); cout << "                    @@@       ";
    gotoXY(x, y + 11); cout << "        @@         @@@        ";
    gotoXY(x, y + 12); cout << "        @@@@@@@@@@@@          ";
    gotoXY(x, y + 13); cout << "           @@@@@@@            ";
}

void dibujarnumero6(int x, int y) {
    // El 6 tiene 18 de ancho
    gotoXY(x, y + 1);  cout << "                @@@           ";
    gotoXY(x, y + 2);  cout << "               @@@   	      ";
    gotoXY(x, y + 3);  cout << "              @@@             ";
    gotoXY(x, y + 4);  cout << "             @@@              ";
    gotoXY(x, y + 5);  cout << "            @@@               ";
    gotoXY(x, y + 6);  cout << "           @@@                ";
    gotoXY(x, y + 7);  cout << "          @@@@@@@@@@          ";
    gotoXY(x, y + 8);  cout << "         @@@      @@@         ";
    gotoXY(x, y + 9);  cout << "        @@@        @@@        ";
    gotoXY(x, y + 10); cout << "         @@@        @@@       ";
    gotoXY(x, y + 11); cout << "          @@@      @@@        ";
    gotoXY(x, y + 12); cout << "           @@@    @@@	      ";
    gotoXY(x, y + 13); cout << "            @@@@@@@@          ";
}

void dibujarnumero7(int x, int y) {
    // El 7 tiene un ancho 18
    gotoXY(x, y + 1);  cout << "       @@@@@@@@@@@@@@@        ";
    gotoXY(x, y + 2);  cout << "        @@@@@@@@@@@@@         ";
    gotoXY(x, y + 3);  cout << "                  @@@         ";
    gotoXY(x, y + 4);  cout << "                  @@@         ";
    gotoXY(x, y + 5);  cout << "                  @@@         ";
    gotoXY(x, y + 6);  cout << "        @@@@@@@@@@@@@@        ";
    gotoXY(x, y + 7);  cout << "             @@@@@@@@         ";
    gotoXY(x, y + 8);  cout << "                  @@@         ";
    gotoXY(x, y + 9);  cout << "                  @@@         ";
    gotoXY(x, y + 10); cout << "                  @@@         ";
    gotoXY(x, y + 11); cout << "                  @@@         ";
    gotoXY(x, y + 12); cout << "                  @@@         ";
    gotoXY(x, y + 13); cout << "                  @@@         ";
}

void dibujarnumero8(int x, int y) {
    // El 8 tiene un ancho 18
    gotoXY(x, y + 1);  cout << "           @@@@@@@@@          ";
    gotoXY(x, y + 2);  cout << "          @@@@    @@@         ";
    gotoXY(x, y + 3);  cout << "         @@@      @@@        ";
    gotoXY(x, y + 4);  cout << "        @@@        @@@        ";
    gotoXY(x, y + 5);  cout << "        @@@        @@@        ";
    gotoXY(x, y + 6);  cout << "         @@@      @@@         ";
    gotoXY(x, y + 7);  cout << "          @@@@@@@@@@@         ";
    gotoXY(x, y + 8);  cout << "         @@@      @@@         ";
    gotoXY(x, y + 9);  cout << "        @@@        @@@        ";
    gotoXY(x, y + 10); cout << "        @@@        @@@        ";
    gotoXY(x, y + 11); cout << "         @@@      @@@         ";
    gotoXY(x, y + 12); cout << "          @@@    @@@	        ";
    gotoXY(x, y + 13); cout << "           @@@@@@@@           ";
}

void dibujarnumero9(int x, int y) {
    // El 9 tiene un ancho de 18
    gotoXY(x, y + 1);  cout << "          @@@@@@@@            ";
    gotoXY(x, y + 2);  cout << "         @@@    @@@           ";
    gotoXY(x, y + 3);  cout << "        @@@      @@@          ";
    gotoXY(x, y + 4);  cout << "       @@@        @@@         ";
    gotoXY(x, y + 5);  cout << "       @@@        @@@         ";
    gotoXY(x, y + 6);  cout << "        @@@      @@@          ";
    gotoXY(x, y + 7);  cout << "         @@@@@@@@@@@          ";
    gotoXY(x, y + 8);  cout << "               @@@            ";
    gotoXY(x, y + 9);  cout << "              @@@             ";
    gotoXY(x, y + 10); cout << "             @@@              ";
    gotoXY(x, y + 11); cout << "            @@@               ";
    gotoXY(x, y + 12); cout << "           @@@                ";
    gotoXY(x, y + 13); cout << "          @@@                 ";
}

void dibujarnumero10(int x, int y) {
    // El 10 tiene un ancho de 31
    gotoXY(x, y + 1);  cout << "      @@@         @@@@@@@     ";
    gotoXY(x, y + 2);  cout << "     @@@@@      @@@@   @@@@   ";
    gotoXY(x, y + 3);  cout << "    @@@ @@@    @@@@     @@@@  ";
    gotoXY(x, y + 4);  cout << "   @@@  @@@   @@@@       @@@@ ";
    gotoXY(x, y + 5);  cout << "        @@@   @@@@       @@@@ ";
    gotoXY(x, y + 6);  cout << "        @@@   @@@@       @@@@ ";
    gotoXY(x, y + 7);  cout << "        @@@   @@@@       @@@@ ";
    gotoXY(x, y + 8);  cout << "        @@@   @@@@       @@@@ ";
    gotoXY(x, y + 9);  cout << "        @@@   @@@@       @@@@ ";
    gotoXY(x, y + 10); cout << "        @@@   @@@@       @@@@ ";
    gotoXY(x, y + 11); cout << "        @@@    @@@@     @@@@  ";
    gotoXY(x, y + 12); cout << "       @@@@@    @@@@   @@@@   ";
    gotoXY(x, y + 13); cout << "     @@@@@@@@@    @@@@@@@     ";
}

void dibujarletraj(int x, int y) {
    // La J tiene un ancho de 18
    gotoXY(x, y + 1);  cout << "         ##############       ";
    gotoXY(x, y + 2);  cout << "        #############         ";
    gotoXY(x, y + 3);  cout << "                  ###         ";
    gotoXY(x, y + 4);  cout << "                  ###         ";
    gotoXY(x, y + 5);  cout << "                  ###         ";
    gotoXY(x, y + 6);  cout << "                  ###         ";
    gotoXY(x, y + 7);  cout << "                  ###         ";
    gotoXY(x, y + 8);  cout << "                  ###         ";
    gotoXY(x, y + 9);  cout << "                  ###         ";
    gotoXY(x, y + 10); cout << "         ##       ###         ";
    gotoXY(x, y + 11); cout << "          ##    ####          ";
    gotoXY(x, y + 12); cout << "          ########            ";
    gotoXY(x, y + 13); cout << "           #####              ";
}

void dibujarletraq(int x, int y) {
    // La letra q tiene un ancho de 15
    gotoXY(x, y + 1);  cout << "             #####            ";
    gotoXY(x, y + 2);  cout << "          ##     ###          ";
    gotoXY(x, y + 4);  cout << "         ##       ##          ";
    gotoXY(x, y + 3);  cout << "         ##       ##          ";
    gotoXY(x, y + 5);  cout << "         ##       ##          ";
    gotoXY(x, y + 6);  cout << "         ##       ##          ";
    gotoXY(x, y + 7);  cout << "         ##       ##          ";
    gotoXY(x, y + 8);  cout << "         ##       ##          ";
    gotoXY(x, y + 9);  cout << "         ##       ##          ";
    gotoXY(x, y + 10); cout << "         ##   ##  ##          ";
    gotoXY(x, y + 11); cout << "         ##    ## #           ";
    gotoXY(x, y + 12); cout << "          ##    ###           ";
    gotoXY(x, y + 13); cout << "           ######  ##         ";
}

void dibujarletrak(int x, int y) {
    // Esta letra K tiene un ancho de 14
    gotoXY(x, y + 1);  cout << "          ##      ##          ";
    gotoXY(x, y + 2);  cout << "          ##     ##           ";
    gotoXY(x, y + 3);  cout << "          ##    ##            ";
    gotoXY(x, y + 4);  cout << "          ##   ##             ";
    gotoXY(x, y + 5);  cout << "          ##  ##              ";
    gotoXY(x, y + 6);  cout << "          ## ##               ";
    gotoXY(x, y + 7);  cout << "          #####               ";
    gotoXY(x, y + 8);  cout << "          ##  ###             ";
    gotoXY(x, y + 9);  cout << "          ##    ##            ";
    gotoXY(x, y + 10); cout << "          ##     ##           ";
    gotoXY(x, y + 11); cout << "          ##      ##          ";
    gotoXY(x, y + 12); cout << "          ##       ##         ";
    gotoXY(x, y + 13); cout << "          ##       ##         ";
}

//Dibujar Cero
void dibujarnumero0(int x, int y) {
    gotoXY(x, y + 1);  cout << "            @@@@@@@           ";
    gotoXY(x, y + 2);  cout << "          @@@@   @@@@         ";
    gotoXY(x, y + 3);  cout << "         @@@@     @@@@        ";
    gotoXY(x, y + 4);  cout << "        @@@@       @@@@       ";
    gotoXY(x, y + 5);  cout << "        @@@@       @@@@       ";
    gotoXY(x, y + 6);  cout << "        @@@@       @@@@       ";
    gotoXY(x, y + 7);  cout << "        @@@@       @@@@       ";
    gotoXY(x, y + 8);  cout << "        @@@@       @@@@       ";
    gotoXY(x, y + 9);  cout << "        @@@@       @@@@       ";
    gotoXY(x, y + 10); cout << "        @@@@       @@@@       ";
    gotoXY(x, y + 11); cout << "         @@@@     @@@@        ";
    gotoXY(x, y + 12); cout << "          @@@@   @@@@         ";
    gotoXY(x, y + 13); cout << "            @@@@@@@           ";
}

//Dibujar letras de la palabra GO
void dibujarletrag(int x, int y) {
    gotoXY(x, y + 1);  cout << "                       @                               @             ";
    gotoXY(x, y + 2);  cout << "                       @@               @            @@              ";
    gotoXY(x, y + 3);  cout << "                       @@@@@           @@@          @@               ";
    gotoXY(x, y + 4);  cout << "                       @@@@@@        @@@@@@        @@                ";
    gotoXY(x, y + 5);  cout << "                      @@@@@@@@@     @@@@@@@@@    @@@                 ";
    gotoXY(x, y + 6);  cout << "                      @@@@@@@@@@@@@           @@@@@@                 ";
    gotoXY(x, y + 7);  cout << "          @@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                 ";
    gotoXY(x, y + 8);  cout << "           @@@@      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  ";
    gotoXY(x, y + 9);  cout << "           @@@@@@@  @@@@@@@@@@@@@@@@@@@@@                            ";
    gotoXY(x, y + 10); cout << "           @@@@@  @@@@@@@@@@@@@@@@     @@@@@@@@@@@                   ";
    gotoXY(x, y + 11); cout << "           @@@  @@@@@@@@@@@@   @@@@@@@                               ";
    gotoXY(x, y + 12); cout << "            @@@@@@@@@@@   @@@@@@                                     ";
    gotoXY(x, y + 13); cout << "  @@@@@@@@@@@@@@@@   @@@@       @@@@@@@@@@@                          ";
    gotoXY(x, y + 14); cout << "    @@@@@@@@@@@@  @@@@     @@@@@@@@@@@@@@@@@@@@@@                    ";
    gotoXY(x, y + 15); cout << "       @@@@@@@ @@@@     @@@@@@@@@@@@@@@@@@@@@@@@@@@@                 ";
    gotoXY(x, y + 16); cout << "         @@@ @@@      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@              ";
    gotoXY(x, y + 17); cout << "            @@      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               ";
    gotoXY(x, y + 18); cout << "                   @@@@@@@@@@@@@@@        @@@@@@@@@@                 ";
    gotoXY(x, y + 19); cout << "                  @@@@@@@@@@@@@               @@@@@                  ";
    gotoXY(x, y + 20); cout << "                 @@@@@@@@@@@@                                        ";
    gotoXY(x, y + 21); cout << "                @@@@@@@@@@@                                          ";
    gotoXY(x, y + 22); cout << "               @@@@@@@@@@@                                           ";
    gotoXY(x, y + 23); cout << "               @@@@@@@@@@                                            ";
    gotoXY(x, y + 24); cout << "               @@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@            ";
    gotoXY(x, y + 25); cout << "               @@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@            ";
    gotoXY(x, y + 26); cout << "               @@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@            ";
    gotoXY(x, y + 27); cout << "               @@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@            ";
    gotoXY(x, y + 28); cout << "               @@@@@@@@@@@           @@@@@@@@@@@@@@@@@@@@            ";
    gotoXY(x, y + 29); cout << "               @@@@@@@@@@@@                    @@@@@@@@@@            ";
    gotoXY(x, y + 30); cout << "                @@@@@@@@@@@@                   @@@@@@@@@@            ";
    gotoXY(x, y + 31); cout << "                 @@@@@@@@@@@@                  @@@@@@@@@@            ";
    gotoXY(x, y + 32); cout << "                  @@@@@@@@@@@@@                @@@@@@@@@@            ";
    gotoXY(x, y + 33); cout << "                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@            ";
    gotoXY(x, y + 34); cout << "                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@            ";
    gotoXY(x, y + 35); cout << "                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@               ";
    gotoXY(x, y + 36); cout << "                         @@@@@@@@@@@@@@@@@@@@@@@@@@                  ";
    gotoXY(x, y + 37); cout << "                            @@@@@@@@@@@@@@@@@@@                      ";
}

void dibujarletrao(int x, int y) {
    gotoXY(x, y + 1);  cout << "            @                              @                       ";
    gotoXY(x, y + 2);  cout << "             @@             @             @@                       ";
    gotoXY(x, y + 3);  cout << "              @@           @@@          @@@@                       ";
    gotoXY(x, y + 4);  cout << "               @@        @@@@@@        @@@@@@                      ";
    gotoXY(x, y + 5);  cout << "                @@@    @@@@@@@@@    @@@@@@@@@@                     ";
    gotoXY(x, y + 6);  cout << "                @@@@@@           @@@@@@@@@@@@@                     ";
    gotoXY(x, y + 7);  cout << "                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          @@        ";
    gotoXY(x, y + 8);  cout << "                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      @@@@          ";
    gotoXY(x, y + 9);  cout << "                           @@@@@@@@@@@@@@@@@@@@@  @@@@@@@          ";
    gotoXY(x, y + 10); cout << "                  @@@@@@@@@@@     @@@@@@@@@@@@@@@@  @@@@@          ";
    gotoXY(x, y + 11); cout << "                                    @@@@@@@@  @@@@@@@@@@@          ";
    gotoXY(x, y + 12); cout << "                        @@@@@@@@@@@@      @@@@   @@@@@@@@@@@@@@@@  ";
    gotoXY(x, y + 13); cout << "                @@@@@@@@@@@@@@@@@@@@@@@@@@@@    @@@@ @@@@@@@       ";
    gotoXY(x, y + 14); cout << "              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     @@@ @@@         ";
    gotoXY(x, y + 15); cout << "            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      @@           ";
    gotoXY(x, y + 16); cout << "           @@@@@@@@@@@@@@@        @@@@@@@@@@@@@@@                  ";
    gotoXY(x, y + 17); cout << "          @@@@@@@@@@@@@              @@@@@@@@@@@@@                 ";
    gotoXY(x, y + 18); cout << "         @@@@@@@@@@@@                  @@@@@@@@@@@@                ";
    gotoXY(x, y + 19); cout << "        @@@@@@@@@@@                      @@@@@@@@@@@               ";
    gotoXY(x, y + 20); cout << "       @@@@@@@@@@@                        @@@@@@@@@@@              ";
    gotoXY(x, y + 21); cout << "       @@@@@@@@@@                          @@@@@@@@@@              ";
    gotoXY(x, y + 22); cout << "       @@@@@@@@@@                          @@@@@@@@@@              ";
    gotoXY(x, y + 23); cout << "       @@@@@@@@@@                          @@@@@@@@@@              ";
    gotoXY(x, y + 24); cout << "       @@@@@@@@@@                          @@@@@@@@@@              ";
    gotoXY(x, y + 25); cout << "       @@@@@@@@@@                          @@@@@@@@@@              ";
    gotoXY(x, y + 26); cout << "       @@@@@@@@@@                          @@@@@@@@@@              ";
    gotoXY(x, y + 27); cout << "       @@@@@@@@@@                          @@@@@@@@@@              ";
    gotoXY(x, y + 28); cout << "       @@@@@@@@@@@                        @@@@@@@@@@@              ";
    gotoXY(x, y + 29); cout << "       @@@@@@@@@@@@                      @@@@@@@@@@@@              ";
    gotoXY(x, y + 30); cout << "        @@@@@@@@@@@@                    @@@@@@@@@@@@               ";
    gotoXY(x, y + 31); cout << "         @@@@@@@@@@@@                  @@@@@@@@@@@@                ";
    gotoXY(x, y + 32); cout << "          @@@@@@@@@@@@                @@@@@@@@@@@@                 ";
    gotoXY(x, y + 33); cout << "           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  ";
    gotoXY(x, y + 34); cout << "            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   ";
    gotoXY(x, y + 35); cout << "              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     ";
    gotoXY(x, y + 36); cout << "                 @@@@@@@@@@@@@@@@@@@@@@@@@@                        ";
    gotoXY(x, y + 37); cout << "                    @@@@@@@@@@@@@@@@@@@@                           ";
}

//Dibujar Titulo mBlack & mJack
//Se reutilizo el A de las cartas para el titulo
void dibujarletraAmp(int x, int y) {
    gotoXY(x, y + 1);  cout << "    ####           ";
    gotoXY(x, y + 2);  cout << "   ##   ##         ";
    gotoXY(x, y + 3);  cout << "  ##     ##        ";
    gotoXY(x, y + 4);  cout << "   ##   ##         ";
    gotoXY(x, y + 5);  cout << "     ## ##    ##   ";
    gotoXY(x, y + 6);  cout << "    ####     ##    ";
    gotoXY(x, y + 7);  cout << "  ##   ##   ##     ";
    gotoXY(x, y + 8);  cout << " ##     ## ##      ";
    gotoXY(x, y + 9);  cout << " ##      ##        ";
    gotoXY(x, y + 10); cout << "  ######  ####     ";
}

void dibujarmTitulo(int x, int y) {
    // La letra m tiene un ancho de 21
    gotoXY(x, y + 1); cout << " ################   ";
    gotoXY(x, y + 2); cout << " ###    ##      ### ";
    gotoXY(x, y + 3); cout << " ##      ##      ## ";
    gotoXY(x, y + 4); cout << " ##      ##      ## ";
    gotoXY(x, y + 5); cout << " ##      ##      ## ";
    gotoXY(x, y + 6); cout << " ##      ##      ## ";
    gotoXY(x, y + 7); cout << " ##      ##      ## ";
    gotoXY(x, y + 8); cout << " ##      ##      ## ";
}

void dibujarJTitulo(int x, int y) {
    // La letra J tiene un ancho de 11
    gotoXY(x, y + 1);  cout << "##########";
    gotoXY(x, y + 2);  cout << "    ######";
    gotoXY(x, y + 3);  cout << "        ##";
    gotoXY(x, y + 4);  cout << "        ##";
    gotoXY(x, y + 5);  cout << "        ##";
    gotoXY(x, y + 6);  cout << "        ##";
    gotoXY(x, y + 7);  cout << "        ##";
    gotoXY(x, y + 8);  cout << "        ##";
    gotoXY(x, y + 9);  cout << "        ##";
    gotoXY(x, y + 10); cout << "##      ##";
    gotoXY(x, y + 11); cout << " ##     ##";
    gotoXY(x, y + 12); cout << "  ########";
    gotoXY(x, y + 13); cout << "    ####  ";
}

void dibujarBTitulo(int x, int y) {
    // La letra B tiene un ancho de 16
    gotoXY(x, y + 1);  cout << "##########     ";
    gotoXY(x, y + 2);  cout << "##      ###  ";
    gotoXY(x, y + 3);  cout << "##       ### ";
    gotoXY(x, y + 4);  cout << "##        ###";
    gotoXY(x, y + 5);  cout << "##        ## ";
    gotoXY(x, y + 6);  cout << "##        #  ";
    gotoXY(x, y + 7);  cout << "##########   ";
    gotoXY(x, y + 8);  cout << "##        #  ";
    gotoXY(x, y + 9);  cout << "##        ## ";
    gotoXY(x, y + 10); cout << "##        ###";
    gotoXY(x, y + 11); cout << "##       ### ";
    gotoXY(x, y + 12); cout << "##      ###  ";
    gotoXY(x, y + 13); cout << "##########   ";
}

void dibujarKTitulo(int x, int y) {
    // La letra K tiene un ancho de 13
    gotoXY(x, y + 1);  cout << "##       ## ";
    gotoXY(x, y + 2);  cout << "##      ##  ";
    gotoXY(x, y + 3);  cout << "##     ##   ";
    gotoXY(x, y + 4);  cout << "##    ##    ";
    gotoXY(x, y + 5);  cout << "##   ##     ";
    gotoXY(x, y + 6);  cout << "######      ";
    gotoXY(x, y + 7);  cout << "##  ##      ";
    gotoXY(x, y + 8); cout << "##   ##     ";
    gotoXY(x, y + 9); cout << "##    ##    ";
    gotoXY(x, y + 10); cout << "##     ##   ";
    gotoXY(x, y + 11); cout << "##      ##  ";
    gotoXY(x, y + 12); cout << "##       ## ";
    gotoXY(x, y + 13); cout << "##        ## ";
}

void dibujarLTitulo(int x, int y) {
    // La letra L tiene un ancho de 15
    gotoXY(x, y + 1);  cout << "##            ";
    gotoXY(x, y + 2);  cout << "##            ";
    gotoXY(x, y + 3);  cout << "##            ";
    gotoXY(x, y + 4);  cout << "##            ";
    gotoXY(x, y + 5);  cout << "##            ";
    gotoXY(x, y + 6);  cout << "##            ";
    gotoXY(x, y + 7);  cout << "##            ";
    gotoXY(x, y + 8);  cout << "##            ";
    gotoXY(x, y + 9); cout << "##            ";
    gotoXY(x, y + 10); cout << "##            ";
    gotoXY(x, y + 11); cout << "##            ";
    gotoXY(x, y + 12); cout << "##########    ";
    gotoXY(x, y + 13); cout << "##############";
}

void dibujarCTitulo(int x, int y) {
    // La letra C tiene un ancho 17
    gotoXY(x, y + 1);  cout << "   ##########   ";
    gotoXY(x, y + 2);  cout << "  ##        ##  ";
    gotoXY(x, y + 3);  cout << " ##          ## ";
    gotoXY(x, y + 4);  cout << "##            ##";
    gotoXY(x, y + 5);  cout << "##           ## ";
    gotoXY(x, y + 6);  cout << "##              ";
    gotoXY(x, y + 7);  cout << "##              ";
    gotoXY(x, y + 8); cout << "##              ";
    gotoXY(x, y + 9); cout << "##           ## ";
    gotoXY(x, y + 10); cout << "##            ##";
    gotoXY(x, y + 11); cout << " ##          ## ";
    gotoXY(x, y + 12); cout << "  ##        ##  ";
    gotoXY(x, y + 13); cout << "   ##########   ";
}

//Dibujar el titulo mBlack & mJack
void dibujarTituloParte1(int xCuadrado, int yCuadrado) {
    dibujarmTitulo(xCuadrado + 2, yCuadrado + 7);
    dibujarBTitulo(xCuadrado + 23, yCuadrado + 2);
    dibujarLTitulo(xCuadrado + 40, yCuadrado + 2);
    dibujarletraA(xCuadrado + 56, yCuadrado + 2);
    dibujarCTitulo(xCuadrado + 86, yCuadrado + 2);
    dibujarKTitulo(xCuadrado + 104, yCuadrado + 2);

}

void dibujarTituloParte2(int xCuadrado, int yCuadrado) {
    dibujarletraAmp(xCuadrado + 5, yCuadrado + 19);
    dibujarmTitulo(xCuadrado + 23, yCuadrado + 21);
    dibujarJTitulo(xCuadrado + 43, yCuadrado + 16);
    dibujarletraA(xCuadrado + 56, yCuadrado + 16);
    dibujarCTitulo(xCuadrado + 86, yCuadrado + 16);
    dibujarKTitulo(xCuadrado + 104, yCuadrado + 16);
}

void dibujarTituloEntero(int x, int y, int ancho, int alto) {
    DibujarRectanguloHueco(x, y, ancho, alto);
    dibujarTituloParte1(x, y);
    dibujarTituloParte2(x, y);
    gotoXY(0, 35);
    cout << "\nBienvenido a mBlack & mJack!!!";
    cout << "\nPresiona cualquier tecla para continuar...." << endl;
    _getch();
    Console::Clear();
}

// Dibujar letras de la palabra VICTORIA MAGISTRAL
void dibujarVVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "  ####    ####  ";
    gotoXY(x, y + 2);  cout << "   ###    ###   ";
    gotoXY(x, y + 3);  cout << "   ###    ###   ";
    gotoXY(x, y + 4);  cout << "    ##    ##    ";
    gotoXY(x, y + 5);  cout << "    ##    ##    ";
    gotoXY(x, y + 6);  cout << "     ##  ##     ";
    gotoXY(x, y + 7);  cout << "     ##  ##     ";
    gotoXY(x, y + 8);  cout << "      ####      ";
    gotoXY(x, y + 9);  cout << "      ####      ";
}

void dibujarIVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "################";
    gotoXY(x, y + 2);  cout << "################";
    gotoXY(x, y + 3);  cout << "       ##       ";
    gotoXY(x, y + 4);  cout << "       ##       ";
    gotoXY(x, y + 5);  cout << "       ##       ";
    gotoXY(x, y + 6);  cout << "       ##       ";
    gotoXY(x, y + 7);  cout << "       ##       ";
    gotoXY(x, y + 8);  cout << "################";
    gotoXY(x, y + 9);  cout << "################";
}

void dibujarCVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "################";
    gotoXY(x, y + 2);  cout << "################";
    gotoXY(x, y + 3);  cout << "####            ";
    gotoXY(x, y + 4);  cout << "####            ";
    gotoXY(x, y + 5);  cout << "####            ";
    gotoXY(x, y + 6);  cout << "####            ";
    gotoXY(x, y + 7);  cout << "####            ";
    gotoXY(x, y + 8);  cout << "################";
    gotoXY(x, y + 9);  cout << "################";
}

void dibujarTVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "################";
    gotoXY(x, y + 2);  cout << "################";
    gotoXY(x, y + 3);  cout << "      ####      ";
    gotoXY(x, y + 4);  cout << "      ####      ";
    gotoXY(x, y + 5);  cout << "      ####      ";
    gotoXY(x, y + 6);  cout << "      ####      ";
    gotoXY(x, y + 7);  cout << "      ####      ";
    gotoXY(x, y + 8);  cout << "      ####      ";
    gotoXY(x, y + 9);  cout << "      ####      ";
}

void dibujarOVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "     ######     ";
    gotoXY(x, y + 2);  cout << " ############## ";
    gotoXY(x, y + 3);  cout << "####        ####";
    gotoXY(x, y + 4);  cout << "####        ####";
    gotoXY(x, y + 5);  cout << "####        ####";
    gotoXY(x, y + 6);  cout << "####        ####";
    gotoXY(x, y + 7);  cout << " ############## ";
    gotoXY(x, y + 8);  cout << "   ##########   ";
    gotoXY(x, y + 9);  cout << "     ######     ";
}

void dibujarRVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "############    ";
    gotoXY(x, y + 2);  cout << "#####  ######   ";
    gotoXY(x, y + 3);  cout << "#####  ######   ";
    gotoXY(x, y + 4);  cout << "#####  #####    ";
    gotoXY(x, y + 5);  cout << "###########     ";
    gotoXY(x, y + 6);  cout << "#####  #####    ";
    gotoXY(x, y + 7);  cout << "#####   #####   ";
    gotoXY(x, y + 8);  cout << "#####    #####  ";
    gotoXY(x, y + 9);  cout << "#####     ##### ";
}

void dibujarAVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "     ######     ";
    gotoXY(x, y + 2);  cout << "    ########    ";
    gotoXY(x, y + 3);  cout << "    ###  ###    ";
    gotoXY(x, y + 4);  cout << "   ####  ####   ";
    gotoXY(x, y + 5);  cout << "   ##########   ";
    gotoXY(x, y + 6);  cout << "  ############  ";
    gotoXY(x, y + 7);  cout << "  #####  #####  ";
    gotoXY(x, y + 8);  cout << " #####    ##### ";
    gotoXY(x, y + 9);  cout << "#####      #####";
}

void dibujarMVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "######    ######";
    gotoXY(x, y + 2);  cout << "#######  #######";
    gotoXY(x, y + 3);  cout << "################";
    gotoXY(x, y + 4);  cout << "###  ######  ###";
    gotoXY(x, y + 5);  cout << "###   ####   ###";
    gotoXY(x, y + 6);  cout << "###          ###";
    gotoXY(x, y + 7);  cout << "###          ###";
    gotoXY(x, y + 8);  cout << "###          ###";
    gotoXY(x, y + 9);  cout << "###          ###";
}

void dibujarGVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "   ##########   ";
    gotoXY(x, y + 2);  cout << "  ############  ";
    gotoXY(x, y + 3);  cout << " #####    ##### ";
    gotoXY(x, y + 4);  cout << "#####     ##### ";
    gotoXY(x, y + 5);  cout << "####            ";
    gotoXY(x, y + 6);  cout << "#####   ########";
    gotoXY(x, y + 7);  cout << " #####    ##### ";
    gotoXY(x, y + 8);  cout << "  ############  ";
    gotoXY(x, y + 9);  cout << "   ##########   ";
}

void dibujarSVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "   ############ ";
    gotoXY(x, y + 2);  cout << "  ######## #####";
    gotoXY(x, y + 3);  cout << "########    ####";
    gotoXY(x, y + 4);  cout << "    ######   ## ";
    gotoXY(x, y + 5);  cout << "    #######     ";
    gotoXY(x, y + 6);  cout << "      #######   ";
    gotoXY(x, y + 7);  cout << "#          #### ";
    gotoXY(x, y + 8);  cout << " #       ####   ";
    gotoXY(x, y + 9);  cout << "  ###########   ";
}

void dibujarLVictoria(int x, int y) {
    gotoXY(x, y + 1);  cout << "####            ";
    gotoXY(x, y + 2);  cout << "####            ";
    gotoXY(x, y + 3);  cout << "####            ";
    gotoXY(x, y + 4);  cout << "####            ";
    gotoXY(x, y + 5);  cout << "####            ";
    gotoXY(x, y + 6);  cout << "####            ";
    gotoXY(x, y + 7);  cout << "####            ";
    gotoXY(x, y + 8);  cout << "############    ";
    gotoXY(x, y + 9);  cout << "############    ";
}

//Dibujar J1 y J2
void dibujarJ1(int x, int y) {
    gotoXY(x, y + 1);  cout << "____       ";
    gotoXY(x, y + 2);  cout << "    |   /| ";
    gotoXY(x, y + 3);  cout << "    |    | ";
    gotoXY(x, y + 4);  cout << "    |    | ";
    gotoXY(x, y + 5);  cout << "\\__/    _|_";
}

void dibujarJ2(int x, int y) {
    gotoXY(x, y + 1);  cout << " ____    __   ";
    gotoXY(x, y + 2);  cout << "     |  /  \\ ";
    gotoXY(x, y + 3);  cout << "     |     /  ";
    gotoXY(x, y + 4);  cout << "     |    /   ";
    gotoXY(x, y + 5);  cout << " \\__/    /___";
}

//Juntamos las letras
void dibujarVictoria(int x, int y) {
    dibujarVVictoria(x + 0, y + 3);
    dibujarIVictoria(x + 15, y + 3);
    dibujarCVictoria(x + 32, y + 3);
    dibujarTVictoria(x + 49, y + 3);
    dibujarOVictoria(x + 66, y + 3);
    dibujarRVictoria(x + 83, y + 3);
    dibujarIVictoria(x + 99, y + 3);
    dibujarAVictoria(x + 116, y + 3);
}

void dibujarMagistral(int x, int y) {
    dibujarMVictoria(x + 0, y + 17);
    dibujarAVictoria(x + 17, y + 17);
    dibujarGVictoria(x + 34, y + 17);
    dibujarIVictoria(x + 51, y + 17);
    dibujarSVictoria(x + 69, y + 17);
    dibujarTVictoria(x + 86, y + 17);
    dibujarRVictoria(x + 103, y + 17);
    dibujarAVictoria(x + 119, y + 17);
    dibujarLVictoria(x + 136, y + 17);
}

//Generar num ramdom
int generarRandom() {
    int random = rand() % 13 + 1;
    return random;
}

int generarSimboloRandom() {
    int random = rand() % 4 + 1;
    return random;
}

//Imprimir carta
void mostrarCarta(int numeroRandom) {
    if (numeroRandom == 1) {
        dibujarletraA(120, 3);
    }
    else if (numeroRandom == 2) {
        dibujarnumero2(120, 3);
    }
    else if (numeroRandom == 3) {
        dibujarnumero3(120, 3);
    }
    else if (numeroRandom == 4) {
        dibujarnumero4(120, 3);
    }
    else if (numeroRandom == 5) {
        dibujarnumero5(120, 3);
    }
    else if (numeroRandom == 6) {
        dibujarnumero6(120, 3);
    }
    else if (numeroRandom == 7) {
        dibujarnumero7(120, 3);
    }
    else if (numeroRandom == 8) {
        dibujarnumero8(120, 3);
    }
    else if (numeroRandom == 9) {
        dibujarnumero9(120, 3);
    }
    else if (numeroRandom == 10) {
        dibujarnumero10(120, 3);
    }
    else if (numeroRandom == 11) {
        dibujarletraj(120, 3);
    }
    else if (numeroRandom == 12) {
        dibujarletraq(120, 3);
    }
    else if (numeroRandom == 13) {
        dibujarletrak(120, 3);
    }
}

void mostrarSimbolo(int numeroRandom) {
    if (numeroRandom == 1) {
        dibujarCorazon(93, 3);
    }
    else if (numeroRandom == 2) {
        dibujarDiamante(93, 3);
    }
    else if (numeroRandom == 3) {
        dibujarTrebol(93, 3);
    }
    else if (numeroRandom == 4) {
        dibujarEspada(93, 3);
    }
}

//Partidas ganadas
void mostrarPartidasGanadasJugador1(int contadorDePartidas) {
    if (contadorDePartidas == 0) {
        dibujarnumero0(90, 30);
    }
    else if (contadorDePartidas == 1) {
        dibujarnumero1(90, 30);
    }
    else if (contadorDePartidas == 2) {
        dibujarnumero2(90, 30);
    }
    else if (contadorDePartidas == 3) {
        dibujarnumero3(90, 30);
    }
    else if (contadorDePartidas == 4) {
        dibujarnumero4(90, 30);
    }
    else if (contadorDePartidas == 5) {
        dibujarnumero5(90, 30);
    }
    else if (contadorDePartidas == 6) {
        dibujarnumero6(90, 30);
    }
    else if (contadorDePartidas == 7) {
        dibujarnumero7(90, 30);
    }
    else if (contadorDePartidas == 8) {
        dibujarnumero8(90, 30);
    }
    else if (contadorDePartidas == 9) {
        dibujarnumero9(90, 30);
    }
    else if (contadorDePartidas == 10) {
        dibujarnumero10(90, 30);
    }
}

void mostrarPartidasGanadasJugador2(int contadorDePartidas) {
    if (contadorDePartidas == 0) {
        dibujarnumero0(120, 30);
    }
    else if (contadorDePartidas == 1) {
        dibujarnumero1(120, 30);
    }
    else if (contadorDePartidas == 2) {
        dibujarnumero2(120, 30);
    }
    else if (contadorDePartidas == 3) {
        dibujarnumero3(120, 30);
    }
    else if (contadorDePartidas == 4) {
        dibujarnumero4(120, 30);
    }
    else if (contadorDePartidas == 5) {
        dibujarnumero5(120, 30);
    }
    else if (contadorDePartidas == 6) {
        dibujarnumero6(120, 30);
    }
    else if (contadorDePartidas == 7) {
        dibujarnumero7(120, 30);
    }
    else if (contadorDePartidas == 8) {
        dibujarnumero8(120, 30);
    }
    else if (contadorDePartidas == 9) {
        dibujarnumero9(120, 30);
    }
    else if (contadorDePartidas == 10) {
        dibujarnumero10(120, 30);
    }
}

//animacion de inicio
void mover(int& x, int& y, int& dx, int& dy, int alto, int ancho) {
    if (x <= 0 || x > (WIDTH - ancho - 1)) {
        dx *= -1;
    }
    if (y <= 0 || y > (HEIGHT - alto - 1)) {
        dy *= -1;
    }
    x += dx;
    y += dy;
}

void iniciandoJuego() {
    setColor(rand() % 15 + 1);
    window_size();
    cout << "Iniciando..." << endl;
    cout << "Presiona cualquier tecla para iniciar el juego...." << endl;
    _getch();
    Console::Clear();
}

void mostrarAnimacion() {
    setColor(rand() % 15 + 1);
    bool terminarAnimacion1 = true;
    int xCarta = 1;
    int yCarta = 9;
    int dxCarta = 3;
    int dyCarta = 0;
    int ancho = 20;
    int alto = 25;
    while (terminarAnimacion1) {
        Console::Clear();
        // Mostrar primera carta
        mover(xCarta, yCarta, dxCarta, dyCarta, ancho, alto);
        DibujarRectanguloHueco(xCarta, yCarta, ancho, alto);
        if (xCarta <= 25) {
            dibujarCorazon(xCarta + 6, yCarta + 6);
        }
        else if (xCarta > 25 && xCarta <= 50) {
            dibujarDiamante(xCarta + 6, yCarta + 6);
        }
        else if (xCarta > 50 && xCarta <= 75) {
            dibujarTrebol(xCarta + 8, yCarta + 6);
        }
        else if (xCarta > 75 && xCarta <= 100) {
            dibujarEspada(xCarta + 8, yCarta + 6);
        }
        setColor(rand() % 15 + 1);
        _sleep(10);
        if (xCarta > 100) {
            terminarAnimacion1 = false;
        }
    }
    Console::Clear();
    // Parte Go
    dibujarletrag(18, 3);
    dibujarletrao(73, 3);
    setColor(rand() % 15 + 1);
    _sleep(500);
    Console::Clear();
}

void borrarCarta(int x, int y) {
    gotoXY(x, y + 1);  cout << "                                                   ";
    gotoXY(x, y + 2);  cout << "                                                   ";
    gotoXY(x, y + 3);  cout << "                                                   ";
    gotoXY(x, y + 4);  cout << "                                                   ";
    gotoXY(x, y + 5);  cout << "                                                   ";
    gotoXY(x, y + 6);  cout << "                                                   ";
    gotoXY(x, y + 7);  cout << "                                                   ";
    gotoXY(x, y + 8);  cout << "                                                   ";
    gotoXY(x, y + 9);  cout << "                                                   ";
    gotoXY(x, y + 10); cout << "                                                   ";
    gotoXY(x, y + 11); cout << "                                                   ";
    gotoXY(x, y + 12); cout << "                                                   ";
    gotoXY(x, y + 13); cout << "                                                   ";
    gotoXY(x, y + 14); cout << "                                                   ";
    gotoXY(x, y + 15); cout << "                                                   ";
    gotoXY(x, y + 16); cout << "                                                   ";
    gotoXY(x, y + 17); cout << "                                                   ";
    gotoXY(x, y + 18); cout << "                                                   ";
    gotoXY(x, y + 19); cout << "                                                   ";
    gotoXY(x, y + 20); cout << "                                                   ";
    gotoXY(x, y + 21); cout << "                                                   ";
    gotoXY(x, y + 22); cout << "                                                   ";
    gotoXY(x, y + 23); cout << "                                                   ";
    gotoXY(x, y + 24); cout << "                                                   ";
    gotoXY(x, y + 25); cout << "                                                   ";
}

void borrarTexto(int x, int y) {
    gotoXY(x, y + 1);  cout << "                                                   ";
    gotoXY(x, y + 2);  cout << "                                                   ";
    gotoXY(x, y + 3);  cout << "                                                   ";
    gotoXY(x, y + 4);  cout << "                                                   ";
    gotoXY(x, y + 5);  cout << "                                                   ";
    gotoXY(x, y + 6);  cout << "                                                   ";
    gotoXY(x, y + 7);  cout << "                                                   ";
    gotoXY(x, y + 8);  cout << "                                                   ";
    gotoXY(x, y + 9);  cout << "                                                   ";
    gotoXY(x, y + 10); cout << "                                                   ";
}


//verificador de puntos
int verificarPuntos(int numeroRandom) {
    int puntoActual = numeroRandom;
    if (numeroRandom == 11 || numeroRandom == 12 || numeroRandom == 13) {
        puntoActual = 10;
    }
    return puntoActual;
}

int verificarAS(int valorAS) {
    int puntoActual = valorAS;
    if (valorAS == 11) {
        puntoActual = 11;
    }
    return puntoActual;
}

int pedirCartas() {
    int numeroRandom, numeroSimboloRandom, puntoActual, valorAS;
    DibujarRectanguloHueco(90, 0, 32, 19);
    numeroRandom = generarRandom();
    numeroSimboloRandom = generarSimboloRandom();
    mostrarCarta(numeroRandom);
    mostrarSimbolo(numeroSimboloRandom);
    if (numeroRandom == 1) {
        gotoXY(0, 20);
        cout << "Deseas que valga 1 o 11?: " << endl;
        cin >> valorAS;
        puntoActual = verificarAS(valorAS);

    }
    else {
        puntoActual = verificarPuntos(numeroRandom);
    }
    Console::CursorVisible = true;
    return puntoActual;
}

int main() {
    int acumuladorJugador1 = 0;
    int puntoActualJugador1 = 0;
    int acumuladorJugador2 = 0;
    int puntoActualJugador2 = 0;
    int acumuladorPermanenteJugador1 = 0;
    int acumuladorPermanenteJugador2 = 0;
    int contadorDePartidasGanadasJugador1 = 0;
    int contadorDePartidasGanadasJugador2 = 0;
    char tecla;
    bool turnoJugador1 = true;
    bool turnoJugador2 = false;
    bool seguirPidiendoJugador1 = false;
    bool seguirPidiendoJugador2 = false;
    bool ganasteJugador1 = false;
    bool ganasteJugador2 = false;
    bool repetirRonda = true;
    bool jugador1RondaPerdida = false;
    bool jugador2RondaPerdida = false;
    srand(time(NULL));
    iniciandoJuego();
    dibujarTituloEntero(19, 0, 59, 31);
    // Mostrar Animacion
    mostrarAnimacion();
    // Sacar cartas random
    for (int i = 1; i < 11; i++) {
        repetirRonda = true;
        turnoJugador1 = true;
        ganasteJugador1 = false;
        ganasteJugador2 = false;
        while (repetirRonda == true) {
            if (turnoJugador1 == true) {
                puntoActualJugador1 = pedirCartas();
                acumuladorJugador1 += puntoActualJugador1;
                acumuladorPermanenteJugador1 += puntoActualJugador1;
                seguirPidiendoJugador1 = true;
                while (turnoJugador1 == true && seguirPidiendoJugador1 == true) {
                    setColor(rand() % 15 + 1);
                    mostrarPartidasGanadasJugador1(contadorDePartidasGanadasJugador1);
                    mostrarPartidasGanadasJugador2(contadorDePartidasGanadasJugador2);
                    DibujarRectanguloHueco(90, 21, 32, 24);
                    DibujarLinea(90, 28, 31);
                    DibujarLineaV(121, 21, 12);
                    dibujarJ1(100, 22);
                    dibujarJ2(130, 22);
                    DibujarRectanguloHueco(0, 21, 40, 24);
                    DibujarLinea(0, 28, 39);
                    DibujarLineaV(39, 21, 12);
                    borrarTexto(0, 10);
                    gotoXY(0, 0);
                    cout << "--------------------------- Turno del jugador 1 --------------------------";
                    cout << "\n\n----> Presiona S(SI) para seguir pidiendo cartas";
                    cout << "\n\n----> Presiona N(NO) para pasar al siguiente jugador o saltar turno\n";
                    gotoXY(0, 7);
                    cout << "Acumulador permanente Jugador 1: " << acumuladorPermanenteJugador1 << endl;
                    gotoXY(0, 11);
                    cout << "Acumulador Jugador 1: " << acumuladorJugador1 << endl;
                    gotoXY(0, 15);
                    cout << "Seguir Pidiendo Cartas?: ";
                    cin >> tecla;
                    tecla = toupper(tecla);
                    if (tecla == 'S') {
                        setColor(rand() % 15 + 1);
                        puntoActualJugador1 = pedirCartas();
                        acumuladorJugador1 += puntoActualJugador1;
                        acumuladorPermanenteJugador1 += puntoActualJugador1;
                    }
                    else if (tecla == 'N') {
                        setColor(rand() % 15 + 1);
                        // PasarAlSiguienteJugador
                        turnoJugador1 = false;
                        seguirPidiendoJugador1 = false;
                        cout << "Cambiando al Jugador 2...";
                        _getch();
                        Console::Clear();
                    }
                    else {
                        seguirPidiendoJugador1 = true;
                    }
                    if (acumuladorJugador1 > 21) {
                        acumuladorJugador1 = 0;
                        turnoJugador1 = false;
                        seguirPidiendoJugador1 = false;
                        ganasteJugador1 = false;
                        gotoXY(0, 23);
                        cout << "Perdiste la ronda...";
                        _getch();
                        Console::Clear();
                    }
                }

            }
            if (turnoJugador1 == false) {
                turnoJugador2 = true;
            }
            if (turnoJugador2 == true) {
                puntoActualJugador2 = pedirCartas();
                acumuladorJugador2 += puntoActualJugador2;
                acumuladorPermanenteJugador2 += puntoActualJugador2;
                seguirPidiendoJugador2 = true;
                while (turnoJugador2 == true && seguirPidiendoJugador2 == true) {
                    setColor(rand() % 15 + 1);
                    mostrarPartidasGanadasJugador1(contadorDePartidasGanadasJugador1);
                    mostrarPartidasGanadasJugador2(contadorDePartidasGanadasJugador2);
                    DibujarRectanguloHueco(90, 21, 32, 24);
                    DibujarLinea(90, 28, 31);
                    DibujarLineaV(121, 21, 12);
                    dibujarJ1(100, 22);
                    dibujarJ2(130, 22);
                    DibujarRectanguloHueco(0, 21, 40, 24);
                    DibujarLinea(0, 28, 39);
                    DibujarLineaV(39, 21, 12);
                    borrarTexto(0, 10);
                    gotoXY(0, 0);
                    cout << "------------------------- Turno del jugador 2 -------------------------";
                    cout << "\n\n----> Presiona S(SI) para seguir pidiendo cartas";
                    cout << "\n\n----> Presiona N(NO) para pasar al siguiente jugador o saltar turno\n";
                    gotoXY(0, 7);
                    cout << "Acumulador permanente Jugador 2: " << acumuladorPermanenteJugador2 << endl;
                    gotoXY(0, 11);
                    cout << "Acumulador Jugador 2: " << acumuladorJugador2 << endl;
                    gotoXY(0, 15);
                    cout << "Seguir Pidiendo Cartas?: ";
                    cin >> tecla;
                    tecla = toupper(tecla);
                    if (tecla == 'S') {
                        setColor(rand() % 15 + 1);
                        puntoActualJugador2 = pedirCartas();
                        acumuladorJugador2 += puntoActualJugador2;
                        acumuladorPermanenteJugador2 += puntoActualJugador2;
                    }
                    else if (tecla == 'N') {
                        setColor(rand() % 15 + 1);
                        // PasarAlSiguienteJugador
                        if (acumuladorJugador2 < acumuladorJugador1) {
                            turnoJugador2 = false;
                            seguirPidiendoJugador2 = false;
                            cout << "Cambiando al Jugador 1...";
                            _getch();
                        }
                        else {
                            ganasteJugador2 = true;
                            seguirPidiendoJugador2 = false;
                        }
                        Console::Clear();
                    }
                    else {
                        seguirPidiendoJugador2 = true;
                    }
                    if (acumuladorJugador2 > 21) {
                        acumuladorJugador2 = 0;
                        turnoJugador2 = false;
                        seguirPidiendoJugador2 = false;
                        ganasteJugador2 = false;
                        gotoXY(0, 23);
                        cout << "Perdiste la ronda...";
                        _getch();
                        Console::Clear();
                    }
                }
            }
            if (turnoJugador2 == false) {
                turnoJugador1 = true;
            }
            if (turnoJugador1 == true || turnoJugador2 == true) {
                repetirRonda = true;
            }
            if (acumuladorJugador2 > acumuladorJugador1) {
                ganasteJugador2 = true;
            }
            if (acumuladorJugador1 > acumuladorJugador2) {
                ganasteJugador1 = true;
            }
            if (ganasteJugador2 == true) {
                setColor(rand() % 15 + 1);
                acumuladorJugador1 = 0;
                acumuladorJugador2 = 0;
                /*dibujarVictoria(6, 2);
                dibujarMagistral(6, 2);
                dibujarJ2(70, 30);*/
                cout << "GANASTE ESTA RONDA JUGADOR 2!!" << endl;
                repetirRonda = false;
                contadorDePartidasGanadasJugador2++;
                _getch();
                Console::Clear();
            }
            if (ganasteJugador1 == true) {
                setColor(rand() % 15 + 1);
                acumuladorJugador1 = 0;
                acumuladorJugador2 = 0;
                /*dibujarVictoria(6, 2);
                dibujarMagistral(6, 2);
                dibujarJ1(70, 30);*/
                cout << "GANASTE ESTA RONDA JUGADOR 1!!" << endl;
                repetirRonda = false;
                contadorDePartidasGanadasJugador1++;
                _getch();
                Console::Clear();
            }
            if (ganasteJugador1 == false && ganasteJugador2 == false) {
                repetirRonda = true;
                Console::Clear();
                cout << "PERDIERON LOS DOS!!" << endl;
                _getch();
            }
            if (acumuladorJugador1 > 0 && acumuladorJugador2 > 0 && acumuladorJugador1 < 22 && acumuladorJugador2 < 22 && (acumuladorJugador1 == acumuladorJugador2)) {
                repetirRonda = true;
                acumuladorJugador1 = 0;
                acumuladorJugador2 = 0;
                Console::Clear();
                cout << "EMPATE!!" << endl;
                _getch();
            }

        }
        if (i <= 10 && contadorDePartidasGanadasJugador1 >= 5 && contadorDePartidasGanadasJugador1 > contadorDePartidasGanadasJugador2) {
            dibujarVictoria(6, 2);
            dibujarMagistral(6, 2);
            dibujarJ1(70, 30);
            break;
        }
        if (i <= 10 && contadorDePartidasGanadasJugador2 >= 5 && contadorDePartidasGanadasJugador2 > contadorDePartidasGanadasJugador1) {
            dibujarVictoria(6, 2);
            dibujarMagistral(6, 2);
            dibujarJ2(70, 30);
            break;
        }
    }
    _getch();
    cout << "SE TERMINO EL JUEGO" << endl;
    _getch();
    return 0;
}