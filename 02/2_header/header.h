#ifndef HEADER_H
#define HEADER_H

int g_int_value = 0;
float g_float_value = 0.0f;

void increase_value(void)
{
    g_int_value += 100;
    g_float_value += 100.0f;
}

void decrease_value(void)
{
    g_int_value -= 100;
    g_float_value -= 100.0f;
}

#endif /* HEADER_H */
