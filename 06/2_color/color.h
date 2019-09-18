#ifndef COLOR_H
#define COLOR_H

typedef union {
    unsigned int val;

    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;
    } rgba;
} color_t;

#endif /* COLOR_H */
