//
// Created by odin on 6/11/25.
//
#include <gtkmm.h>
#include <iostream>

#include "src/gui/AppWindow.h"

int main(int argc, char *argv[]) {
    const auto app = Gtk::Application::create(argc, argv, "no.odinlyn");
    AppWindow window;

    return app->run(window);
}
