//
// Created by odin on 6/11/25.
//

#include "AppWindow.h"
#include <iostream>

AppWindow::AppWindow() {
    set_title("Snake");
    set_default_size(600,600);
    set_role("Snake Game");
    set_keep_above(true);
    set_resizable(false);

    button_box.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
    add(button_box);

    button.set_label("Click me");
    button.signal_clicked().connect(sigc::mem_fun(*this, &AppWindow::on_button_click));
    button.set_size_request(100, 50);
    button.set_hexpand(false);
    button.set_vexpand(false);
    button_box.pack_start(button, Gtk::PACK_SHRINK);
    button.show();
    button_box.show();
}
int i = 0;
void AppWindow::on_button_click() {
    i++;
    std::cout << "Button has been clicked " << i << " times" << std::endl;
}

void AppWindow::update() {
    std::cout << "Not implemented" << std::endl;
}
