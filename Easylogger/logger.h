//logger.h
 
#ifndef LOGGER_H
#define LOGGER_H
 
#include "easylogging++.h"
 
#define _LOG_DEBUG LOG(DEBUG)
#define _LOG_ERROR LOG(ERROR)
#define _LOG_FATAL LOG(FATAL)
#define _LOG_INFO LOG(INFO)
 
class Logger
{
public:
    explicit Logger();
    static Logger *instance();
};
 
#endif // LOGGER_H
