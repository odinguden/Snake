//
// Created by odin on 6/11/25.
//
#include <gtkmm.h>
#include <iostream>

#include "src/game/Board.h"
#include "src/gui/AppWindow.h"
#include "src/no-gui/NoGui.h"

int main(int argc, char *argv[]) {
    std::string arg;
    if (argc > 1) {
        arg = argv[1];
        std::cout << "Arg detected: " << arg << std::endl;
    }

    Board *board = new Board();

    if (arg == "no-gui" || true) {
        std::cout << "No gui detected" << std::endl;
        NoGui *noGui = new NoGui(board);
        noGui->drawBoard();
    }

    if (argc == 1000) {
        const auto app = Gtk::Application::create(argc, argv, "no.odinlyn");
        AppWindow window;
        return app->run(window);
    }
    return 0;
}
