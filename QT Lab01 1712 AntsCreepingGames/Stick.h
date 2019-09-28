#ifndef STICK_H_INCLUDED
#define STICK_H_INCLUDED

class Stick{
private:
    int length;

public:
    Stick();
    Stick(int length);
    int getLength();
    void setLength(int length);
};

#endif // STICK_H_INCLUDED
