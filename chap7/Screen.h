#ifndef SCREEN_H
#define SCREEN_H

class Screen {
    friend void Window_mgr::clear(ScreenIndex);
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd) : height(ht), width(wd) {}
        Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
        
        char get() const { return contents[cursor]; }
        inline char get(pos, pos) const;
        Screen &move(pos, pos);
        Screen &set(char);
        Screen &set(pos, pos, char);
        Screen &display(std::ostream&);
        const Screen &display(std::ostream&) const;

    private:
        void do_display(std::ostream &os) const { os << contents; }
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};

#endif

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline
Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline
Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline
Screen &Screen::set(pos r, pos c, char ch) {
    contents[r * width + c] = ch;
    return *this;
}

inline
Screen &Screen::display(std::ostream &os) {
    do_display(os);
    return *this;
}

inline
const Screen &Screen::display(std::ostream &os) const {
    do_display(os);
    return *this;
}

