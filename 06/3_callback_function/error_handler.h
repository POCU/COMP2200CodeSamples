#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

void register_error_handler(void (*handler)(const char* msg));
void log_error(const char* msg);

void default_error_handler(const char* msg);

#endif /* ERROR_HANDLER_H */

