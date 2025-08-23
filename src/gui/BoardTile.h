//
// Created by odin on 7/9/25.
//

#ifndef BOARDTILE_H
#define BOARDTILE_H
#include <gtkmm/frame.h>


class BoardTile : public Gtk::Frame{
    BoardTile(const Glib::ustring& cssColor);
};



#endif //BOARDTILE_H
