#ifndef SHAPE_H
#define SHAPE_H

typedef struct {
    int x;
    int y;
} point_t;

typedef struct {
    point_t start;
    point_t end;
} line_t;

typedef struct {
    point_t top_left;
    point_t bottom_right;
} rectangle_t;

rectangle_t build_rectangle(point_t p0, point_t p1);
int get_line_length_sq(line_t line);
int get_rectangle_area(rectangle_t rect);

#endif /* SHAPE_H */
