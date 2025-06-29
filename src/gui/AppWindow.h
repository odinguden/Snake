//
// Created by odin on 6/11/25.
//

#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <gtkmm.h>


class AppWindow : public Gtk::Window {
public:
    AppWindow();
    void update();
private:
    Gtk::Button button;
    Gtk::Grid grid;
    Gtk::Box button_box;

    void on_button_click();
};



#endif //APPWINDOW_H
