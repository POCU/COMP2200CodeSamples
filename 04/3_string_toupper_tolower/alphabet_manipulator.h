#ifndef ALPHABET_MANIPULATOR_H
#define ALPHABET_MANIPULATOR_H

#define UPPER_A_ASCII (65)
#define UPPER_Z_ASCII (90)

#define LOWER_A_ASCII (97)
#define LOWER_Z_ASCII (122)

#define ALPHA_ASCII_DIFF (32)

int is_alpha(int c);

int to_upper(int c);
int to_lower(int c);

void string_toupper(char* str);
void string_tolower(char* str);

#endif /* ALPHABET_MANIPULATOR_H */
